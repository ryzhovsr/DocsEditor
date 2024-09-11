#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specifies Item DocumentObject type.
			</summary>
		*/
		enum class ChangeItemsType : int
		{
			Add = 0,
			Remove = 1,
			Clear = 2,
		};
		using ChangeItemsType_Type = std::underlying_type<ChangeItemsType>::type;
	}
}