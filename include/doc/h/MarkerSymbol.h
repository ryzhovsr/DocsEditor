#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specifies marker symbol style.
			</summary>
		*/
		enum class MarkerSymbol : int
		{
			Default = 0,
			Circle = 1,
			Dash = 2,
			Diamond = 3,
			Dot = 4,
			None = 5,
			Picture = 6,
			Plus = 7,
			Square = 8,
			Star = 9,
			Triangle = 10,
			X = 11,
		};
		using MarkerSymbol_Type = std::underlying_type<MarkerSymbol>::type;
	}
}