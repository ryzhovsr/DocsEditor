#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specifies the table row height type.
			</summary>
		*/
		enum class TableRowHeightType : int
		{
			AtLeast = 0,
			Exactly = 1,
			Auto = 2,
		};
		using TableRowHeightType_Type = std::underlying_type<TableRowHeightType>::type;
	}
}