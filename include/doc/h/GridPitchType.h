#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Defines how tall a grid unit is up/down
			</summary>
		*/
		enum class GridPitchType : int
		{
			NoGrid = 0,
			CharsAndLine = 1,
			LinesOnly = 2,
			SnapToChars = 3,
		};
		using GridPitchType_Type = std::underlying_type<GridPitchType>::type;
	}
}