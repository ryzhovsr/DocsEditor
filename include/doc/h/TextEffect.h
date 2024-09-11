#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Animation effect for text.
			</summary>
		*/
		enum class TextEffect : int
		{
			None = 0,
			LasVegasLights = 1,
			BlinkingBackground = 2,
			SparkleText = 3,
			MarchingBlackAnts = 4,
			MarchingRedAnts = 5,
			Shimmer = 6,
		};
		using TextEffect_Type = std::underlying_type<TextEffect>::type;
	}
}