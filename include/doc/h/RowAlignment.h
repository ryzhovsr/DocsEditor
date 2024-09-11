#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specifies type of the horizontal alignment.
			</summary>
		*/
		enum class RowAlignment : int
		{
			Left = 0,
			Center = 1,
			Right = 2,
		};
		using RowAlignment_Type = std::underlying_type<RowAlignment>::type;
	}
}