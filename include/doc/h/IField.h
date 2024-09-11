#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IDocumentObject.h"
#include "IParagraphBase.h"
#include "ITextRange.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
		<summary>
	       Interface publishes merge field functionality
	    </summary>
		*/
		class EXPORTS IField : public virtual ITextRange, public virtual IParagraphBase, public virtual IDocumentObject
		{
		public:
			/*
			<summary>
		       Returns field type
		    </summary>
			*/
			virtual FieldType GetType() = 0;
			/*
			<summary>
		       Sets field type
		    </summary>
			*/
			virtual void SetType(FieldType value) = 0;
		private:
		};
	}
}