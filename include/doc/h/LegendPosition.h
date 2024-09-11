#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specifies the possible positions for a chart legend.
			</summary>
		*/
		enum class LegendPosition : int
		{
			None = 0,
			Bottom = 1,
			Left = 2,
			Right = 3,
			Top = 4,
			TopRight = 5,
		};
		using LegendPosition_Type = std::underlying_type<LegendPosition>::type;
	}
}