#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Defines Number format.
			</summary>
		*/
		enum class NumberFormat : int
		{
			None = 0,
			WholeNumber = 1,
			FloatingPoint = 2,
			WholeNumberPercent = 3,
			FloatingPointPercent = 4,
			WholeNumberWithSpace = 5,
			FloatingPointWithSpace = 6,
			CurrencyFormat = 7,
		};
		using NumberFormat_Type = std::underlying_type<NumberFormat>::type;
	}
}