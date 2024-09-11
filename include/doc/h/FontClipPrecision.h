#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*

		*/
		enum class FontClipPrecision : int
		{
			ClipDefaultPrecis = 0,
			ClipCharacterPrecis = 1,
			ClipStrokePrecis = 2,
			ClipMask = 15,
			ClipLHAngles = 16,
			ClipDFADisable = 64,
			ClipEmbedded = 128,
		};
		using FontClipPrecision_Type = std::underlying_type<FontClipPrecision>::type;
	}
}