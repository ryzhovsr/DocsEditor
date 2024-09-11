#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specifies the vertical frame anchor.
			</summary>
		*/
		enum class FrameVertAnchor : int
		{
			Margin = 0,
			Page = 1,
			Text = 2,
		};
		using FrameVertAnchor_Type = std::underlying_type<FrameVertAnchor>::type;
	}
}