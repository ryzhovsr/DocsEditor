#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Line dashing.
			</summary>
		*/
		enum class LineDashing : int
		{
			Solid = 0,
			Dash = 1,
			Dot = 2,
			DashDot = 3,
			DashDotDot = 4,
			DotGEL = 5,
			DashGEL = 6,
			LongDashGEL = 7,
			DashDotGEL = 8,
			LongDashDotGEL = 9,
			LongDashDotDotGEL = 10,
			Default = 0,
		};
		using LineDashing_Type = std::underlying_type<LineDashing>::type;
	}
}