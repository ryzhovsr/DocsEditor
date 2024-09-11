#pragma once
#include "pch.h"
//#include "Document.h"
#include "DocumentObjectType.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS IDocumentObject : public virtual Object
		{
		public:
			/*
			<summary>
		       Gets document of this entity.
		    </summary>
			*/
			virtual intrusive_ptr<Document> GetDocument() = 0;
			/*
			<summary>
		       Gets owner of this document object.
		    </summary>
			*/
			virtual intrusive_ptr<DocumentObject> GetOwner() = 0;
			/*
			<summary>
		       Gets the type of the document object.
		    </summary>
		    <value>The type of the document object.</value>
			*/
			virtual DocumentObjectType GetDocumentObjectType() = 0;
			/*
			<summary>
		       Gets the next sibling.
		    </summary>
		    <value>The next sibling.</value>
			*/
			virtual intrusive_ptr<IDocumentObject> GetNextSibling() = 0;
			/*
			<summary>
		       Gets the previous sibling.
		    </summary>
		    <value>The previous sibling.</value>
			*/
			virtual intrusive_ptr<IDocumentObject> GetPreviousSibling() = 0;
			/*
			<summary>
		       Gets a value indicating whether this instance is composite.
		    </summary>
		    <value>
		    if this instance is composite, set to <c>true</c>.
			*/
			virtual bool GetIsComposite() = 0;
			/*
			<summary>
		       Creates a duplicate of the document object.
		    </summary>
		    <returns></returns>
			*/
			virtual intrusive_ptr<DocumentObject> Clone() = 0;
			/*
			<summary>
		       Gets the next widget sibling.
		    </summary>
		    <value>The next widget sibling.</value>
			*/
			virtual intrusive_ptr<IDocumentObject> GetNextWidgetSibling() = 0;
			/*
			<summary>
		       Gets the previous sibling.
		    </summary>
		    <value>The previous Widget sibling.</value>
			*/
			virtual intrusive_ptr<IDocumentObject> GetPreviousWidgetSibling() = 0;
		private:
		};
	}
}