#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specify text wrapping type for textbox.
			</summary>
		*/
		enum class TextWrappingType : int
		{
			Both = 0,
			Left = 1,
			Right = 2,
			Largest = 3,
		};
		using TextWrappingType_Type = std::underlying_type<TextWrappingType>::type;
	}
}