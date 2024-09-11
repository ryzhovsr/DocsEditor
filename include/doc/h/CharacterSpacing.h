#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Character Spacing Control enum.
			</summary>
		*/
		enum class CharacterSpacing : int
		{
			doNotCompress = 0,
			compressPunctuation = 1,
			compressPunctuationAndJapaneseKana = 2,
		};
		using CharacterSpacing_Type = std::underlying_type<CharacterSpacing>::type;
	}
}