#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specifies the emphasis mark type.
			</summary>
		*/
		enum class Emphasis : int
		{
			None = 0,
			Dot = 1,
			CommaAbove = 2,
			CircleAbove = 3,
			DotBelow = 4,
			Default = 0,
		};
		using Emphasis_Type = std::underlying_type<Emphasis>::type;
	}
}