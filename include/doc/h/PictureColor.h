#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Picture color types.
			</summary>
		*/
		enum class PictureColor : int
		{
			Automatic = 0,
			Grayscale = 1,
			BlackAndWhite = 2,
			Washout = 3,
		};
		using PictureColor_Type = std::underlying_type<PictureColor>::type;
	}
}