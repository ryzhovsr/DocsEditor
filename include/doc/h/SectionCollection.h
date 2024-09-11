#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "DocumentObjectCollection.h"
#include "IWSectionCollection.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
		<summary>
			Represents a collection of <see cref="Spire.Doc.Section"/>.
		</summary>
		*/
		class EXPORTS SectionCollection : public virtual DocumentObjectCollection, public virtual IWSectionCollection
		{
		public:
			/*
			<summary>
				Gets the <see cref="Spire.Doc.Section"/> at the specified index.
			</summary>
			<value></value>
			<returns></returns>
			*/
			virtual intrusive_ptr<Section> GetItemInSectionCollection(int index);
			/*
			<summary>
				Adds a section to end of document.
			</summary>
			<param name="section">The section.</param>
			<returns></returns>
			*/
			virtual int Add(intrusive_ptr<ISection> section);
			/*
			<summary>
				Returns the zero-based index of the specified section.
			</summary>
			<param name="section">The section.</param>
			<returns></returns>
			*/
			virtual int IndexOf(intrusive_ptr<ISection> section);
		private:
		};
	}
}