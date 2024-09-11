#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specifies type of the list format.
			</summary>
		*/
		enum class ListType : int
		{
			Numbered = 0,
			Bulleted = 1,
			NoList = 2,
		};
		using ListType_Type = std::underlying_type<ListType>::type;
	}
}