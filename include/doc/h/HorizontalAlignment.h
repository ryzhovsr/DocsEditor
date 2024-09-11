#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specifies type of the horizontal alignment.
			</summary>
		*/
		enum class HorizontalAlignment : int
		{
			Left = 0,
			Center = 1,
			Right = 2,
			Justify = 3,
			Distribute = 4,
			ThaiDistribute = 5,
			HightKashida = 6,
			LowKashida = 7,
			MediumKashida = 8,
		};
		using HorizontalAlignment_Type = std::underlying_type<HorizontalAlignment>::type;
	}
}