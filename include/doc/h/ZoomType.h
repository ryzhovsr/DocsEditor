#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specifies zooming type in Microsoft Word.
			</summary>
		*/
		enum class ZoomType : int
		{
			None = 0,
			FullPage = 1,
			PageWidth = 2,
			TextFit = 3,
		};
		using ZoomType_Type = std::underlying_type<ZoomType>::type;
	}
}