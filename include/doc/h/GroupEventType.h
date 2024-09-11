#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*

		*/
		enum class GroupEventType : int
		{
			GroupStart = 0,
			GroupEnd = 1,
			TableStart = 2,
			TableEnd = 3,
		};
		using GroupEventType_Type = std::underlying_type<GroupEventType>::type;
	}
}