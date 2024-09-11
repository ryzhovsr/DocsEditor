#pragma once
#include "pch.h"
#include "PdfSecurity.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS ToPdfParameterList : public virtual Object
		{
		public:
			ToPdfParameterList();
			/*
			<summary>
				Gets a value indicating whether to change the fields before
				saving the document when using the new engine.
				The default value is true.
			</summary>
			*/
			bool GetUpdateFields();
			/*
			<summary>
				Sets a value indicating whether to change the fields before
				saving the document when using the new engine.
				The default value is true.
			</summary>
			*/
			void SetUpdateFields(bool value);
			/*
			<summary>
				Gets a value indicating whether use the PS conversion.
			</summary>
		    <value>
		    <c>true</c> if use the PS conversion;otherwise,<c>false</c>.</value>
			*/
			bool GetUsePSCoversion();
			/*
			<summary>
				Sets a value indicating whether use the PS conversion.
			</summary>
			<value>
			*/
			void SetUsePSCoversion(bool value);
			/*
			<summary>
				Gets hidden text is converted.
			</summary>
			*/
			bool GetIsHidden();
			/*
			<summary>
				Sets hidden text is converted.
			</summary>
			*/
			void SetIsHidden(bool value);
			/*
			<summary>
				Gets Embedded into the PDF document font name.
			</summary>
			*/
			//System.Collections.Generic.List`1[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] GetEmbeddedFontNameList ();
			/*
			<summary>
				Sets Embedded into the PDF document font name.
			</summary>
			*/
			void SetEmbeddedFontNameList(std::vector<std::wstring> value);
			/*
			<summary>
				Gets all fonts are embedded in the PDF document.
			</summary>
			*/
			bool GetIsEmbeddedAllFonts();
			/*
			<summary>
				Sets all fonts are embedded in the PDF document.
			</summary>
			*/
			void SetIsEmbeddedAllFonts(bool value);
			/*
			<summary>
				Gets whether remove the link on the hyperlink and keep the character format
				during converting to pdf.
			</summary>
			*/
			bool GetDisableLink();
			/*
			<summary>
				Sets whether remove the link on the hyperlink and keep the character format
				during converting to pdf.
			</summary>
			*/
			void SetDisableLink(bool value);
			/*
			<summary>
				Gets To Pdf TextBox HeightType.The default is "Exactly".
			</summary>
			*/
			bool GetIsAtLast();
			/*
			<summary>
				Sets To Pdf TextBox HeightType.The default is "Exactly".
			</summary>
			*/
			void SetIsAtLast(bool value);
			/*
			<summary>
				Gets the Pdf document's Conformance-level.
			</summary>
			*/
			PdfConformanceLevel GetPdfConformanceLevel();
			/*
			<summary>
				Sets the Pdf document's Conformance-level.
			</summary>
			*/
			void SetPdfConformanceLevel(PdfConformanceLevel value);
			/*
			<summary>
				Represents the security settings of the PDF document.
			</summary>
			*/
			intrusive_ptr<PdfSecurity> GetPdfSecurity();
			/*
			<summary>
				Gets the a value that determines whether create the bookmarks using Headings.
			</summary>
			*/
			bool GetCreateWordBookmarksUsingHeadings();
			/*
			<summary>
				Sets the a value that determines whether create the bookmarks using Headings.
			</summary>
			*/
			void SetCreateWordBookmarksUsingHeadings(bool value);
			/*
			<summary>
				Gets the a value, Whether to use word bookmars when create the bookmarks.
			</summary>
			*/
			bool GetCreateWordBookmarks();
			/*
			<summary>
				Sets the a value, Whether to use word bookmars when create the bookmarks.
			</summary>
			*/
			void SetCreateWordBookmarks(bool value);
			/*
			<summary>
				Gets the word bookmarks title. The default value for this title is null.
			</summary>
		    <value>The word bookmarks title.</value>
			*/
			LPCWSTR_S GetWordBookmarksTitle();
			/*
			<summary>
				Sets the word bookmarks title. The default value for this title is null.
			</summary>
			*/
			void SetWordBookmarksTitle(LPCWSTR_S value);
			/*
			<summary>
				Gets the text color of the word bookmarks.
				the default value is the "SaddleBrown" color(#FF8B4513).
			</summary>
		    <value>The text color of the word boomarks. </value>
			*/
			intrusive_ptr<Color> GetWordBookmarksColor();
			/*
			<summary>
				Sets the text color of the word bookmarks.
				the default value is the "SaddleBrown" color(#FF8B4513).
			</summary>
			*/
			void SetWordBookmarksColor(intrusive_ptr<Color> value);
			/*
			<summary>
				Gets the text style of the word bookmarks.
			    The default value is the Bold.
			</summary>
		    <value>The word bookmarks text style.</value>
			*/
			BookmarkTextStyle GetWordBookmarksTextStyle();
			/*
			<summary>
				Sets the text style of the word bookmarks.
				The default value is the Bold.
			</summary>
			*/
			void SetWordBookmarksTextStyle(BookmarkTextStyle value);
			/*
			<summary>
				Gets or sets the private font paths.
			</summary>
			*/
			//System.Collections.Generic.List`1[[Spire.Doc.PrivateFontPath, Spire.Doc, Version=10.9.9.0, Culture=neutral, PublicKeyToken=663f351905198cb3]] GetPrivateFontPaths ();
			/*

			*/
			void SetPrivateFontPaths(std::vector<intrusive_ptr<PrivateFontPath>> vect);
		private:
		};
	}
}