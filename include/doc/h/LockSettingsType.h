#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*

		*/
		enum class LockSettingsType : int
		{
			UnLocked = 0,
			ContentLocked = 1,
			SDTContentLocked = 2,
			SDTLocked = 3,
		};
		using LockSettingsType_Type = std::underlying_type<LockSettingsType>::type;
	}
}