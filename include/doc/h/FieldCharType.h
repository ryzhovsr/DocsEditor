#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*

		*/
		enum class FieldCharType : int
		{
			Begin = 0,
			Seperate = 1,
			End = 2,
			Unknown = 3,
			SimpleField = 4,
		};
		using FieldCharType_Type = std::underlying_type<FieldCharType>::type;
	}
}