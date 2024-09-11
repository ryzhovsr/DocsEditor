#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specifies type of the vertical alignment.
			</summary>
		*/
		enum class VerticalAlignment : int
		{
			Top = 0,
			Middle = 1,
			Bottom = 2,
		};
		using VerticalAlignment_Type = std::underlying_type<VerticalAlignment>::type;
	}
}