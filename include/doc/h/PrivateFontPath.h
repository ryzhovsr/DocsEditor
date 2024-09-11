#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS PrivateFontPath : public virtual Object
		{
			friend class Object;
		public:
			PrivateFontPath(LPCWSTR_S fontName, LPCWSTR_S fontPath);

			PrivateFontPath(LPCWSTR_S fontName, LPCWSTR_S fontPath, bool useArabicConcatenationRules);

			PrivateFontPath(LPCWSTR_S fontName, FontStyle fontStyle, LPCWSTR_S fontPath);

			PrivateFontPath(LPCWSTR_S fontName, FontStyle fontStyle, LPCWSTR_S fontPath, bool useArabicConcatenationRules);
			/*
			<summary>
				Gets the path of the font.
			</summary>
			*/
			LPCWSTR_S GetFontPath();
			/*
			<summary>
				Sets the path of the font.
			</summary>
			*/
			void SetFontPath(LPCWSTR_S value);
			/*
			<summary>
				Gets the name of the font.
			</summary>
			*/
			LPCWSTR_S GetFontName();
			/*
			<summary>
				Sets the name of the font.
			</summary>
			*/
			void SetFontName(LPCWSTR_S value);
			/*
			<summary>
				Gets the style of the font.
			</summary>
			*/
			FontStyle GetFontStyle();
			/*
			<summary>
				Sets the style of the font.
			</summary>
			*/
			void SetFontStyle(FontStyle value);
			/*
			<summary>
				Gets a value indicating whether use arabic concatenation rules. default is true.
			</summary>
			<value>
			<c>true</c> if true use arabic concatenation rules,<c>false</c>.</value>
			*/
			bool GetUseArabicConcatenationRules();
			/*
			<summary>
				Sets a value indicating whether use arabic concatenation rules. default is true.
			</summary>
			<value>
			<c>true</c> if true use arabic concatenation rules,<c>false</c>.</value>
			*/
			void SetUseArabicConcatenationRules(bool value);
		public:
			PrivateFontPath();
		private:
		};
	}
}