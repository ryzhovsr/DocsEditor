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
				A collection of <see cref="T:Spire.Doc.Bookmark" /> objects that
					represent the bookmarks in the document.
			</summary>
		*/
		class EXPORTS BookmarkCollection : public virtual CollectionEx
		{
		public:
			/*
			<summary>
				Gets the <see cref="T:Spire.Doc.Bookmark" /> with the specified name.
			</summary>
			<value></value>
			*/
			intrusive_ptr<Bookmark> GetItem(LPCWSTR_S name);
			/*
			<summary>
				Gets the <see cref="T:Spire.Doc.Bookmark" /> at the specified index.
			</summary>
			<value></value>
			*/
			intrusive_ptr<Bookmark> GetItem(int index);
			/*
			<summary>
				Finds <see cref="T:Spire.Doc.Bookmark" /> object by specified name
			</summary>
			<param name="name">The bookmark name</param>
			<returns></returns>
			*/
			intrusive_ptr<Bookmark> FindByName(LPCWSTR_S name);
			/*
			<summary>
				Removes a bookmark at the specified index.
			</summary>
			<param name="index">The index.</param>
			*/
			void RemoveAt(int index);
			/*
			<summary>
				Removes the specified bookmark.
			</summary>
			<param name="bookmark">The bookmark.</param>
			*/
			void Remove(intrusive_ptr<Bookmark> bookmark);
			/*
			<summary>
				Removes all bookmarks from the document.
			</summary>
			*/
			void Clear();
		private:
		};
	}
}