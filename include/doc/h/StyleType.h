#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specifies type of the Style.
			</summary>
		*/
		enum class StyleType : int
		{
			ParagraphStyle = 1,
			CharacterStyle = 2,
			TableStyle = 3,
			ListStyle = 4,
			OtherStyle = 4,
		};
		using StyleType_Type = std::underlying_type<StyleType>::type;
	}
}