#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specify object's line style
			</summary>
		*/
		enum class TextBoxLineStyle : int
		{
			Simple = 0,
			Double = 1,
			ThickThin = 2,
			ThinThick = 3,
			Triple = 4,
		};
		using TextBoxLineStyle_Type = std::underlying_type<TextBoxLineStyle>::type;
	}
}