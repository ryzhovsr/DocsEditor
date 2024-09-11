#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*

		*/
		enum class CalendarType : int
		{
			Default = 0,
			Gregorian = 0,
			GregorianArabic = 1,
			GregorianMiddleEastFrench = 2,
			GregorianEnglish = 3,
			GregorianTransliteratedEnglish = 4,
			GregorianTransliteratedFrench = 5,
			Hebrew = 6,
			Hijri = 7,
			Japan = 8,
			Korean = 9,
			None = 10,
			Saka = 11,
			Taiwan = 12,
			Thai = 13,
		};
		using CalendarType_Type = std::underlying_type<CalendarType>::type;
	}
}