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
				Represent a collection of <see cref="!:Spire.Doc.DropDownItem" /> objects.
			</summary>
		*/
		class EXPORTS DropDownCollection : public virtual DocumentSerializableCollection
		{
		public:
			/*
			<summary>
				Gets the <see cref="!:Spire.Doc.DropDownItem" /> at the specified index.
			</summary>
			<value></value>
			*/
			intrusive_ptr<DropDownItem> GetItem(int index);
			/*
			<summary>
				Adds the item.
			</summary>
			<param name="text">The text.</param>
			<returns></returns>
			*/
			intrusive_ptr<DropDownItem> Add(LPCWSTR_S text);
			/*
			<summary>
				Removes DropDownItems by index.
			</summary>
			<param name="index">The index.</param>
			*/
			void Remove(int index);
			/*
			<summary>
				Clears this instance.
			</summary>
			*/
			void Clear();
		private:
		};
	}
}