#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Defines TextFormat
			</summary>
		*/
		enum class TextFormat : int
		{
			None = 0,
			Uppercase = 1,
			Lowercase = 2,
			FirstCapital = 3,
			Titlecase = 4,
		};
		using TextFormat_Type = std::underlying_type<TextFormat>::type;
	}
}