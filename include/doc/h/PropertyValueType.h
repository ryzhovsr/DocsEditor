#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specifies PropertyValueType.
			</summary>
		*/
		enum class PropertyValueType : int
		{
			Boolean = 0,
			Date = 1,
			Float = 2,
			Double = 3,
			Int = 4,
			Int32 = 5,
			String = 6,
			ByteArray = 7,
			StringArray = 8,
			ObjectArray = 9,
			ClipData = 10,
			AsciiString = 11,
			Other = 12,
		};
		using PropertyValueType_Type = std::underlying_type<PropertyValueType>::type;
	}
}