#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specifies vertical alignment of a floating shape.
			</summary>
		*/
		enum class ShapeVerticalAlignment : int
		{
			Inline = -1,
			None = 0,
			Top = 1,
			Center = 2,
			Bottom = 3,
			Inside = 4,
			Outside = 5,
			Default = 0,
		};
		using ShapeVerticalAlignment_Type = std::underlying_type<ShapeVerticalAlignment>::type;
	}
}