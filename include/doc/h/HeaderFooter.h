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

		*/
		class EXPORTS HeaderFooter : public virtual Body, public virtual IDocumentObject
		{
		public:
			/*
			<summary>
				Gets the type of the document object.
			</summary>
			*/
			virtual DocumentObjectType GetDocumentObjectType();
			/*
			<summary>
		        If set to True if this header/footer is linked to the header/footer in the previous section.
		    </summary>
			*/
			bool GetLinkToPrevious();
			/*
			<summary>
				If set to True if this header/footer is linked to the header/footer in the previous section.
			</summary>
			*/
			void SetLinkToPrevious(bool value);
		private:
		};
	}
}