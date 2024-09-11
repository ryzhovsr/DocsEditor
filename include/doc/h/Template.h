#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
			<summary>
				Class represents Attached tempalte of the document.
			</summary>
		*/
		class EXPORTS Template : public virtual Object
		{
		public:
			/*
			<summary>
				Gets the path of the attached template.
			</summary>
		    <value>The path to attached template document</value>
			*/
			LPCWSTR_S GetPath();
			/*
			<summary>
				Sets the path of the attached template.
			</summary>
			*/
			void SetPath(LPCWSTR_S value);
		private:
		};
	}
}