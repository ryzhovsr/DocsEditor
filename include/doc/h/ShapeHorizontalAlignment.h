#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specifies horizontal alignment of a floating shape.
			</summary>
		*/
		enum class ShapeHorizontalAlignment : int
		{
			None = 0,
			Left = 1,
			Center = 2,
			Right = 3,
			Inside = 4,
			Outside = 5,
			Default = 0,
		};
		using ShapeHorizontalAlignment_Type = std::underlying_type<ShapeHorizontalAlignment>::type;
	}
}