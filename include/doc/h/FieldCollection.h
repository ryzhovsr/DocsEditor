#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "CollectionEx.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS FieldCollection : public virtual CollectionEx
		{
		public:
			/*
			<summary>
				Gets the field at the specified index.
			</summary>
			<value></value>
			*/
			intrusive_ptr<Field> GetItem(int index);
		private:
		};
	}
}