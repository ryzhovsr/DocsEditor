#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
			<summary>
				Class BookmarkLevel.
			</summary>
		*/
		class EXPORTS BookmarkLevel : public virtual Object
		{
		public:
			/*
			<summary>
				Gets the child objects.
			</summary>
			*/
			//System.Collections.Generic.List`1[[Spire.Doc.Documents.Rendering.BookmarkLevel, Spire.Doc, Version=10.9.9.0, Culture=neutral, PublicKeyToken=663f351905198cb3]] GetChildObjects ();
			/*
			<summary>
				Gets the text color of the bookmark when convert to PDF.
				the default value is the "SaddleBrown" color(#FF8B4513).
			</summary>
			*/
			intrusive_ptr<Color> GetColor();
			/*
			<summary>
				Sets the text color of the bookmark when convert to PDF.
				the default value is the "SaddleBrown" color(#FF8B4513).
			</summary>
			*/
			void SetColor(intrusive_ptr<Color> value);
			/*
			<summary>
				Gets the name of the bookmark.
			</summary>
			*/
			LPCWSTR_S GetName();
			/*
			<summary>
				Gets the level.
			</summary>
			<value>The level.</value>
			*/
			int GetLevel();
			/*
			<summary>
				Gets the text style of the bookmark when convert to PDF.
				the default value is the Bold.
			</summary>
			*/
			BookmarkTextStyle GetStyle();
			/*
			<summary>
				Sets the text style of the bookmark when convert to PDF.
				the default value is the Bold.
			</summary>
			*/
			void SetStyle(BookmarkTextStyle value);
		private:
		};
	}
}