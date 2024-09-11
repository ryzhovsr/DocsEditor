#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*

		*/
		enum class DocumentSecurity : int
		{
			None = 0,
			PasswordProtected = 1,
			ReadOnlyRecommended = 2,
			ReadOnlyEnforced = 4,
			ReadOnlyExceptAnnotations = 8,
		};
		using DocumentSecurity_Type = std::underlying_type<DocumentSecurity>::type;
	}
}