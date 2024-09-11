#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specifies Type of the Property.
			</summary>
		*/
		enum class PropertyType : int
		{
			Summary = 0,
			DocumentSummary = 1,
			Custom = 2,
		};
		using PropertyType_Type = std::underlying_type<PropertyType>::type;
	}
}