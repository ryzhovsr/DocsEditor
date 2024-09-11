#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
			<summary>
				Interface IFieldsEventArgs
			</summary>
		*/
		class EXPORTS IFieldsEventArgs
		{
		public:
			/*
			<summary>
				Gets the field.
			</summary>
			*/
			virtual intrusive_ptr<Field> GetField() = 0;
		private:
		};
	}
}