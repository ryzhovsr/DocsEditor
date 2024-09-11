#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "WordAttrCollection.h"
#include "TabCollection.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS ParagraphFormat : public virtual WordAttrCollection
		{
		public:
			/*
			<summary>
				Returns horizontal alignment for the paragraph.
			</summary>
			*/
			HorizontalAlignment GetHorizontalAlignment();
			/*
			<summary>
				Sets horizontal alignment for the paragraph.
			</summary>
			*/
			void SetHorizontalAlignment(HorizontalAlignment value);
			/*
			<summary>
				Returns the value that represents the left indent for paragraph.
			</summary>
			*/
			float GetLeftIndent();
			/*
			<summary>
				Sets the value that represents the left indent for paragraph.
			</summary>
			*/
			//void SetLeftIndent(float value);
			/*
			<summary>
				Returns the value that represents the right indent for paragraph.
			</summary>
			*/
			float GetRightIndent();
			/*
			<summary>
				Sets the value that represents the right indent for paragraph.
			</summary>
			*/
			//void SetRightIndent(float value);
			/*
			<summary>
				Gets the value(in points) for first line or hanging indent.Positive
				value represents first-line indent, and Negative value
				represents hanging indent.
			</summary>
			*/
			float GetFirstLineIndent();
			/*
			<summary>
				Sets the value(in points) for first line or hanging indent.Positive
				value represents first-line indent, and Negative value
				represents hanging indent.
			</summary>
			*/
			//void SetFirstLineIndent(float value);
			/*
			<summary>
				Returns the spacing (in points) before the paragraph.
			</summary>
			*/
			float GetBeforeSpacing();
			/*
			<summary>
				Sets the spacing (in points) before the paragraph.
			</summary>
			*/
			void SetBeforeSpacing(float value);
			/*
			<summary>
				Returns the spacing (in points) after the paragraph.
			</summary>
			*/
			float GetAfterSpacing();
			/*
			<summary>
				Sets the spacing (in points) after the paragraph.
			</summary>
			*/
			void SetAfterSpacing(float value);
			/*
			<summary>
				Gets collection of borders in the paragraph
			</summary>
			*/
			intrusive_ptr<Borders> GetBorders();
			/*
			<summary>
				Gets or sets background color of the paragraph
			</summary>
			*/
			intrusive_ptr<Color> GetBackColor();
			/*

			*/
			void SetBackColor(intrusive_ptr<Color> value);
			/*

			*/
			bool GetIsColumnBreakAfter();
			/*

			*/
			void SetIsColumnBreakAfter(bool value);
			/*
			<summary>
				Returns line spacing property of the paragraph.
			</summary>
			*/
			float GetLineSpacing();
			/*
			<summary>
				Sets line spacing property of the paragraph.
			</summary>
			*/
			void SetLineSpacing(float value);
			/*
			<summary>
				Returns line spacing rule property of the paragraph.
			</summary>
			*/
			LineSpacingRule GetLineSpacingRule();
			/*
			<summary>
				Sets line spacing rule property of the paragraph.
			</summary>
			*/
			void SetLineSpacingRule(LineSpacingRule value);
			/*
			<summary>
				Gets a value indicating whether spacing before is automatic.
			</summary>
			<value>if spacing before is automatic, set to <c>true</c>.</value>
			*/
			bool GetBeforeAutoSpacing();
			/*
			<summary>
				Sets a value indicating whether spacing before is automatic.
			</summary>
			<value>if spacing before is automatic, set to <c>true</c>.</value>
			*/
			void SetBeforeAutoSpacing(bool value);
			/*
			<summary>
				Gets a value indicating whether spacing after is automatic.
			</summary>
			<value>if spacing after is automatic, set to <c>true</c>.</value>
			*/
			bool GetAfterAutoSpacing();
			/*
			<summary>
				Sets a value indicating whether spacing after is automatic.
			</summary>
			<value>if spacing after is automatic, set to <c>true</c>.</value>
			*/
			void SetAfterAutoSpacing(bool value);
			/*
			<summary>
				Gets the outline level.
			</summary>
			<value>The outline level.</value>
			*/
			OutlineLevel GetOutlineLevel();
			/*
			<summary>
				Sets the outline level.
			</summary>
			<value>The outline level.</value>
			*/
			void SetOutlineLevel(OutlineLevel value);
			/*
			<summary>
				Gets allow punctuation to extend past text extents.
			</summary>
			*/
			bool GetOverflowPunc();
			/*
			<summary>
				Sets allow punctuation to extend past text extents.
			</summary>
			*/
			void SetOverflowPunc(bool value);
			/*
			<summary>
				Gets a value indicating whether this instance is frame.
			</summary>
			*/
			bool GetIsFrame();
			/*

			*/
			intrusive_ptr<Frame> GetFrame();
			/*
			<summary>
				Gets a value that determines whether allow Latin text to wrap in the middle of a word.
			</summary>
			*/
			bool GetWordWrap();
			/*
			<summary>
				Sets a value that determines whether allow Latin text to wrap in the middle of a word.
			</summary>
			*/
			void SetWordWrap(bool value);
			/*
			<summary>
				Gets the style of textalignment
			</summary>
			*/
			TextAlignment GetTextAlignment();
			/*
			<summary>
				Sets the style of textalignment
			</summary>
			*/
			void SetTextAlignment(TextAlignment value);
			/*
			<summary>
				Gets a value indicating whether indentation type is mirror indents.
			</summary>
			*/
			bool GetMirrorIndents();
			/*
			<summary>
				Sets a value indicating whether indentation type is mirror indents.
			</summary>
			*/
			void SetMirrorIndents(bool value);
			/*
			<summary>
				Indicates whether to suppress automatic hyphenation for the paragraph.
			</summary>
			*/
			bool GetSuppressAutoHyphens();
			/*
			<summary>
				Indicates whether to suppress automatic hyphenation for the paragraph.
			</summary>
			*/
			void SetSuppressAutoHyphens(bool value);
			/*
			<summary>
				Sets the value that represents the left indent for paragraph.
			</summary>
			<param name="leftIndent">The left indent.</param>
			*/
			void SetLeftIndent(float leftIndent);
			/*
			<summary>
				Sets the value that represents the right indent for paragraph.
			</summary>
			<param name="rightIndent">The right indent.</param>
			*/
			void SetRightIndent(float rightIndent);
			/*
			<summary>
				Sets the value that represents the first line indent for paragraph.
			</summary>
			<param name="firstLineIndent">The first line indent.</param>
			*/
			void SetFirstLineIndent(float firstLineIndent);
			/*
			<summary>
				Clears paragraph background.
			</summary>
			*/
			virtual void ClearBackground();
			/*
			<summary>
				Gets a value that determines whether use Asian rules for controlling first and last characters.
			</summary>
			*/
			bool GetIsKinSoku();
			/*
			<summary>
				Ses a value that determines whether use Asian rules for controlling first and last characters.
			</summary>
			*/
			void SetIsKinSoku(bool value);
			/*
			<summary>
				Returns right-to-left property of the paragraph.
			</summary>
			<value>if bidi, set to <c>true</c>.</value>
			*/
			bool GetIsBidi();
			/*
			<summary>
				Sets right-to-left property of the paragraph.
			</summary>
			<value>if bidi, set to <c>true</c>.</value>
			*/
			void SetIsBidi(bool value);
			/*
			<summary>
				Gets the tabs info.
			</summary>
			<value>The tabs info.</value>
			*/
			intrusive_ptr<TabCollection> GetTabs();
			/*
			<summary>
				True if all lines in the paragraph are to remain on the same page.
			</summary>
			*/
			bool GetKeepLines();
			/*
			<summary>
				True if all lines in the paragraph are to remain on the same page.
			</summary>
			*/
			void SetKeepLines(bool value);
			/*
			<summary>
				True if the paragraph is to remains on the same page as the
				paragraph that follows it.
			</summary>
			*/
			bool GetKeepFollow();
			/*
			<summary>
				True if the paragraph is to remains on the same page as the
				paragraph that follows it.
			</summary>
			*/
			void SetKeepFollow(bool value);
			/*
			<summary>
				True if a page break is forced before the paragraph
			</summary>
			*/
			bool GetPageBreakBefore();
			/*
			<summary>
				True if a page break is forced before the paragraph
			</summary>
			*/
			void SetPageBreakBefore(bool value);
			/*
			<summary>
				True if a page break is forced after the paragraph
			</summary>
			*/
			bool GetPageBreakAfter();
			/*
			<summary>
				True if a page break is forced after the paragraph
			</summary>
			*/
			void SetPageBreakAfter(bool value);
			/*
			<summary>
				True if the first and last lines in the paragraph
				are to remain on the same page as the rest of the paragraph.
			</summary>
			<remarks></remarks>
			*/
			bool GetIsWidowControl();
			/*
			<summary>
				True if the first and last lines in the paragraph
				are to remain on the same page as the rest of the paragraph.
			</summary>
			<remarks></remarks>
			*/
			void SetIsWidowControl(bool value);
			/*
			<summary>
				Gets the value that determines whether the space is automatically adjusted between Asian text and numbers.
			</summary>
			*/
			bool GetAutoSpaceDN();
			/*
			<summary>
				Sets the value that determines whether the space is automatically adjusted between Asian text and numbers.
			</summary>
			*/
			void SetAutoSpaceDN(bool value);
			/*
			<summary>
				 Gets the value that determines whether the space is automatically adjusted between Asian and Latin text.
			</summary>
			*/
			bool GetAutoSpaceDE();
			/*
			<summary>
				 Sets the value that determines whether the space is automatically adjusted between Asian and Latin text.
			</summary>
			*/
			void SetAutoSpaceDE(bool value);
		private:
		};
	}
}