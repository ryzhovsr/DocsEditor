#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*

		*/
		enum class RelativeHorizontalPosition : int
		{
			Margin = 0,
			Page = 1,
			Column = 2,
			Character = 3,
			LeftMargin = 4,
			RightMargin = 5,
			InsideMargin = 6,
			OutsideMargin = 7,
			Default = 2,
		};
		using RelativeHorizontalPosition_Type = std::underlying_type<RelativeHorizontalPosition>::type;
	}
}