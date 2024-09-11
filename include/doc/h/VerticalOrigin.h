#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specify vertical origin of the object
			</summary>
		*/
		enum class VerticalOrigin : int
		{
			Margin = 0,
			Page = 1,
			Paragraph = 2,
			Line = 3,
			TopMarginArea = 4,
			BottomMarginArea = 5,
			InnerMarginArea = 6,
			OuterMarginArea = 7,
			TextFrameDefault = 2,
		};
		using VerticalOrigin_Type = std::underlying_type<VerticalOrigin>::type;
	}
}