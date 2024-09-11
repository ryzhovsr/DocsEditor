#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
		<summary>
	        Represents base interface for dls collections.
	    </summary>
		*/
		class EXPORTS ICollectionBase
		{
		public:
			/*
			<summary>
		        Gets the number of items in collection.
		    </summary>
		    <value>The count.</value>
			*/
			virtual int GetCount() = 0;
		private:
		};
	}
}