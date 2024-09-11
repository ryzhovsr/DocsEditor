#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Defines types of comment mark.
			</summary>
		*/
		enum class CommentMarkType : int
		{
			CommentStart = 0,
			CommentEnd = 1,
		};
		using CommentMarkType_Type = std::underlying_type<CommentMarkType>::type;
	}
}