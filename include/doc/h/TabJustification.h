#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specifies the tab justification.
			</summary>
		*/
		enum class TabJustification : int
		{
			Left = 0,
			Centered = 1,
			Right = 2,
			Decimal = 3,
			Bar = 4,
			List = 6,
			Clear = 7,
		};
		using TabJustification_Type = std::underlying_type<TabJustification>::type;
	}
}