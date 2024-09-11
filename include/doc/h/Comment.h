#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IDocumentObject.h"
#include "ParagraphBase.h"
#include "ICompositeObject.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
			<summary>
				Represents a container for text of a comment.
			</summary>
		*/
		class EXPORTS Comment : public virtual ParagraphBase, public virtual IDocumentObject, public virtual ICompositeObject
		{
			friend class Object;
		public:
			Comment(intrusive_ptr<IDocument> doc);
			/*
			<summary>
				Gets the child document objects.
			</summary>
			<value>The child entities.</value>
			*/
			virtual intrusive_ptr<DocumentObjectCollection> GetChildObjects();
			/*
			<summary>
				Gets the type of the document object.
			</summary>
			<value>The type of the document object.</value>
			*/
			virtual DocumentObjectType GetDocumentObjectType();
			/*
			<summary>
				Gets comment body.
			</summary>
			<value>The text body.</value>
			*/
			intrusive_ptr<Body> GetBody();
			/*
			<summary>
				Gets the format.
			</summary>
			<value>The format.</value>
			*/
			intrusive_ptr<CommentFormat> GetFormat();
			/*
			<summary>
				Gets the range of commented items.
			</summary>
			<value>The range comment contains.</value>
			*/
			intrusive_ptr<ParagraphItemCollection> GetItems();
			/*
			<summary>
				Gets the range of commented items.
			</summary>
			<value>The reply commented range.</value>
			*/
			intrusive_ptr<CommentsCollection> GetReplyCommentItems();
			/*
			<summary>
				Gets the comment of current comment replied.
			</summary>
			<value>Comment of by reply.</value>
			*/
			intrusive_ptr<Comment> GetByRepliedComment();
			/*
			<summary>
				Gets a value indicating whether done.
			</summary>
			*/
			bool GetMarkDone();
			/*
			<summary>
				Gets the begining mark of the comment.
			</summary>
			<value>The commentMark of start.</value>
			*/
			intrusive_ptr<CommentMark> GetCommentMarkStart();
			/*
			<summary>
				Gets the ending mark of the comment.
			</summary>
			<value>The commentMark of end.</value>
			*/
			intrusive_ptr<CommentMark> GetCommentMarkEnd();
			/*
			<summary>
				Clears the commented items.
			</summary>
			*/
			void Clear();
			/*
			<summary>
				Replace commented items with matchString text.
			</summary>
			<param name="text">The text.</param>
			*/
			void Replace(LPCWSTR_S text);
			/*
			<summary>
				Replaces the commented items with specified TextBodyPart.
			</summary>
			<param name="textBodyPart">The text body part.</param>
			*/
			void Replace(intrusive_ptr<TextBodyPart> textBodyPart);
			/*
			<summary>
				Adds the paragraph item to the commented items.
			</summary>
			<param name="paraItem">The paragraph item.</param>
			<returns></returns>
			*/
			void AddItem(intrusive_ptr<IParagraphBase> paraItem);
			/*
			<summary>
				Replies to comment.
			</summary>
			<param name="replyComment">the reply comment.</param>
			*/
			void ReplyToComment(intrusive_ptr<Comment> replyComment);
			/*
			<summary>
				Marks the comment done.
			</summary>
			<param name="done">the done.</param>
			*/
			void MarkCommentDone(bool done);
			/*

			*/
			void EnsureMinimum();
		protected:
			Comment();
		private:
		};
	}
}