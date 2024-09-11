#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specifies the type of a structured document tag (SDT) Element.
			</summary>
		*/
		enum class SdtType : int
		{
			None = 0,
			RichText = 1,
			Bibliography = 2,
			Citation = 3,
			ComboBox = 4,
			DropDownList = 5,
			Picture = 6,
			Text = 7,
			Equation = 8,
			DatePicker = 9,
			BuildingBlockGallery = 10,
			DocPartObj = 11,
			Group = 12,
			CheckBox = 13,
		};
		using SdtType_Type = std::underlying_type<SdtType>::type;
	}
}