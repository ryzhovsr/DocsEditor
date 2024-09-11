#pragma once
#include "pch.h"
namespace Spire {
	namespace  Doc {
		namespace Pages {
			/*

			*/
			enum class LayoutElementType : int
			{
				None = 0,
				Page = 1,
				Column = 2,
				Row = 8,
				Cell = 16,
				Line = 32,
				Span = 64,
				Footnote = 256,
				Endnote = 512,
				HeaderFooter = 1024,
				TextBox = 2048,
				Comment = 4096,
				NoteSeparator = 8192,
			};
			using LayoutElementType_Type = std::underlying_type<LayoutElementType>::type;
		}
	}
}