#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Document's break type.
			</summary>
		*/
		enum class BreakType : int
		{
			PageBreak = 0,
			ColumnBreak = 1,
			LineBreak = 2,
		};
		using BreakType_Type = std::underlying_type<BreakType>::type;
	}
}