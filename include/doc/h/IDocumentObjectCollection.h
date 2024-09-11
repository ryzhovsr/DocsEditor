#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "ICollectionBase.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
	    <summary>
	       Represents base interface for entities collections.
	    </summary>
		*/
		class EXPORTS IDocumentObjectCollection : public virtual ICollectionBase
		{
		public:
			/*
			<summary>
		       Gets the <see cref="Spire.Doc.DocumentObject"/> at the specified index.
		    </summary>
		    <value></value>
			*/
			virtual intrusive_ptr<DocumentObject> GetItem(int index) = 0;
		private:
		};
	}
}