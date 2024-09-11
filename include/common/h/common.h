#pragma once

#ifndef PCH_H
#define PCH_H

// 添加要在此处预编译的标头


//#ifdef _WIN32
//#include "windows.h"
//#define symLoad GetProcAddress
//#define EXPORTS __declspec(dllexport)
//#else
//#include "dlfcn.h"
//#include <unistd.h>
//#define symLoad dlsym
//#define EXPORTS
//#endif

#include <vector>
//#include <locale>
#ifdef _WIN32
#include <codecvt>
#else
#include <stdexcept>
#include <string>
#include <iconv.h>
#endif
#endif //PCH_H

#ifdef GetNumberFormat//WinNIs.h
#undef GetNumberFormat
#endif
#ifdef CreateFont//wingdi.h
#undef CreateFont
#endif
#ifdef GetForm
#undef GetForm
#endif
#ifdef FindText
#undef FindText
#endif
#ifdef ReplaceText
#undef ReplaceText
#endif
#define WIN32_LEAN_AND_MEAN             // 从 Windows 头文件中排除极少使用的内容

#include "Object.h"
namespace Spire {
#ifdef _SPIRE_XLS
	namespace Xls{
#elif defined(_SPIRE_DOC)
	namespace Doc{
#elif defined(_SPIRE_PDF)
	namespace Pdf{
#elif defined(_SPIRE_PPT)
	namespace Presentation{
#else
	namespace Xls{
#endif
		enum class EmfType;
		enum class FontStyle;
		enum class GraphicsUnit;
		enum class RegexOptions;
		class Object;
		class CultureInfo;
		class Color;
		class Font;
		class Bitmap;
		class Stream;
		class Encoding;
		class Image;
		class ImageFormat;
		class Point;
		class PointF;
		class Size;
		class SizeF;
		class Rectangle;
		class RectangleF;
		class DateTime;
#ifdef _WIN32
		HINSTANCE EXPORTS GetStaticHandle();
#ifdef _SPIRE_XLS
		HINSTANCE GetStaticHandleXls();
#elif defined(_SPIRE_DOC)
		HINSTANCE GetStaticHandleDoc();
#elif defined(_SPIRE_PDF)
		HINSTANCE GetStaticHandlePdf();
#elif defined(_SPIRE_PPT)
		HINSTANCE GetStaticHandlePpt();
#else
		HINSTANCE GetStaticHandleXls();
#endif
#else
		void* EXPORTS GetStaticHandle();
#ifdef _SPIRE_XLS
		void* GetStaticHandleXls();
#elif defined(_SPIRE_DOC)
		void* GetStaticHandleDoc();
#elif defined(_SPIRE_PDF)
		void* GetStaticHandlePdf();
#elif defined(_SPIRE_PPT)
		void* GetStaticHandlePpt();
#else
		void* GetStaticHandleXls();
#endif
#endif
#pragma warning(push)
#pragma warning(disable:4312)
#ifdef _WIN32
		class SpireException : public std::invalid_argument {
		public:
			SpireException(int* p)
				: std::invalid_argument(std::wstring_convert<std::codecvt_utf8<wchar_t>>().to_bytes(reinterpret_cast<wchar_t*>(p)))
			{
				message = reinterpret_cast<wchar_t*>(p);
			}
			LPCWSTR_S Message() const
			{
				return message ? message : L"Unknown exception";
			}
		private:
			LPCWSTR_S message;
		};
#else
		class SpireException : public std::invalid_argument {
		public:
			SpireException(int* p) : std::invalid_argument(convertToString(reinterpret_cast<wchar_t*>(p))), message(reinterpret_cast<wchar_t*>(p)) {
			}

			LPCWSTR_S Message() const {
				return message ? message : L"Unknown exception";
			}

		private:
			std::string convertToString(const wchar_t* wstr) const {
				std::string result;
				size_t inSize = wcslen(wstr);
				size_t outSize = inSize * 6; 
				char* output = new char[outSize];

				iconv_t conv = iconv_open("UTF-8", "WCHAR_T");
				if (conv != reinterpret_cast<iconv_t>(-1)) {
					char* input = reinterpret_cast<char*>(const_cast<wchar_t*>(wstr));
					size_t inBytes = inSize * sizeof(wchar_t);
					char* outputByte = output;
					size_t outBytes = outSize;

					if (iconv(conv, &input, &inBytes, &outputByte, &outBytes) != static_cast<size_t>(-1)) {
						result = std::string(output, outSize - outBytes);
					}
					iconv_close(conv);
				}

				delete[] output;
				return result;
			}

