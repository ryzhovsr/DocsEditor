#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				The enum defines the vertical relation
			</summary>
		*/
		enum class VerticalRelation : int
		{
			Margin = 0,
			Page = 1,
			Paragraph = 2,
		};
		using VerticalRelation_Type = std::underlying_type<VerticalRelation>::type;
	}
}