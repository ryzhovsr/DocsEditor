#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS OwnerHolder : public virtual Object
		{
		public:
			/*
			<summary>
				Gets the document.
			</summary>
		    <value>The document.</value>
			*/
			virtual intrusive_ptr<Document> GetDocument();
		private:
		};
	}
}