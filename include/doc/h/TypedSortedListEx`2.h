#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

//namespace Spire {
//	namespace Doc {
//		/*
//		<summary></summary>
//		<typeparam name="TKey"></typeparam>
//		<typeparam name="TValue"></typeparam>
//		*/
//		class EXPORTS TypedSortedListEx`2 : public virtual Object
//		{
//		public:
//			/*
//			<summary>
//				Capacity of internal buffers.
//			</summary>
//			*/
//			virtual int GetCapacity();
//			/*
//
//			*/
//			virtual void SetCapacity(int value);
//			/*
//			<summary>
//				FontSize of the collection. Read-only.
//			</summary>
//			*/
//			virtual int GetCount();
//			/*
//			<summary>
//				List of keys. Read-only.
//			</summary>
//			*/
//			virtual IList`1 GetKeys();
//			/*
//			<summary>
//				List of values. Read-only.
//			</summary>
//			*/
//			virtual IList`1 GetValues();
//			/*
//			<summary>
//				Returns True if list is readonly, False otherwise. Read-only.
//			</summary>
//			*/
//			virtual bool GetIsReadOnly();
//			/*
//			<summary>
//				Returns True if collection has fixed size, False otherwise.
//			</summary>
//			*/
//			virtual bool GetIsFixedSize();
//			/*
//			<summary>
//				Returns True if the collection is synchronized, False otherwise.
//			</summary>
//			*/
//			virtual bool GetIsSynchronized();
//			/*
//			<summary>
//				Returns the object that can be used to synchronize access to the collection.
//					Read-only.
//			</summary>
//			*/
//			//virtual System.Object GetSyncRoot ();
//			/*
//			<summary>
//				Gets or sets the value associated with the specified key.
//			</summary>
//			*/
//			virtual TValue GetItem(TKey key);
//			/*
//
//			*/
//			virtual void SetItem(TKey key, TValue value);
//			/*
//
//			*/
//			static TypedSortedListEx`2* Synchronized(TypedSortedListEx`2* list);
//			/*
//			<summary>
//				Adds an element with the provided key and value to the list.
//			</summary>
//			<param name="key">The Object to use as the key of the element to add.</param>
//			<param name="value">The Object to use as the value of the element to add.</param>
//		<exception cref="T:System.ArgumentNullException">
//					When key is null.
//					</exception>
//		<exception cref="T:System.ArgumentException">
//					When list already contains specified key.
//					</exception>
//			*/
//			virtual void Add(TKey key, TValue value);
//			/*
//			<summary>
//				Removes all elements from the collection.
//			</summary>
//			*/
//			virtual void Clear();
//			/*
//			<summary>
//				Creates a new object that is a copy of the current instance.
//			</summary>
//			<returns>Copy of the current instance.</returns>
//			*/
//			//virtual System.Object Clone ();
//			/*
//			<summary>
//				Clone current instance.
//			</summary>
//			<returns>Returns clone of current object.</returns>
//			*/
//			TypedSortedListEx`2* CloneAll();
//			/*
//			<summary>
//				Determines whether the list contains an element with the specified key.
//			</summary>
//			<param name="key">Key of the element to search.</param>
//			<returns>True if list contains specified key.</returns>
//			*/
//			virtual bool Contains(TKey key);
//			/*
//			<summary>
//				Determines whether the list contains an element with the specified key.
//			</summary>
//			<param name="key">Key of the element to search.</param>
//			<returns>True if list contains specified key.</returns>
//			*/
//			virtual bool ContainsKey(TKey key);
//			/*
//			<summary>
//				Determines whether the list contains the specified value.
//			</summary>
//			<param name="value">Value of the element to search.</param>
//			<returns>True if list contains specified value.</returns>
//			*/
//			virtual bool ContainsValue(TValue value);
//			/*
//			<summary>
//				Copies all the elements of the SortedListEx to the specified one-dimensional Array
//					starting at the specified destination Array index.
//			</summary>
//			<param name="array">The one-dimensional Array that is the destination of the
//					elements copied from the current list.</param>
//			<param name="arrayIndex">The index in array at which copying begins.</param>
//		<exception cref="T:System.ArgumentNullException">
//					If specified array is null.
//					</exception>
//		<exception cref="T:System.ArgumentException">
//					If rank of the array is not 1 or there are not enough elements.
//					</exception>
//		<exception cref="T:System.ArgumentOutOfRangeException">
//					If specified arrayIndex is less than zero.
//					</exception>
//			*/
//			//virtual void CopyTo (System.Array array,int arrayIndex);
//			/*
//			<summary>
//				Gets the value at the specified index of the SortedListEx.
//			</summary>
//			<param name="index">The zero-based index of the value to get.</param>
//			<returns>The value at the specified index of the SortedListEx.</returns>
//		<exception cref="T:System.ArgumentOutOfRangeException">
//					When index is less than zero or greater than size of the list.
//					</exception>
//			*/
//			virtual TValue GetByIndex(int index);
//			/*
//			<summary>
//				Gets the key at the specified index of the SortedListEx.
//			</summary>
//			<param name="index">The zero-based index of the key to get.</param>
//			<returns>The key at the specified index of the SortedListEx.</returns>
//		<exception cref="T:System.ArgumentOutOfRangeException">
//					When index is less than zero or greater than size of the list.
//					</exception>
//			*/
//			virtual TKey GetKey(int index);
//			/*
//			<summary>
//				Gets the keys in the SortedListEx.
//			</summary>
//			<returns>An IList containing the keys in the SortedListEx.</returns>
//			*/
//			virtual IList`1 GetKeyList();
//			/*
//			<summary>
//				Gets the values in the SortedListEx.
//			</summary>
//			<returns>An IList containing the values in the SortedListEx.</returns>
//			*/
//			virtual IList`1 GetValueList();
//			/*
//			<summary>
//				Returns the zero-based index of the specified key.
//			</summary>
//			<param name="key">The key to locate.</param>
//			<returns>The zero-based index of key, if key is found; otherwise, -1.</returns>
//		<exception cref="T:System.ArgumentNullException">
//					If specified key is null.
//					</exception>
//			*/
//			virtual int IndexOfKey(TKey key);
//			/*
//			<summary>
//				Returns the zero-based index of the first occurrence of the specified value.
//			</summary>
//			<param name="value">The value to locate (can be NULL).</param>
//			<returns>
//					The zero-based index of the first occurrence of value, if value is found;
//					otherwise, -1.
//					</returns>
//			*/
//			virtual int IndexOfValue(TValue value);
//			/*
//			<summary>
//				Removes the element at the specified index.
//			</summary>
//			<param name="index">The zero-based index of the element to remove.</param>
//		<exception cref="T:System.ArgumentOutOfRangeException">
//					When index is less than zero or greater than size of the list.
//					</exception>
//			*/
//			virtual void RemoveAt(int index);
//			/*
//
//			*/
//			virtual bool Remove(TKey key);
//			/*
//			<summary>
//				Replaces the value at the specific index.
//			</summary>
//			<param name="index">The zero-based index at which to save value.</param>
//			<param name="value">The Object to save into. Can be NULL.</param>
//		<exception cref="T:System.ArgumentOutOfRangeException">
//					When index is less than zero or greater than size of the list.
//					</exception>
//			*/
//			virtual void SetByIndex(int index, TValue value);
//			/*
//			<summary>
//				Sets the capacity to the actual number of elements.
//			</summary>
//			*/
//			virtual void TrimToSize();
//			/*
//		<summary></summary>
//			<returns></returns>
//			*/
//			virtual IEnumerator`1 GetEnumerator();
//			/*
//
//			*/
//			//virtual void Add (System.Object key,System.Object value);
//			/*
//
//			*/
//			//virtual bool Contains (System.Object key);
//			/*
//
//			*/
//			//virtual void Remove (System.Object key);
//			/*
//
//			*/
//			//virtual System.Object GetItem (System.Object key);
//			/*
//
//			*/
//			//virtual void SetItem (System.Object key,System.Object value);
//			/*
//
//			*/
//			virtual bool TryGetValue(TKey key, TValue& value);
//			/*
//
//			*/
//			virtual void Add(KeyValuePair`2 item);
//			/*
//
//			*/
//			virtual bool Contains(KeyValuePair`2 item);
//			/*
//
//			*/
//			virtual void CopyTo(std::vector << # = mi.TypeName# >> array, int arrayIndex);
//			/*
//
//			*/
//			virtual bool Remove(KeyValuePair`2 item);
//		private:
//		};
//	}
//}