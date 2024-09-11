#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*

		*/
		enum class FontWeight : int
		{
			DONTCARE = 0,
			THIN = 100,
			EXTRALIGHT = 200,
			LIGHT = 300,
			NORMAL = 400,
			MEDIUM = 500,
			SEMIBOLD = 600,
			BOLD = 700,
			EXTRABOLD = 800,
			HEAVY = 900,
		};
		using FontWeight_Type = std::underlying_type<FontWeight>::type;
	}
}