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
				Represents a collection of list style
			</summary>
		*/
		class EXPORTS ListStyleCollection : public virtual DocumentSerializableCollection
		{
		public:
			/*
			<summary>
				Gets the <see cref="!:Spire.Doc.ListStyle" /> at the specified index.
			</summary>
		    <value></value>
			*/
			intrusive_ptr<ListStyle> GetItem(int index);
			/*
			<summary>
				Adds the list style into collection.
			</summary>
			<param name="style">The style.</param>
			<returns></returns>
			*/
			int Add(intrusive_ptr<ListStyle> style);
			/*
			<summary>
				Finds list style by name.
			</summary>
			<param name="name">The name.</param>
			<returns></returns>
			*/
			intrusive_ptr<ListStyle> FindByName(LPCWSTR_S name);
		private:
		};
	}
}