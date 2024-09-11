#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*

		*/
		enum class CssStyleSheetType : int
		{
			External = 0,
			Internal = 1,
		};
		using CssStyleSheetType_Type = std::underlying_type<CssStyleSheetType>::type;
	}
}