		private:
			LPCWSTR_S message;
	};
#endif

		
#pragma warning(pop)
		struct IntPtrArray
		{
			int size;
			char data[80];
		};
		struct IntPtrWithTypeName
		{
			byte intPtr[8];
			wchar_t* typeName;
		};

		template <typename T>
		T* GetArrayFromVector(std::vector<T> vect)
		{
			int count = (int)vect.size();
			T* arrs = new T[count];
			for (int i = 0; i < count; i++)
			{
				arrs[i] = vect[i];
			}
			return arrs;
		}

		template <typename T>
		int** GetObjIntPtrArrayFromVector(std::vector<intrusive_ptr<T>> vect)
		{
			int count = (int)vect.size();
			int** arrs = new int* [count];
			for (int i = 0; i < count; i++)
			{
				Object* obj = dynamic_cast<Object*>(vect[i].get());
				arrs[i] = obj->GetIntPtr();
			}
			return arrs;
		}
		ULONG64* GetIntPtrArray(IntPtrArray intPtrArr);
		char* GetByteArray(IntPtrArray intPtrArr);
		void WriteArryToStream(IntPtrArray intPtrArr, std::ostream& stream);
		void FreeHGlobal(void* ptr);
		void FreeAllAllocated();
		int* CreateStreamIntPtr(std::istream& stream);

		template <typename T>
		std::vector<T> GetVectorFromArray(IntPtrArray intPtrArr)
		{
			char* intPtr = GetByteArray(intPtrArr);
			T* arr = (T*)(intPtr);
			std::vector<T> vector = std::vector<T>();
			for (int i = 0; i < intPtrArr.size; i++)
			{
				vector.push_back(arr[i]);
			}
			return vector;
		}

		template <typename T>
		std::vector<intrusive_ptr<T>> GetObjVectorFromArray(IntPtrArray intPtrArr)
		{
			ULONG64* arr = GetIntPtrArray(intPtrArr);
			std::vector<intrusive_ptr<T>> objs = std::vector<intrusive_ptr<T>>();
			for (int i = 0; i < intPtrArr.size; i++)
			{
				int* pObj = (int*)(arr[i]);
				T* range = Object::Create<T>(pObj, NULL);
				objs.push_back(range);
			}
			return objs;
		}

		int* GetObjIntPtr(int* object, LPCWSTR_S subName, LPCWSTR_S paraValues);
		int GetIntValue(int* object, LPCWSTR_S valueName, LPCWSTR_S paraValues);
		double GetDoubleValue(int* object, LPCWSTR_S valueName, LPCWSTR_S paraValues);
		LPCWSTR_S GetStringValue(int* object, LPCWSTR_S valueName, LPCWSTR_S paraValues);
		bool GetBoolValue(int* object, LPCWSTR_S valueName, LPCWSTR_S paraValues);
		intrusive_ptr<DateTime> GetDateTimeValue(int* object, LPCWSTR_S valueName, LPCWSTR_S paraValues);
		void SetIntPtr(int* object, LPCWSTR_S valueName, int* value);
		void SetIntValue(int* object, LPCWSTR_S valueName, int value);
		void SetDoubleValue(int* object, LPCWSTR_S valueName, double value);
		void SetStringValue(int* object, LPCWSTR_S valueName, LPCWSTR_S value);
		void SetBoolValue(int* object, LPCWSTR_S valueName, bool value);
		void SetDateTimeValue(int* object, LPCWSTR_S valueName, tm value);
		void CallMethod(int* object, LPCWSTR_S methodName, LPCWSTR_S paraValues);
		void ReleasePtr(const char* ptr);

#define STATIC_CALL_AND_THROW_EXCEPTION(code) \
        int _val = 0; \
        int** _p = new int*(&(_val)); \
        int* _val1 = *(_p); \
		code; \
        int* _val2 = *(_p); \
        if (_val2 != (_val1)) { \
			throw SpireException(*_p); \
        } \
        delete (_p); 

#define CALL_AND_THROW_EXCEPTION(code) \
        int** _p = new int*(instance); \
        int* _val = *(_p); \
		code; \
        if (_val != *(_p)) { \
			throw SpireException(*_p); \
        } \
        delete (_p); 

	}
}