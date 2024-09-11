#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specifies on which pages border is applied.
			</summary>
		*/
		enum class PageBordersApplyType : int
		{
			AllPages = 0,
			FirstPage = 1,
			AllExceptFirstPage = 2,
		};
		using PageBordersApplyType_Type = std::underlying_type<PageBordersApplyType>::type;
	}
}