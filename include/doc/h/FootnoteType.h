#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specifies the Type of the FootNote.
			</summary>
		*/
		enum class FootnoteType : int
		{
			Footnote = 0,
			Endnote = 1,
		};
		using FootnoteType_Type = std::underlying_type<FootnoteType>::type;
	}
}