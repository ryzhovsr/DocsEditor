#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IDocumentObject.h"
#include "DocumentSerializable.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS DocumentObject : public virtual DocumentSerializable, public virtual IDocumentObject
		{
		public:
			virtual intrusive_ptr<Document> GetDocument();
			/*
			<summary>
				Gets the child objects of the entity.
			</summary>
			*/
			virtual intrusive_ptr<DocumentObjectCollection> GetChildObjects();
			/*
			<summary>
				Gets the type of the document object.
			</summary>
			<value>The type of the document object.</value>
			*/
			virtual DocumentObjectType GetDocumentObjectType();
			/*
			<summary>
				Gets the owner of this entity.
			</summary>
			<value></value>
			*/
			virtual intrusive_ptr<DocumentObject> GetOwner();
			/*
			<summary>
				Gets the previous sibling.
			</summary>
			*/
			virtual intrusive_ptr<IDocumentObject> GetPreviousSibling();
			/*
			<summary>
				Gets the next sibling.
			</summary>
			<value>The next sibling.</value>
			*/
			virtual intrusive_ptr<IDocumentObject> GetNextSibling();
			/*
			<summary>
				Indicating whether this instance is composite.
			</summary>
			<value>
				If this instance is composite, set to <c>true</c>.
			</value>
			*/
			virtual bool GetIsComposite();
			/*
			<summary>
		        Gets the first child of the Element.
		    </summary>
		    <remarks>
		        If there is no first child Element, a null is returned.
		    </remarks>
			*/
			intrusive_ptr<DocumentObject> GetFirstChild();
			/*
			<summary>
		        Gets the last child of the Element.
		    </summary>
		    <remarks>
		        If there is no last child Element, a null is returned.
		    </remarks>
			*/
			intrusive_ptr<DocumentObject> GetLastChild();
			/*

			*/
			virtual intrusive_ptr<DocumentObject> Clone();
			/*
			<summary>
				Exports the name and index in container of the object into a string in the specified seperator.
			</summary>
			<param name="seperator"></param>
			<returns></returns>
			*/
			virtual LPCWSTR_S ToString(LPCWSTR_S seperator);
			/*

			*/
			virtual intrusive_ptr<IDocumentObject> GetPreviousWidgetSibling();
			/*

			*/
			virtual intrusive_ptr<IDocumentObject> GetNextWidgetSibling();
			/*

			*/
			intrusive_ptr<DocumentObject> PrependChild(intrusive_ptr<DocumentObject> newChild);
		private:
			intrusive_ptr<DocumentObject> CreateObjectByTypeName(IntPtrWithTypeName intPtrWithTypeName, Object* pParent);
		};
	}
}