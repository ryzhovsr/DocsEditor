#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "DocumentObjectCollection.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
			<summary>
				Represents a collection for <see cref="T:Spire.Doc.Body" /> child items.
			</summary>
		*/
		class EXPORTS BodyRegionCollection : public virtual DocumentObjectCollection
		{
			friend class Object;
		public:
			BodyRegionCollection(intrusive_ptr<Body> body);
		protected:
			BodyRegionCollection();
		private:
		};
	}
}