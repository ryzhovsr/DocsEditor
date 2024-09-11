#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IDocumentObject.h"
#include "Field.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS ControlField : public virtual Field, public virtual IDocumentObject
		{
		public:
			/*
			<summary>
				Gets the type of the document object.
			</summary>
		    <value>The type of the document object.</value>
			*/
			virtual DocumentObjectType GetDocumentObjectType();
		private:
		};
	}
}