#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "OwnerHolder.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS CollectionEx : public virtual OwnerHolder
		{
		public:
			/*
			<summary>
				Gets the number of items in the collection.
			</summary>
			<value>The count.</value>
			*/
			virtual int GetCount();
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