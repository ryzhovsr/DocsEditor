#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specifies the absolute vertical position.
			</summary>
		*/
		enum class VerticalPosition : int
		{
			None = 0,
			Top = 1,
			Center = 2,
			Bottom = 3,
			Inside = 4,
			Outside = 5,
			Inline = -1,
			Default = 0,
		};
		using VerticalPosition_Type = std::underlying_type<VerticalPosition>::type;
	}
}