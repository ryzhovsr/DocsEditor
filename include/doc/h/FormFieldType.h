#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specifies the type of a form field.
			</summary>
		*/
		enum class FormFieldType : int
		{
			TextInput = 0,
			CheckBox = 1,
			DropDown = 2,
			Unknown = 3,
		};
		using FormFieldType_Type = std::underlying_type<FormFieldType>::type;
	}
}