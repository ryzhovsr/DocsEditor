#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specifies the type of a text form field.
			</summary>
		*/
		enum class TextFormFieldType : int
		{
			RegularText = 0,
			NumberText = 1,
			DateText = 2,
			CurrentDate = 3,
			CurrentTime = 4,
			Calculation = 5,
		};
		using TextFormFieldType_Type = std::underlying_type<TextFormFieldType>::type;
	}
}