#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specify text wrapping style for object.
			</summary>
		*/
		enum class TextWrappingStyle : int
		{
			Inline = 0,
			TopAndBottom = 1,
			Square = 2,
			InFrontOfText = 3,
			Tight = 4,
			Through = 5,
			Behind = 6,
			None = -1,
		};
		using TextWrappingStyle_Type = std::underlying_type<TextWrappingStyle>::type;
	}
}