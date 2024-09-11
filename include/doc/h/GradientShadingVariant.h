#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Shading variants for background gradient.
			</summary>
		*/
		enum class GradientShadingVariant : int
		{
			ShadingUp = 0,
			ShadingDown = 1,
			ShadingOut = 2,
			ShadingMiddle = 3,
		};
		using GradientShadingVariant_Type = std::underlying_type<GradientShadingVariant>::type;
	}
}