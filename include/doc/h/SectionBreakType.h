#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specifies type of the section break code.
			</summary>
		*/
		enum class SectionBreakType : int
		{
			NoBreak = 0,
			NewColumn = 1,
			NewPage = 2,
			EvenPage = 3,
			Oddpage = 4,
		};
		using SectionBreakType_Type = std::underlying_type<SectionBreakType>::type;
	}
}