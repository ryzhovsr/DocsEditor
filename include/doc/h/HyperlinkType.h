#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specifies type of the link.
			</summary>
		*/
		enum class HyperlinkType : int
		{
			None = 0,
			FileLink = 1,
			WebLink = 2,
			EMailLink = 3,
			Bookmark = 4,
		};
		using HyperlinkType_Type = std::underlying_type<HyperlinkType>::type;
	}
}