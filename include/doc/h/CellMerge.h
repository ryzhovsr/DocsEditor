#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specifies the way of cell merging.
			</summary>
		*/
		enum class CellMerge : int
		{
			None = 0,
			Start = 1,
			Continue = 2,
		};
		using CellMerge_Type = std::underlying_type<CellMerge>::type;
	}
}