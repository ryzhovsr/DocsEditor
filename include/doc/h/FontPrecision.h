#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*

		*/
		enum class FontPrecision : int
		{
			OutDefaultPrecis = 0,
			OutStringPrecis = 1,
			OutCharacterPrecis = 2,
			OutStrokePrecis = 3,
			OutTTPrecis = 4,
			OutDevicePrecis = 5,
			OutRasterPrecis = 6,
			OutTTOnlyPrecis = 7,
			OutOutlinePrecis = 8,
			OutScreenOutlinePrecis = 9,
			Out_PS_Only_Precis = 10,
		};
		using FontPrecision_Type = std::underlying_type<FontPrecision>::type;
	}
}