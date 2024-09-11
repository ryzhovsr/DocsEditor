#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specifies the number spacing type.
			</summary>
		*/
		enum class NumberSpaceType : int
		{
			Default = 0,
			Proportional = 1,
			Tabular = 2,
		};
		using NumberSpaceType_Type = std::underlying_type<NumberSpaceType>::type;
	}
}