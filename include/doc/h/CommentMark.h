#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IDocumentObject.h"
#include "ParagraphBase.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
			<summary>
				Represents a container for text of a comment.
			</summary>
			<summary>
				Class represents comment start marker
			</summary>
		*/
		class EXPORTS CommentMark : public virtual ParagraphBase, public virtual IDocumentObject
		{
			friend class Object;
		public:
			CommentMark(intrusive_ptr<IDocument> doc);

			CommentMark(intrusive_ptr<IDocument> doc, CommentMarkType type);
			/*
			<summary>
				Gets the id of the comment this mark refers to.
			</summary>
			<value>The comment id.</value>
			*/
			int GetCommentId();
			/*
			<summary>
				Sets the id of the comment this mark refers to.
			</summary>
			<value>The comment id.</value>
			*/
			void SetCommentId(int value);
			/*
			<summary>
				Gets the type of the document object.
			</summary>
			<value>The type of the document object.</value>
			*/
			virtual DocumentObjectType GetDocumentObjectType();
			/*
			<summary>
				Gets the type of the CommentMark.
			</summary>
			<value>The type.</value>
			*/
			CommentMarkType GetType();
			/*
			<summary>
				Sets the type of the CommentMark.
			</summary>
			<value>The type.</value>
			*/
			void SetType(CommentMarkType value);
		protected:
			CommentMark();
		private:
		};
	}
}