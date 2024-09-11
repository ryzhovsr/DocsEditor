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
		class EXPORTS CommentFormat : public virtual DocumentSerializable
		{
		public:
			/*
			<summary>
				Gets the DateTime.
			</summary>
			<value>The DateTime.</value>
			*/
			intrusive_ptr<DateTime> GetDateTime();
			/*
			<summary>
				Sets the DateTime.
			</summary>
			<value>The DateTime.</value>
			*/
			void SetDateTime(intrusive_ptr<DateTime> value);
			/*
			<summary>
				Gets the user initials.
			</summary>
			<value>The user initials.</value>
			*/
			LPCWSTR_S GetInitial();
			/*
			<summary>
				Sets the user initials.
			</summary>
			<value>The user initials.</value>
			*/
			void SetInitial(LPCWSTR_S value);
			/*
			<summary>
				Gets the user.
			</summary>
			<value>The user.</value>
			*/
			LPCWSTR_S GetAuthor();
			/*
			<summary>
				Sets the user.
			</summary>
			<value>The user.</value>
			*/
			void SetAuthor(LPCWSTR_S value);
			/*
			<summary>
				Gets the id of the comment.
			</summary>
			<value>The comment id.</value>
			*/
			int GetCommentId();
			/*
			<summary>
				Sets the id of the comment.
			</summary>
			<value>The comment id.</value>
			*/
			void SetCommentId(int value);
			/*
			<summary>
				Creates a new object that is a copy of the current instance.
			</summary>
			<returns>
				A new object that is a copy of this instance.
			</returns>
			*/
			intrusive_ptr<CommentFormat> Clone(intrusive_ptr<IDocument> doc);
		private:
		};
	}
}