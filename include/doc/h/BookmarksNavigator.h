#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS BookmarksNavigator : public virtual Object
		{
		public:
			BookmarksNavigator(intrusive_ptr<IDocument> doc);
			/*
			<summary>
			   Returns Document that this object is attached to.
			</summary>
			<value>The document.</value>
			*/
			intrusive_ptr<IDocument> GetDocument();
			/*
			<summary>
			   Sets Document that this object is attached to.
			</summary>
			<value>The document.</value>
			*/
			void SetDocument(intrusive_ptr<IDocument> value);
			/*
			<summary>
			   Gets the current bookmark.
			</summary>
			<value>The current bookmark.</value>
			*/
			intrusive_ptr<Bookmark> GetCurrentBookmark();
			/*
			<summary>
			   Moves the cursor to specified bookmark.
			</summary>
			<param name="bookmarkName">Name of the bookmark.</param>
			*/
			void MoveToBookmark(LPCWSTR_S bookmarkName);
			/*
			<summary>
			   Moves the cursor to specified bookmark.
			</summary>
			<param name="bookmarkName">Name of the bookmark.</param>
			<param name="isStart">When true, moves the cursor to the beginning of the bookmark. When false, moves the cursor to the end of the bookmark</param>
			<param name="isAfter">When true, moves the cursor to be after the bookmark start or end position. When false, moves the cursor to be before the bookmark start or end position. </param>
			*/
			void MoveToBookmark(LPCWSTR_S bookmarkName, bool isStart, bool isAfter);
			/*
			<summary>
			   Inserts the text.
			</summary>
			<param name="text">The text.</param>
			<returns></returns>
			*/
			intrusive_ptr<ITextRange> InsertText(LPCWSTR_S text);
			/*
			<summary>
			   Inserts the text range to current position.
			</summary>
			<param name="text">The text.</param>
			<param name="saveFormatting">if it is save formatting, set to <c>true</c>.</param>
			<returns></returns>
			*/
			intrusive_ptr<ITextRange> InsertText(LPCWSTR_S text, bool saveFormatting);
			/*
			<summary>
			   Inserts the table.
			</summary>
			<param name="table">The table.</param>
			*/
			void InsertTable(intrusive_ptr<ITable> table);
			/*
			<summary>
			   Inserts the paragraph item to current position.
			</summary>
			<param name="itemType">Type of the item.</param>
			<returns></returns>
			*/
			intrusive_ptr<IParagraphBase> InsertParagraphItem(ParagraphItemType itemType);
			/*
			<summary>
			   Inserts the paragraph.
			</summary>
			<param name="paragraph">The paragraph.</param>
			*/
			void InsertParagraph(intrusive_ptr<IParagraph> paragraph);
			/*
			<summary>
			   Inserts the text body part.
			</summary>
			<param name="bodyPart">The text body part.</param>
			*/
			void InsertTextBodyPart(intrusive_ptr<TextBodyPart> bodyPart);
			/*
			<summary>
			   Gets the bookmark content2.
			</summary>
			<returns></returns>
			*/
			intrusive_ptr<TextBodyPart> GetBookmarkContent();
			/*
			<summary>
			   Deletes the bookmark content.
			</summary>
			<param name="saveFormatting">if its save formatting, set to <c>true</c>.</param>
			*/
			void DeleteBookmarkContent(bool saveFormatting);
			/*
			<summary>
			   Replaces the bookmark content2.
			</summary>
			<param name="bodyPart">The body part.</param>
			*/
			void ReplaceBookmarkContent(intrusive_ptr<TextBodyPart> bodyPart);
			/*
			 <summary>
			   Replaces the bookmark content2.
			</summary>
			<param name="bodyPart">The body part.</param>
			<param name="isKeepSourceFormat">if it is keep the source first paragraph format, set to <c>true</c>.</param>
			*/
			void ReplaceBookmarkContent(intrusive_ptr<TextBodyPart> bodyPart, bool isKeepSourceFirstParaFormat);
			/*
			 <summary>
			   Replaces the content of the bookmark.
			 </summary>
			 <param name="bodyPart">The body part.</param>
			 <param name="isKeepSourceFirstParaFormat">if it is keep the source first paragraph format, set to <c>true</c>.</param>
			 <param name="saveFormatting">if it is save formatting, set to <c>true</c>.</param>
			*/
			void ReplaceBookmarkContent(intrusive_ptr<TextBodyPart> bodyPart, bool isKeepSourceFirstParaFormat, bool saveFormatting);
			/*
			<summary>
			   Replaces the content of the bookmark.
			</summary>
			<param name="text">The text.</param>
			<param name="saveFormatting">if it is save formatting, set to <c>true</c>.</param>
			*/
			void ReplaceBookmarkContent(LPCWSTR_S text, bool saveFormatting);
		protected:
			BookmarksNavigator();
		private:
		};
	}
}