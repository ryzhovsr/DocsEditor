#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "DocumentSerializableCollection.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
			<summary>
				A collection of <see cref="T:Spire.Doc.Column" /> objects that
				represent all the columns of text in a section of a document.
			</summary>
		*/
		class EXPORTS ColumnCollection : public virtual DocumentSerializableCollection
		{
		public:
			/*
			<summary>
				Gets the <see cref="T:Spire.Doc.Column" /> at the specified index.
			</summary>
			<value></value>
			*/
			intrusive_ptr<Column> GetItem(int index);
			/*
			<summary>
				Adds <see cref="T:Spire.Doc.Column" /> object to the collection.
			</summary>
			<param name="column">The column.</param>
			<returns></returns>
			*/
			int Add(intrusive_ptr<Column> column);
			/*
			<summary>
				Populates the specified number of columns with specified spacing.
			</summary>
			<param name="count">The count.</param>
			<param name="spacing">The spacing.</param>
			*/
			void Populate(int count, float spacing);
			/*
			<summary>
				Removes all item.
			</summary>
			*/
			void Clear();
		private:
		};
	}
}