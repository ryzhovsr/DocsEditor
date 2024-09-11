#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				This simple type defines the possible type of layout algorthms which can be used
				to layout a table within a WordprocessingML document.
			</summary>
		*/
		enum class LayoutType : int
		{
			Fixed = 0,
			AutoFit = 1,
		};
		using LayoutType_Type = std::underlying_type<LayoutType>::type;
	}
}