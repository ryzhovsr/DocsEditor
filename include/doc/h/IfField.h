#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "Field.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS IfField : public virtual Field
		{
			friend class Object;
		public:
			IfField(intrusive_ptr<IDocument> doc);
		protected:
			IfField();
		private:
		};
	}
}