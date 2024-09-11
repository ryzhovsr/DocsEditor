#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Defines the FontTypeHint enumeration.
			</summary>
		*/
		enum class FontTypeHint : int
		{
			Default = 0,
			EastAsia = 1,
			ComplexScript = 2,
		};
		using FontTypeHint_Type = std::underlying_type<FontTypeHint>::type;
	}
}