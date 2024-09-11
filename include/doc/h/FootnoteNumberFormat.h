#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specifies Numberformat of FootEndNote.
			</summary>
		*/
		enum class FootnoteNumberFormat : int
		{
			Arabic = 0,
			DecimalFullWidth = 14,
			Hebrew1 = 45,
			Hebrew2 = 47,
			ArabicAlpha = 46,
			ArabicAbjad = 48,
			UpperCaseRoman = 1,
			LowerCaseRoman = 2,
			UpperCaseLetter = 3,
			LowerCaseLetter = 4,
			Chicago = 9,
			ChineseLegalSimplified = 38,
			ChineseCountingThousand = 39,
			IdeographTraditional = 30,
			IdeographZodiac = 31,
			DecimalEnclosedCircleChinese = 28,
			IdeographEnclosedCircle = 29,
			None = 255,
		};
		using FootnoteNumberFormat_Type = std::underlying_type<FootnoteNumberFormat>::type;
	}
}