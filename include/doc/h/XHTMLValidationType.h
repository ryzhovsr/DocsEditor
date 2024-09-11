#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specifies the XHTMLValidation type.
			</summary>
		*/
		enum class XHTMLValidationType : int
		{
			Strict = 0,
			Transitional = 1,
			None = 2,
		};
		using XHTMLValidationType_Type = std::underlying_type<XHTMLValidationType>::type;
	}
}