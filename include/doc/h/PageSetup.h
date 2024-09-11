#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "DocumentSerializable.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS PageSetup : public virtual DocumentSerializable
		{
		public:
			/*
			<summary>
				Gets the length of the auto tab.
			</summary>
		    <value>The length of the auto tab.</value>
			*/
			float GetDefaultTabWidth();
			/*
			<summary>
				Sets the length of the auto tab.
			</summary>
			<value>The length of the auto tab.</value>
			*/
			void SetDefaultTabWidth(float value);
			/*
			<summary>
				Gets page size in points.
			</summary>
			*/
			intrusive_ptr<SizeF> GetPageSize();
			/*
			<summary>
				Sets page size in points.
			</summary>
			*/
			void SetPageSize(intrusive_ptr<SizeF> value);
			/*
			<summary>
				Returns orientation of a page.
			</summary>
			*/
			PageOrientation GetOrientation();
			/*
			<summary>
				Sets orientation of a page.
			</summary>
			*/
			void SetOrientation(PageOrientation value);
			/*
			<summary>
				Gets vertical alignment.
			</summary>
			*/
			PageAlignment GetVerticalAlignment();
			/*
			<summary>
				Sets vertical alignment.
			</summary>
			*/
			void SetVerticalAlignment(PageAlignment value);
			/*
			<summary>
				Gets page margins in points.
			</summary>
			*/
			intrusive_ptr<MarginsF> GetMargins();
			/*
			<summary>
				Sets page margins in points.
			</summary>
			*/
			void SetMargins(intrusive_ptr<MarginsF> value);
			/*
			<summary>
				Gets extra space added to the margin for document binding in points.
			</summary>
			*/
			float GetGutter();
			/*
			<summary>
				Sets extra space added to the margin for document binding in points.
			</summary>
			*/
			void SetGutter(float value);
			/*
			<summary>
				Gets height of header in points.
			</summary>
			*/
			float GetHeaderDistance();
			/*
			<summary>
				Sets height of header in points.
			</summary>
			*/
			void SetHeaderDistance(float value);
			/*
			<summary>
				Gets footer height in points.
			</summary>
			*/
			float GetFooterDistance();
			/*
			<summary>
				Sets footer height in points.
			</summary>
			*/
			void SetFooterDistance(float value);
			/*
			<summary>
				Gets width of client area.
			</summary>
			*/
			float GetClientWidth();
			/*
			<summary>
				Gets width of client area.
			</summary>
			*/
			float GetClientHeight();
			/*
			<summary>
				Setting to specify that the current section has a different header/footer for first page.
			</summary>
			*/
			bool GetDifferentFirstPageHeaderFooter();
			/*
			<summary>
				Setting to specify that the current section has a different header/footer for first page.
			</summary>
			*/
			void SetDifferentFirstPageHeaderFooter(bool value);
			/*
			<summary>
				True if the document has different headers and footers
				for odd-numbered and even-numbered pages.
			</summary>
			*/
			bool GetDifferentOddAndEvenPagesHeaderFooter();
			/*
			<summary>
				True if the document has different headers and footers
				for odd-numbered and even-numbered pages.
			</summary>
			*/
			void SetDifferentOddAndEvenPagesHeaderFooter(bool value);
			/*
			<summary>
				Returns line numbering mode
			</summary>
			*/
			LineNumberingRestartMode GetLineNumberingRestartMode();
			/*
			<summary>
				Sets line numbering mode
			</summary>
			*/
			void SetLineNumberingRestartMode(LineNumberingRestartMode value);
			/*
			<summary>
				Gets line numbering step
			</summary>
			*/
			int GetLineNumberingStep();
			/*
			<summary>
				Sets line numbering step
			</summary>
			*/
			void SetLineNumberingStep(int value);
			/*
			<summary>
				Gets line numbering start value
			</summary>
			*/
			int GetLineNumberingStartValue();
			/*
			<summary>
				Sets line numbering start value
			</summary>
			*/
			void SetLineNumberingStartValue(int value);
			/*
			<summary>
				Gets distance from text in lines numbering
			</summary>
			*/
			float GetLineNumberingDistanceFromText();
			/*
			<summary>
				Sets distance from text in lines numbering
			</summary>
			*/
			void SetLineNumberingDistanceFromText(float value);
			/*
			<summary>
				Gets the value that determine on which pages border is applied
			</summary>
			*/
			PageBordersApplyType GetPageBordersApplyType();
			/*
			<summary>
				Sets the value that determine on which pages border is applied
			</summary>
			*/
			void SetPageBordersApplyType(PageBordersApplyType value);
			/*
			<summary>
				Gets the position of page border
			</summary>
			*/
			PageBorderOffsetFrom GetPageBorderOffsetFrom();
			/*
			<summary>
				Sets the position of page border
			</summary>
			*/
			void SetPageBorderOffsetFrom(PageBorderOffsetFrom value);
			/*
			<summary>
				Gets a value indicating whether this instance is front page border.
			</summary>
			*/
			bool GetIsFrontPageBorder();
			/*
			<summary>
				Sets a value indicating whether this instance is front page border.
			</summary>
			*/
			void SetIsFrontPageBorder(bool value);
			/*
			<summary>
				Gets a value indicating whether the page border include the header.
				If the page border is not measured from the text extents using a value of text in the PageBorderOffsetFrome, then it can be ignored.
			</summary>
			*/
			bool GetPageBorderIncludeHeader();
			/*
			<summary>
				Sets a value indicating whether the page border include the header.
				If the page border is not measured from the text extents using a value of text in the PageBorderOffsetFrome, then it can be ignored.
			</summary>
			*/
			void SetPageBorderIncludeHeader(bool value);
			/*
			<summary>
				Gets a value indicating whether the page border include the footer.
				If the page border is not measured from the text extents using a value of text in the PageBorderOffsetFrome, then it can be ignored.
			</summary>
			*/
			bool GetPageBorderIncludeFooter();
			/*
			<summary>
				Sets a value indicating whether the page border include the footer.
				If the page border is not measured from the text extents using a value of text in the PageBorderOffsetFrome, then it can be ignored.
			</summary>
			*/
			void SetPageBorderIncludeFooter(bool value);
			/*
			<summary>
				Gets page borders collection
			</summary>
			*/
			intrusive_ptr<Borders> GetBorders();
			/*
			<summary>
				Gets whether section contains right-to-left text.
			</summary>
			*/
			bool GetBidi();
			/*
			<summary>
				Sets whether section contains right-to-left text.
			</summary>
			*/
			void SetBidi(bool value);
			/*
			<summary>
				Gets a value indicating whether equal column width.
			</summary>
		    <value>
		    <c>true</c> if equal column width; otherwise, <c>false</c>.</value>
			*/
			bool GetEqualColumnWidth();
			/*
			<summary>
				Sets a value indicating whether equal column width.
			</summary>
			<value>
			<c>true</c> if equal column width; otherwise, <c>false</c>.</value>
			*/
			void SetEqualColumnWidth(bool value);
			/*
			<summary>
				Gets the page number style.
			</summary>
		    <value>The page number style.</value>
			*/
			PageNumberStyle GetPageNumberStyle();
			/*
			<summary>
				Sets the page number style.
			</summary>
			<value>The page number style.</value>
			*/
			void SetPageNumberStyle(PageNumberStyle value);
			/*
			<summary>
				Gets the page starting number.
			</summary>
		    <value>The page starting number.</value>
			*/
			int GetPageStartingNumber();
			/*
			<summary>
				Sets the page starting number.
			</summary>
			<value>The page starting number.</value>
			*/
			void SetPageStartingNumber(int value);
			/*
			<summary>
				Gets a value indicating whether to restart page numbering.
			</summary>
		    <value>
				if restart page numbering, set to <c>true</c>.
			</value>
			*/
			bool GetRestartPageNumbering();
			/*
			<summary>
				Sets a value indicating whether to restart page numbering.
			</summary>
			<value>
				if restart page numbering, set to <c>true</c>.
			</value>
			*/
			void SetRestartPageNumbering(bool value);
			/*
			<summary>
				Gets the value specifies if a vertical line is draw between each
				of the text columns in the this section.
			</summary>
			*/
			bool GetColumnsLineBetween();
			/*
			<summary>
				Sets the value specifies if a vertical line is draw between each
				of the text columns in the this section.
			</summary>
			*/
			void SetColumnsLineBetween(bool value);
			/*
			<summary>
				Gets Character Spacing Control.
			</summary>
			*/
			CharacterSpacing GetCharacterSpacingControl();
			/*
			<summary>
				Sets Character Spacing Control.
			</summary>
			*/
			void SetCharacterSpacingControl(CharacterSpacing value);
			/*
			<summary>
				Inserts the page numbers.
			</summary>
			<param name="fromTopPage">if it specifies the top of page, set to <c>true</c>.</param>
			<param name="horizontalAlignment">The horizontal alignment.</param>
			*/
			void InsertPageNumbers(bool fromTopPage, PageNumberAlignment horizontalAlignment);
			/*

			*/
			virtual LPCWSTR_S ToString();
		private:
		};
	}
}