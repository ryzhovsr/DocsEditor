#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specify object's horizontal origin
			</summary>
		*/
		enum class HorizontalOrigin : int
		{
			Column = 2,
			Margin = 0,
			Page = 1,
			Character = 3,
			LeftMarginArea = 4,
			RightMarginArea = 5,
			InnerMarginArea = 6,
			OuterMarginArea = 7,
			Default = 2,
		};
		using HorizontalOrigin_Type = std::underlying_type<HorizontalOrigin>::type;
	}
}