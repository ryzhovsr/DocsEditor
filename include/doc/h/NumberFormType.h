#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specifies the number form type.
			</summary>
		*/
		enum class NumberFormType : int
		{
			Default = 0,
			Lining = 1,
			Old = 2,
		};
		using NumberFormType_Type = std::underlying_type<NumberFormType>::type;
	}
}