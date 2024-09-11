#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specifies the horizontal frame anchor.
			</summary>
		*/
		enum class FrameHorzAnchor : int
		{
			Column = 0,
			Margin = 1,
			Page = 2,
		};
		using FrameHorzAnchor_Type = std::underlying_type<FrameHorzAnchor>::type;
	}
}