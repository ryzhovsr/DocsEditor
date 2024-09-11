#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Allows to choose outline text style.
			</summary>
		*/
		enum class BookmarkTextStyle : int
		{
			Regular = 0,
			Italic = 1,
			Bold = 2,
		};
		using BookmarkTextStyle_Type = std::underlying_type<BookmarkTextStyle>::type;
	}
}