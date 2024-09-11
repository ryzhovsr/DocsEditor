#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specifies type of the list numbering format.
			</summary>
		*/
		enum class ListPatternType : int
		{
			Arabic = 0,
			UpRoman = 1,
			LowRoman = 2,
			UpLetter = 3,
			LowLetter = 4,
			Ordinal = 5,
			CardinalText = 6,
			OrdinalText = 7,
			Chicago = 9,
			DecimalFullWidth = 14,
			DecimalHalfWidth = 15,
			Hebrew1 = 45,
			ArabicAlpha = 46,
			Hebrew2 = 47,
			ArabicAbjad = 48,
			JapaneseCounting = 11,
			JapaneseLegal = 16,
			JapaneseDigitalTenThousand = 17,
			DecimalEnclosedCircle = 18,
			DecimalFullWidth2 = 19,
			LeadingZero = 22,
			Bullet = 23,
			DecimalEnclosedFullstop = 26,
			DecimalEnclosedParen = 27,
			DecimalEnclosedCircleChinese = 28,
			KoreanDigital = 41,
			KoreanCounting = 42,
			KoreanLegal = 43,
			KoreanDigital2 = 44,
			AiueoFullWidth = 20,
			Aiueo = 12,
			Iroha = 13,
			IdeographDigital = 10,
			IrohaFullWidth = 21,
			IdeographTraditional = 30,
			IdeographZodiac = 31,
			IdeographEnclosedCircle = 29,
			IdeographZodiacTraditional = 32,
			TaiwaneseCounting = 33,
			IdeographLegalTraditional = 34,
			TaiwaneseCountingThousand = 35,
			TaiwaneseDigital = 36,
			ChineseCounting = 37,
			ChineseLegalSimplified = 38,
			ChineseCountingThousand = 39,
			Special = 58,
			NumberInDash = 57,
			None = 255,
			CustomType = 65280,
		};
		using ListPatternType_Type = std::underlying_type<ListPatternType>::type;
	}
}