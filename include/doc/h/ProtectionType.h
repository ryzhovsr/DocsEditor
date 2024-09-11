#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Type of the protection in the document
			</summary>
		*/
		enum class ProtectionType : int
		{
			AllowOnlyComments = 1,
			AllowOnlyFormFields = 2,
			AllowOnlyReading = 3,
			AllowOnlyRevisions = 0,
			NoProtection = -1,
		};
		using ProtectionType_Type = std::underlying_type<ProtectionType>::type;
	}
}