#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specifies when line numbering is restarted.
			</summary>
		*/
		enum class LineNumberingRestartMode : int
		{
			RestartPage = 0,
			RestartSection = 1,
			Continuous = 2,
			None = 255,
		};
		using LineNumberingRestartMode_Type = std::underlying_type<LineNumberingRestartMode>::type;
	}
}