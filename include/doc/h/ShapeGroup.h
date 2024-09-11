#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IDocumentObject.h"
#include "ShapeBase.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS ShapeGroup : public virtual ShapeBase, public virtual IDocumentObject
		{
		public:
			/*

			*/
			virtual DocumentObjectType GetDocumentObjectType();
		private:
		};
	}
}