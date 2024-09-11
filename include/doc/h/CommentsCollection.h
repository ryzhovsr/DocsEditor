#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "CollectionEx.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
			<summary>
				A collection of <see cref="!:Spire.Doc.CommentsCollection" /> objects that
				represent the comments in the document.
			</summary>
		*/
		class EXPORTS CommentsCollection : public virtual CollectionEx
		{
		public:
			/*
			<summary>
				Gets the comment at specified index.
			</summary>
			<value></value>
			<returns></returns>
			*/
			intrusive_ptr<Comment> GetItem(int index);
			/*
			<summary>
				Counts this instance.
			</summary>
			<returns></returns>
			*/
			int Counts();
			/*
			<summary>
				Remove a Comment at specified index.
			</summary>
			<param name="index"></param>
			*/
			void RemoveAt(int index);
			/*
			<summary>
				Remove all the Comment from the document.
			</summary>
			*/
			void Clear();
			/*
			<summary>
				Removes the specified Comment.
			</summary>
			<param name="comment"></param>
			*/
			void Remove(intrusive_ptr<Comment> comment);
		private:
		};
	}
}