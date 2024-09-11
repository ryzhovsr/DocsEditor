#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specifies the stylistic set type.
			</summary>
		*/
		enum class StylisticSetType : int
		{
			Default = 0,
			StylisticSet01 = 1,
			StylisticSet02 = 2,
			StylisticSet03 = 3,
			StylisticSet04 = 4,
			StylisticSet05 = 5,
			StylisticSet06 = 6,
			StylisticSet07 = 7,
			StylisticSet08 = 8,
			StylisticSet09 = 9,
			StylisticSet10 = 10,
			StylisticSet11 = 11,
			StylisticSet12 = 12,
			StylisticSet13 = 13,
			StylisticSet14 = 14,
			StylisticSet15 = 15,
			StylisticSet16 = 16,
			StylisticSet17 = 17,
			StylisticSet18 = 18,
			StylisticSet19 = 19,
			StylisticSet20 = 20,
		};
		using StylisticSetType_Type = std::underlying_type<StylisticSetType>::type;
	}
}