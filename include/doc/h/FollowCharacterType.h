#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				The type of character following the number text for the paragraph
			</summary>
		*/
		enum class FollowCharacterType : int
		{
			Tab = 0,
			Space = 1,
			Nothing = 2,
		};
		using FollowCharacterType_Type = std::underlying_type<FollowCharacterType>::type;
	}
}