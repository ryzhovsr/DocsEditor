#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*

		*/
		enum class FontCharSet : int
		{
			ANSICharset = 0,
			DefaultCharset = 1,
			SymbolCharset = 2,
			ShiftjsCharset = 128,
			HangeulCharset = 129,
			HangulCharset = 129,
			GB2312Charset = 134,
			CHINESEBIG5Charset = 136,
			OEMCharset = 255,
			JOHABCharset = 130,
			HebrewCharset = 177,
			ArabicCharset = 178,
			GreekCharset = 161,
			Turkish_Charset = 162,
			VietnameseCharset = 163,
			ThaiCharset = 222,
			EasteuropeCharset = 238,
			RussianCharset = 204,
			MACCharset = 77,
			Baltic_Charset = 186,
		};
		using FontCharSet_Type = std::underlying_type<FontCharSet>::type;
	}
}