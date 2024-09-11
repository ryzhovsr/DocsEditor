#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS HtmlExportOptions : public virtual Object
		{
		public:
			/*

			*/
			bool GetEPubExportFont();
			/*

			*/
			void SetEPubExportFont(bool value);
			/*
			<summary>
				Gets the type of the HTML export CSS style sheet.
			</summary>
			<value>The type of the HTML export CSS style sheet.</value>
			*/
			CssStyleSheetType GetCssStyleSheetType();
			/*
			<summary>
				Sets the type of the HTML export CSS style sheet.
			</summary>
			<value>The type of the HTML export CSS style sheet.</value>
			*/
			void SetCssStyleSheetType(CssStyleSheetType value);
			/*
			<summary>
				If false,indicates exporting the image as a single file;
				If true, embedding the image into the html code using Data URI scheme.
				The default value is false.
				Note: Internet Explorer 8 limits data URIs to a maximum length of 32KB.
			</summary>
			<value>The value of the HTML export image style sheet.</value>
			*/
			bool GetImageEmbedded();
			/*
			<summary>
				If false,indicates exporting the image as a single file;
				If true, embedding the image into the html code using Data URI scheme.
				The default value is false.
				Note: Internet Explorer 8 limits data URIs to a maximum length of 32KB.
			</summary>
			<value>The value of the HTML export image style sheet.</value>
			*/
			void SetImageEmbedded(bool value);
			/*
			<summary>
				Gets a switch that determines whether to export the document styles to head.
			</summary>
			*/
			bool GetIsExportDocumentStyles();
			/*
			<summary>
				Sets a switch that determines whether to export the document styles to head.
			</summary>
			*/
			void SetIsExportDocumentStyles(bool value);
			/*
			<summary>
				Gets the name of the HTML export CSS style sheet file.
			</summary>
			<value>The name of the HTML export CSS style sheet file.</value>
			*/
			LPCWSTR_S GetCssStyleSheetFileName();
			/*
			<summary>
				Sets the name of the HTML export CSS style sheet file.
			</summary>
			<value>The name of the HTML export CSS style sheet file.</value>
			*/
			void SetCssStyleSheetFileName(LPCWSTR_S value);
			/*
			<summary>
				Gets a value indicating whether HTML export headers footers.
			</summary>
			*/
			bool GetHasHeadersFooters();
			/*
			<summary>
				Sets a value indicating whether HTML export headers footers.
			</summary>
			*/
			void SetHasHeadersFooters(bool value);
			/*
			<summary>
				Gets a value indicating whether HTML export text input form field as text.
			</summary>
			<value>
				If HTML export text input form field as text, set to <c>true</c>.
			</value>
			*/
			bool GetIsTextInputFormFieldAsText();
			/*
			<summary>
				Sets a value indicating whether HTML export text input form field as text.
			</summary>
			<value>
				If HTML export text input form field as text, set to <c>true</c>.
			</value>
			*/
			void SetIsTextInputFormFieldAsText(bool value);
			/*
			<summary>
				Gets the HTML export images folder.
			</summary>
			<value>The HTML export images folder.</value>
			*/
			LPCWSTR_S GetImagesPath();
			/*
			<summary>
				Sets the HTML export images folder.
			</summary>
			<value>The HTML export images folder.</value>
			*/
			void SetImagesPath(LPCWSTR_S value);
			/*
			<summary>
				 Gets a value whether Image Path is relative to the file save path.
			</summary>
			<value>
				 If Image Path wants to be relative to the file save path, set to <c>true</c>.
			</value>
			*/
			bool GetUseSaveFileRelativePath();
			/*
			<summary>
				 Sets a value whether Image Path is relative to the file save path.
			</summary>
			<value>
				 If Image Path wants to be relative to the file save path, set to <c>true</c>.
			</value>
			*/
			void SetUseSaveFileRelativePath(bool value);
		private:
		};
	}
}