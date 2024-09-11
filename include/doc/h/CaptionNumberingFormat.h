#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Type of Caption Numbering
			</summary>
		*/
		enum class CaptionNumberingFormat : int
		{
			Number = 0,
			Roman = 1,
			Alphabetic = 2,
		};
		using CaptionNumberingFormat_Type = std::underlying_type<CaptionNumberingFormat>::type;
	}
}