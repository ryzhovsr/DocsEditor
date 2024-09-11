#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IDocumentObjectCollection.h"
#include "DocumentSerializableCollection.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
			<summary>
				Represents a collection of DLS entities.
			</summary>
		*/
		class EXPORTS DocumentObjectCollection : public virtual DocumentSerializableCollection, public virtual IDocumentObjectCollection
		{
		public:
			int GetCount();
			/*
			<summary>
				Gets the <see cref="T:Spire.Doc.DocumentObject" /> at the specified index.
			</summary>
			<value></value>
			<returns></returns>
			*/
			virtual intrusive_ptr<DocumentObject> GetItem(int index);
			/*
			<summary>
				Gets the first item.
			</summary>
			<value>The first item.</value>
			*/
			intrusive_ptr<DocumentObject> GetFirstItem();
			/*
			<summary>
				Gets the last item.
			</summary>
			<value>The last item.</value>
			*/
			intrusive_ptr<DocumentObject> GetLastItem();
			/*
			<summary>
				Adds the specified entity.
			</summary>
			<param name="entity">the document object.</param>
			<returns></returns>
			*/
			int Add(intrusive_ptr<IDocumentObject> entity);
			/*
			<summary>
				Removes all items
			</summary>
			*/
			void Clear();
			/*
			<summary>
				Determines whether a entity is in the collection.
			</summary>
			<param name="entity">the document object.</param>
			<returns></returns>
			*/
			bool Contains(intrusive_ptr<IDocumentObject> entity);
			/*
			<summary>
				Returns the zero-based index of the specified entity.
			</summary>
			<param name="entity">the document object.</param>
			<returns></returns>
			*/
			int IndexOf(intrusive_ptr<IDocumentObject> entity);
			/*
			<summary>
				Inserts a entity into the collection at the specified index.
			</summary>
			<param name="index">The index.</param>
			<param name="entity">the document object.</param>
			*/
			void Insert(int index, intrusive_ptr<IDocumentObject> entity);
			/*
			<summary>
				Removes the document object from the collection.
			</summary>
			<param name="entity">the document object.</param>
			*/
			void Remove(intrusive_ptr<IDocumentObject> entity);
			/*
			<summary>
				Removes the document object at the specified index from the collection.
			</summary>
			<param name="index">The index.</param>
			*/
			void RemoveAt(int index);
		private:
			intrusive_ptr<DocumentObject> CreateObjectByTypeName(IntPtrWithTypeName intPtrWithTypeName, Object* pParent);
		};
	}
}