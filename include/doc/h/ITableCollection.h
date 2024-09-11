#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "ICollectionBase.h"
#include "IDocumentObjectCollection.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
		<summary>
			Represents a collection of <see cref="Spire.Doc.ITable"/>.
		</summary>
		*/
		class EXPORTS ITableCollection : public virtual IDocumentObjectCollection, public virtual ICollectionBase
		{
		public:
			/*
			<summary>
				Gets the <see cref="Spire.Doc.ITable"/> at the specified index.
			</summary>
			<value></value>
			*/
			virtual intrusive_ptr<ITable> GetItemInTableCollection(int index) = 0;
			/*
			<summary>
				Adds a table to end of text body.
			</summary>
			<param name="table">The table.</param>
			<returns></returns>
			*/
			virtual int Add(intrusive_ptr<ITable> table) = 0;
			/*
			<summary>
				Determines the index of a specific item in the collection.
			</summary>
			<param name="table">The table.</param>
			<returns></returns>
			*/
			virtual int IndexOf(intrusive_ptr<ITable> table) = 0;
			/*
			<summary>
				Determines whether the <see cref="Spire.Doc.ITableCollection"/> contains a specific value.
			</summary>
			<param name="table">The table.</param>
			<returns>
				if table is found, set to <c>true</c>.
			</returns>
			*/
			virtual bool Contains(intrusive_ptr<ITable> table) = 0;
		private:
		};
	}
}