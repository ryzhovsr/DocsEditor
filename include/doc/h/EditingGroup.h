#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				This simple type specifies the set of possible aliases (or editing groups) which can be used as aliases to
				determine if the current user shall be allowed to edit a single range defined by a range permission with
				in a document. This mechanism simply provides a set of predefined editing groups which can be associated
				with accounts by applications in any desired manner.
			</summary>
		*/
		enum class EditingGroup : int
		{
			None = 0,
			Current = 65530,
			Editors = 65531,
			Owners = 65532,
			Contributors = 65533,
			Administrators = 65534,
			Everyone = 65535,
		};
		using EditingGroup_Type = std::underlying_type<EditingGroup>::type;
	}
}