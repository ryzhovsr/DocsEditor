#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Frame size rule.
			</summary>
		*/
		enum class FrameSizeRule : int
		{
			AtLeast = 0,
			Exact = 1,
			Auto = 2,
		};
		using FrameSizeRule_Type = std::underlying_type<FrameSizeRule>::type;
	}
}