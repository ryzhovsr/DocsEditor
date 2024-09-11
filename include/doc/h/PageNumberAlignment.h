#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specifies PageNumber alignment.
			</summary>
		*/
		enum class PageNumberAlignment : int
		{
			Left = 0,
			Center = -4,
			Right = -8,
			Inside = -12,
			Outside = -16,
		};
		using PageNumberAlignment_Type = std::underlying_type<PageNumberAlignment>::type;
	}
}