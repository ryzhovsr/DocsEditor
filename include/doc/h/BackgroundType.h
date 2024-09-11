#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specifies BackgroundType
			</summary>
		*/
		enum class BackgroundType : int
		{
			NoBackground = 0,
			Gradient = 1,
			Picture = 2,
			Texture = 3,
			Color = 4,
		};
		using BackgroundType_Type = std::underlying_type<BackgroundType>::type;
	}
}