#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specifies WatermarkLayout.
			</summary>
		*/
		enum class WatermarkLayout : int
		{
			Diagonal = 0,
			Horizontal = 1,
		};
		using WatermarkLayout_Type = std::underlying_type<WatermarkLayout>::type;
	}
}