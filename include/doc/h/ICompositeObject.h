#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IDocumentObject.h"
#include "DocumentObjectCollection.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
		<summary>
	        Publishes base entity that can contains other entities.
	    </summary>
		*/
		class EXPORTS ICompositeObject : public virtual IDocumentObject
		{
		public:
			/*
			<summary>
		         Gets the child entities.
		    </summary>
		    <value>The child entities.</value>
			*/
			virtual intrusive_ptr<DocumentObjectCollection> GetChildObjects() = 0;
		private:
		};
	}
}