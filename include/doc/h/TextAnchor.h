#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specifies vertical alignment of a textbox.
			</summary>
		*/
		enum class TextAnchor : int
		{
			Top = 1,
			Center = 2,
			Bottom = 3,
		};
		using TextAnchor_Type = std::underlying_type<TextAnchor>::type;
	}
}