#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specifies orientation of the page.
			</summary>
		*/
		enum class PageOrientation : int
		{
			Portrait = 1,
			Landscape = 2,
		};
		using PageOrientation_Type = std::underlying_type<PageOrientation>::type;
	}
}