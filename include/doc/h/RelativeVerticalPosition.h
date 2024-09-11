#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*

		*/
		enum class RelativeVerticalPosition : int
		{
			Margin = 0,
			Page = 1,
			Paragraph = 2,
			Line = 3,
			TopMargin = 4,
			BottomMargin = 5,
			InsideMargin = 6,
			OutsideMargin = 7,
			TableDefault = 0,
			TextFrameDefault = 2,
		};
		using RelativeVerticalPosition_Type = std::underlying_type<RelativeVerticalPosition>::type;
	}
}