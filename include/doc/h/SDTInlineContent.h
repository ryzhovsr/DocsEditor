#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IDocumentObject.h"
#include "DocumentBase.h"
#include "ICompositeObject.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
			<summary>
				This element specifies the last known contents of a structured document tag around one or more inline-level structures.
			</summary>
		*/
		class EXPORTS SDTInlineContent : public virtual DocumentBase, public virtual IDocumentObject, public virtual ICompositeObject
		{
		public:
			/*
			<summary>
				Gets the child objects.
			</summary>
		    <value>The child objects.</value>
			*/
			virtual intrusive_ptr<DocumentObjectCollection> GetChildObjects();
			/*
			<summary>
				Gets the type of the entity.
			</summary>
		    <value>The type of the entity.</value>
			*/
			virtual DocumentObjectType GetDocumentObjectType();
			/*
			<summary>
				Gets the object owner paragraph.
			</summary>
			*/
			intrusive_ptr<Paragraph> GetOwnerParagraph();
			/*
			<summary>
				 Returns or sets STD text.
			</summary>
			*/
			LPCWSTR_S GetText();
			/*
			<summary>
				Gets paragraph item by index.
			</summary>
		    <value></value>
			*/
			intrusive_ptr<ParagraphBase> GetItem(int index);
		private:
		};
	}
}