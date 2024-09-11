#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specifies the absolute horizontal position.
			</summary>
		*/
		enum class HorizontalPosition : int
		{
			None = 0,
			Left = 1,
			Center = 2,
			Right = 3,
			Inside = 4,
			Outside = 5,
			Inline = -1,
			Default = 0,
		};
		using HorizontalPosition_Type = std::underlying_type<HorizontalPosition>::type;
	}
}