#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specifies alignment of the text on a page.
			</summary>
		*/
		enum class PageAlignment : int
		{
			Top = 0,
			Middle = 1,
			Justified = 2,
			Bottom = 3,
		};
		using PageAlignment_Type = std::underlying_type<PageAlignment>::type;
	}
}