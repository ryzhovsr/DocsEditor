#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Paragraph line spacing rule
			</summary>
		*/
		enum class LineSpacingRule : int
		{
			AtLeast = 0,
			Exactly = 1,
			Multiple = 2,
		};
		using LineSpacingRule_Type = std::underlying_type<LineSpacingRule>::type;
	}
}