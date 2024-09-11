#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				The enum, which defines paragraph format's outline level
			</summary>
		*/
		enum class OutlineLevel : int
		{
			Level1 = 0,
			Level2 = 1,
			Level3 = 2,
			Level4 = 3,
			Level5 = 4,
			Level6 = 5,
			Level7 = 6,
			Level8 = 7,
			Level9 = 8,
			Body = 9,
		};
		using OutlineLevel_Type = std::underlying_type<OutlineLevel>::type;
	}
}