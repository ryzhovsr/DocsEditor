#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specifies the watermark type.
			</summary>
		*/
		enum class WatermarkType : int
		{
			NoWatermark = 0,
			PictureWatermark = 1,
			TextWatermark = 2,
		};
		using WatermarkType_Type = std::underlying_type<WatermarkType>::type;
	}
}