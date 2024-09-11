#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Defines the direction of text.
			</summary>
		*/
		enum class TextDirection : int
		{
			TopToBottom = 0,
			RightToLeft = 3,
			LeftToRightRotated = 5,
			LeftToRight = 2,
			TopToBottomRotated = 4,
			RightToLeftRotated = 1,
		};
		using TextDirection_Type = std::underlying_type<TextDirection>::type;
	}
}