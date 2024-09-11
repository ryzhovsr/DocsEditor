#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Defines checkBox size type.
			</summary>
		*/
		enum class CheckBoxSizeType : int
		{
			Auto = 0,
			Exactly = 1,
		};
		using CheckBoxSizeType_Type = std::underlying_type<CheckBoxSizeType>::type;
	}
}