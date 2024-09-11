#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IDocumentObject.h"
#include "Body.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
		<summary>
	        specifies the last known contents of a structured document tag around one or more block-level structures
	    </summary>
		*/
		class EXPORTS SDTContent : public virtual Body, public virtual IDocumentObject
		{
		public:
			/*

			*/
			virtual DocumentObjectType GetDocumentObjectType();
		private:
		};
	}
}