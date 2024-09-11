#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Position of Image Caption Numbering
			</summary>
		*/
		enum class CaptionPosition : int
		{
			AboveImage = 0,
			AfterImage = 1,
			AboveItem = 0,
			BelowItem = 1,
		};
		using CaptionPosition_Type = std::underlying_type<CaptionPosition>::type;
	}
}