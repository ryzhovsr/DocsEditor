#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specifies the position of page border.
			</summary>
		*/
		enum class PageBorderOffsetFrom : int
		{
			Text = 0,
			PageEdge = 1,
		};
		using PageBorderOffsetFrom_Type = std::underlying_type<PageBorderOffsetFrom>::type;
	}
}