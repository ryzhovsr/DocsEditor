#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specifies preferred width type
			</summary>
		*/
		enum class CellWidthType : int
		{
			Auto = 1,
			Percentage = 2,
			Point = 3,
		};
		using CellWidthType_Type = std::underlying_type<CellWidthType>::type;
	}
}