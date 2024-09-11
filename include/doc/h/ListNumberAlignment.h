#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Number alignments
			</summary>
		*/
		enum class ListNumberAlignment : int
		{
			Left = 0,
			Center = 1,
			Right = 2,
		};
		using ListNumberAlignment_Type = std::underlying_type<ListNumberAlignment>::type;
	}
}