#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specifies type of the SubSuperScript.
			</summary>
		*/
		enum class SubSuperScript : int
		{
			None = 0,
			SuperScript = 1,
			SubScript = 2,
			BaseLine = 0,
		};
		using SubSuperScript_Type = std::underlying_type<SubSuperScript>::type;
	}
}