#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*

		*/
		enum class FontQuality : int
		{
			DefaultQuality = 0,
			DraftQuality = 1,
			ProofQuality = 2,
			NonantialiasedQuality = 3,
			AntialiasedQuality = 4,
			CleartypeQuality = 5,
			CleartypeNaturalQuality = 6,
		};
		using FontQuality_Type = std::underlying_type<FontQuality>::type;
	}
}