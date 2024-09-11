#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*

		*/
		enum class EditRevisionType : int
		{
			Insertion = 0,
			Deletion = 1,
		};
		using EditRevisionType_Type = std::underlying_type<EditRevisionType>::type;
	}
}