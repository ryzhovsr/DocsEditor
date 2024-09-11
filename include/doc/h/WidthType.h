#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				The TableWidthType enum specifies how the preferred width for a table,
				table indent, table cell, cell margin, or cell spacing is defined.
			</summary>
		*/
		enum class WidthType : int
		{
			None = 0,
			Auto = 1,
			Percentage = 2,
			Twip = 3,
		};
		using WidthType_Type = std::underlying_type<WidthType>::type;
	}
}