#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specifies view mode in Microsoft word.
			</summary>
		*/
		enum class DocumentViewType : int
		{
			None = 0,
			PrintLayout = 1,
			OutlineLayout = 3,
			NormalLayout = 4,
			WebLayout = 5,
		};
		using DocumentViewType_Type = std::underlying_type<DocumentViewType>::type;
	}
}