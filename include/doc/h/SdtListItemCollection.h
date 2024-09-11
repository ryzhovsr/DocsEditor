#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
		<summary>
			Provides access to <see cref="SdtListItem"/> elements of a structured document tag.
		</summary>
		*/
		class EXPORTS SdtListItemCollection : public virtual Object
		{
		public:
			/*
			<summary>
				Returns an <ms>enumerator</ms><java>iterator</java> object that can be used to iterate over all items in the collection.
			</summary>
			*/
			//virtual System.Collections.IEnumerator GetEnumerator ();
			/*
			<summary>
				Adds an item to this collection.
			</summary>
			*/
			void Add(intrusive_ptr<SdtListItem> item);
			/*
			<summary>
				Removes a list item at the specified index.
			</summary>
			<param name="index">The zero-based index of the item to remove.</param>
			*/
			void RemoveAt(int index);
			/*
			<summary>
				Clears all items from this collection.
			</summary>
			*/
			void Clear();
			/*
			<summary>
				Specifies currently selected value in this list.
				Null value allowed, meaning that no currently selected entry is associated with this list item collection.
			</summary>
			*/
			intrusive_ptr<SdtListItem> GetSelectedValue();
			/*

			*/
			void SetSelectedValue(intrusive_ptr<SdtListItem> value);
			/*
			<summary>
				Returns a <see cref="SdtListItem"/> object given its zero-based index in the collection.
			</summary>
			*/
			intrusive_ptr<SdtListItem> GetItem(int index);
			/*
			<summary>
				Gets number of items in the collection.
			</summary>
			*/
			int GetCount();
		private:
		};
	}
}