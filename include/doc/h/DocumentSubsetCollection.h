#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "OwnerHolder.h"
#include "ICollectionBase.h"
#include "IDocumentObjectCollection.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
			<summary>
				Represents a subset from collection of specified type entities.
			</summary>
		*/
		class EXPORTS DocumentSubsetCollection : public virtual OwnerHolder, public virtual IDocumentObjectCollection, public virtual ICollectionBase
		{
		public:
			/*
			<summary>
				Gets the document.
			</summary>
			<value>The document.</value>
			*/
			intrusive_ptr<Document> GetDocument();
			/*
			<summary>
				Gets the owner.
			</summary>
			<value>The owner.</value>
			*/
			intrusive_ptr<DocumentObject> GetOwner();
			/*
			<summary>
				Gets the count.
			</summary>
			<value>The count.</value>
			*/
			virtual int GetCount();
			/*
			<summary>
				Gets the <see cref="T:Spire.Doc.DocumentObject" /> at the specified index.
			</summary>
			<value></value>
			*/
			virtual intrusive_ptr<DocumentObject> GetItem(int index);
			/*
			<summary>
				Removes all entities
			</summary>
			*/
			void Clear();
			/*
			<summary>
				Returns an enumerator that iterates through a collection.
			</summary>
			<returns>
				An <see cref="T:System.Collections.IEnumerator"></see> object that can be used to iterate through the collection.
			</returns>
			*/
			//virtual System.Collections.IEnumerator GetEnumerator ();
		private:
		};
	}
}