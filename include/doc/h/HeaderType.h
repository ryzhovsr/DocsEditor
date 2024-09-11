#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*

		*/
		enum class HeaderType : int
		{
			InvalidValue = -1,
			EvenHeader = 0,
			OddHeader = 1,
			EvenFooter = 2,
			OddFooter = 3,
			FirstPageHeader = 4,
			FirstPageFooter = 5,
		};
		using HeaderType_Type = std::underlying_type<HeaderType>::type;
	}
}