#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "DocumentSerializableCollection.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
			<summary>
				Represents a collections of list formatting for each level in a list.
			</summary>
		*/
		class EXPORTS ListLevelCollection : public virtual DocumentSerializableCollection
		{
		public:
			/*
			<summary>
				Gets the <see cref="!:Spire.Doc.WListLevel" /> at the specified index.
			</summary>
		    <value></value>
			*/
			intrusive_ptr<ListLevel> GetItem(int index);
		private:
		};
	}
}