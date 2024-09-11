#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				The enum defines the horizontal relation
			</summary>
		*/
		enum class HorizontalRelation : int
		{
			Column = 0,
			Margin = 1,
			Page = 2,
		};
		using HorizontalRelation_Type = std::underlying_type<HorizontalRelation>::type;
	}
}