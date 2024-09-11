#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specifies how Microsoft Word resizes a table when the AutoFit feature is used.
			</summary>
		*/
		enum class AutoFitBehaviorType : int
		{
			AutoFitToContents = 1,
			AutoFitToWindow = 2,
			FixedColumnWidths = 0,
		};
		using AutoFitBehaviorType_Type = std::underlying_type<AutoFitBehaviorType>::type;
	}
}