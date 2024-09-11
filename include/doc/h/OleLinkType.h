#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Defines types of the ole object field
			</summary>
		*/
		enum class OleLinkType : int
		{
			Embed = 0,
			Link = 1,
		};
		using OleLinkType_Type = std::underlying_type<OleLinkType>::type;
	}
}