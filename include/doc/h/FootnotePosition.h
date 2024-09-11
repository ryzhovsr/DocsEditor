#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specifies FootnotePosition.
			</summary>
		*/
		enum class FootnotePosition : int
		{
			PrintAsEndOfSection = 0,
			PrintAtBottomOfPage = 1,
			PrintImmediatelyBeneathText = 2,
			PrintAsEndOfDocument = 3,
		};
		using FootnotePosition_Type = std::underlying_type<FootnotePosition>::type;
	}
}