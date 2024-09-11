#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				A 16-bit unsigned integer that specifies vertical font alignment for East Asian languages.
			</summary>
		*/
		enum class TextAlignment : int
		{
			Top = 0,
			Center = 1,
			Baseline = 2,
			Bottom = 3,
			Auto = 4,
		};
		using TextAlignment_Type = std::underlying_type<TextAlignment>::type;
	}
}