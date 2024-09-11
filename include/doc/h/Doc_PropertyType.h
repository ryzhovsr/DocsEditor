#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*

		*/
		enum class Doc_PropertyType : int
		{
			Bool = 11,
			Int = 22,
			Int32 = 3,
			Int16 = 2,
			UInt32 = 19,
			String = 31,
			AsciiString = 30,
			DateTime = 64,
			Blob = 65,
			Vector = 4096,
			Object = 12,
			Double = 5,
			Empty = 0,
			Null = 1,
			ClipboardData = 71,
			AsciiStringArray = 4126,
			StringArray = 4127,
			ObjectArray = 4108,
		};
		using Doc_PropertyType_Type = std::underlying_type<Doc_PropertyType>::type;
	}
}