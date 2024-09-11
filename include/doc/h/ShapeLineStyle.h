#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*

		*/
		enum class ShapeLineStyle : int
		{
			Single = 0,
			Double = 1,
			ThickThin = 2,
			ThinThick = 3,
			Triple = 4,
			Default = 0,
		};
		using ShapeLineStyle_Type = std::underlying_type<ShapeLineStyle>::type;
	}
}