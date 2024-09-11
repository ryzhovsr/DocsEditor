#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specifies Tab leader.
			</summary>
		*/
		enum class TabLeader : int
		{
			NoLeader = 0,
			Dotted = 1,
			Hyphenated = 2,
			Single = 3,
			Heavy = 4,
			MiddleDot = 5,
		};
		using TabLeader_Type = std::underlying_type<TabLeader>::type;
	}
}