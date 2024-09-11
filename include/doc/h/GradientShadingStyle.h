#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*

		*/
		enum class GradientShadingStyle : int
		{
			Horizontal = 0,
			Vertical = 1,
			DiagonalUp = 2,
			DiagonalDown = 3,
			FromCorner = 4,
			FromCenter = 5,
		};
		using GradientShadingStyle_Type = std::underlying_type<GradientShadingStyle>::type;
	}
}