#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
		<summary>
			Base class for all Structured Document Tags control-specific properties.
			Encapsulates all differences between Sdt controls, allowing to define additional
			properties and methods in descendant classes.
		</summary>
		<remarks>
			All common Sdt properties are handled in <see cref="StructuredDocumentTag"/>.
		</remarks>
		*/
		class EXPORTS SdtControlProperties : public virtual Object
		{
			friend class Object;
		public:
		protected:
			SdtControlProperties();
			//virtual void A();
		private:
			virtual void A();
		};
	}
}