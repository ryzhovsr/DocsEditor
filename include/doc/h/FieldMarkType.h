#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Defines types of field marks.
			</summary>
		*/
		enum class FieldMarkType : int
		{
			FieldSeparator = 0,
			FieldEnd = 1,
		};
		using FieldMarkType_Type = std::underlying_type<FieldMarkType>::type;
	}
}