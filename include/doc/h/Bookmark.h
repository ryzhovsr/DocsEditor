#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS Bookmark : public virtual Object
		{
			friend class Object;
		public:
			Bookmark(intrusive_ptr<BookmarkStart> start);

			Bookmark(intrusive_ptr<BookmarkStart> start, intrusive_ptr<BookmarkEnd> end);
			/*
			<summary>
				Gets bookmark name.
			</summary>
			*/
			LPCWSTR_S GetName();
			/*
			<summary>
				Gets the bookmark start.
			</summary>
			*/
			intrusive_ptr<BookmarkStart> GetBookmarkStart();
			/*
			<summary>
				Gets the bookmark end.
			</summary>
			*/
			intrusive_ptr<BookmarkEnd> GetBookmarkEnd();
		private:
			Bookmark();
		};
	}
}