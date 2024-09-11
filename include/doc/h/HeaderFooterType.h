#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specifies type of the Header/Footer.
			</summary>
		*/
		enum class HeaderFooterType : int
		{
			HeaderEven = 0,
			HeaderOdd = 1,
			FooterEven = 2,
			FooterOdd = 3,
			HeaderFirstPage = 4,
			FooterFirstPage = 5,
		};
		using HeaderFooterType_Type = std::underlying_type<HeaderFooterType>::type;
	}
}