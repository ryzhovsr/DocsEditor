#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Defines document version
			</summary>
		*/
		enum class DocumentVersion : int
		{
			Word97 = 0,
			Word2000 = 1,
			Word2002 = 2,
			Word2003 = 3,
			Word2007 = 4,
		};
		using DocumentVersion_Type = std::underlying_type<DocumentVersion>::type;
	}
}