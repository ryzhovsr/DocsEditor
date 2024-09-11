#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "WatermarkBase.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS TextWatermark : public virtual WatermarkBase
		{
			friend class Object;
		public:
			TextWatermark();

			TextWatermark(LPCWSTR_S text);

			TextWatermark(LPCWSTR_S text, LPCWSTR_S fontName, int fontSize, WatermarkLayout layout);
			/*
			<summary>
				Gets watermark text
			</summary>
			*/
			LPCWSTR_S GetText();
			/*
			<summary>
				Sets watermark text
			</summary>
			*/
			void SetText(LPCWSTR_S value);
			/*
			<summary>
				Gets watermark text's font name.
			</summary>
			*/
			LPCWSTR_S GetFontName();
			/*
			<summary>
				Sets watermark text's font name.
			</summary>
			*/
			void SetFontName(LPCWSTR_S value);
			/*
			<summary>
				Gets text watermark size.
			</summary>
			*/
			float GetFontSize();
			/*
			<summary>
				Sets text watermark size.
			</summary>
			*/
			void SetFontSize(float value);
			/*
			<summary>
				Gets text watermark color.
			</summary>
			*/
			intrusive_ptr<Color> GetColor();
			/*
			<summary>
				Sets text watermark color.
			</summary>
			*/
			void SetColor(intrusive_ptr<Color> value);
			/*
			<summary>
				Gets semitransparent property for Text watermark.
			</summary>
			*/
			bool GetSemitransparent();
			/*
			<summary>
				Sets semitransparent property for Text watermark.
			</summary>
			*/
			void SetSemitransparent(bool value);
			/*
			<summary>
				Gets layout for Text watermark.
			</summary>
			*/
			WatermarkLayout GetLayout();
			/*
			<summary>
				Sets layout for Text watermark.
			</summary>
			*/
			void SetLayout(WatermarkLayout value);
		private:
		};
	}
}