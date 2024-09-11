#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
			<summary>
				BookmarkLevelEventArgs is the class containg event data.
			</summary>
		*/
		class EXPORTS BookmarkLevelEventArgs : public virtual Object
		{
		public:
			/*
			<summary>
				Represents the current bookmark.
			</summary>
			*/
			intrusive_ptr<BookmarkStart> GetBookmarkStart();
			/*

			*/
			void SetBookmarkStart(intrusive_ptr<BookmarkStart> value);
			/*
			<summary>
				Represents the current bookmark level informations.
			</summary>
			*/
			intrusive_ptr<BookmarkLevel> GetBookmarkLevel();
			/*

			*/
			void SetBookmarkLevel(intrusive_ptr<BookmarkLevel> value);
		private:
		};
	}
}