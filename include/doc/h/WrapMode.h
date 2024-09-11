#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specifies Wrap mode.
			</summary>
		*/
		enum class WrapMode : int
		{
			Square = 0,
			ByPoints = 1,
			None = 2,
			TopBottom = 3,
			Through = 4,
			Inline = 5,
		};
		using WrapMode_Type = std::underlying_type<WrapMode>::type;
	}
}