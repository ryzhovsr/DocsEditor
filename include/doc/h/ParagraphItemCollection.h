#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "DocumentObjectCollection.h"
#include "ParagraphBase.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
			<summary>
				Represents a collection for <see cref="!:Spire.Doc.Paragraph" /> child items.
			</summary>
		*/
		class EXPORTS ParagraphItemCollection : public virtual DocumentObjectCollection
		{
		public:
			/*

			*/
			//intrusive_ptr<ParagraphBase> GetItem(int index);
			intrusive_ptr<DocumentObject> GetItem(int index);
		private:
			intrusive_ptr<ParagraphBase> CreateObjectByTypeName(IntPtrWithTypeName intPtrWithTypeName, Object* pParent);
		};
	}
}