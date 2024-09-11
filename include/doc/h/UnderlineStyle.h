#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specifies style of the underline.
			</summary>
		*/
		enum class UnderlineStyle : int
		{
			None = 0,
			Single = 1,
			Words = 2,
			Double = 3,
			Dotted = 4,
			DotDot = 4,
			Thick = 6,
			Dash = 7,
			DotDash = 9,
			DotDotDash = 10,
			Wavy = 11,
			DottedHeavy = 20,
			DashHeavy = 23,
			DotDashHeavy = 25,
			DotDotDashHeavy = 26,
			WavyHeavy = 27,
			DashLong = 39,
			WavyDouble = 43,
			DashLongHeavy = 55,
		};
		using UnderlineStyle_Type = std::underlying_type<UnderlineStyle>::type;
	}
}