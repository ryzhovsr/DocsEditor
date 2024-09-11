#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specifies the Number Style for a page.
			</summary>
		*/
		enum class PageNumberStyle : int
		{
			Arabic = 0,
			RomanUpper = 1,
			RomanLower = 2,
			LetterUpper = 3,
			LetterLower = 4,
			NumberInDash = 57,
			ChineseCountingThousand = 39,
			None = 255,
		};
		using PageNumberStyle_Type = std::underlying_type<PageNumberStyle>::type;
	}
}