#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "ICollectionBase.h"
#include "IDocumentObjectCollection.h"
#include "Section.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
		<summary>
			Represents a collection of <see cref="Spire.Doc.ISection"/>.
		</summary>
		*/
		class EXPORTS IWSectionCollection : public virtual IDocumentObjectCollection, public virtual ICollectionBase
		{
		public:
			/*
			<summary>
				Gets the <see cref="Spire.Doc.ISection"/> at the specified index.
			</summary>
			<value></value>
			*/
			virtual intrusive_ptr<Section> GetItemInSectionCollection(int index) = 0;
			/*
			<summary>
				Adds a section to end of document.
			</summary>
			<param name="section">The section.</param>
			<returns></returns>
			*/
			virtual int Add(intrusive_ptr<ISection> section) = 0;
			/*
			<summary>
				Returns the zero-based index of the specified section.
			</summary>
			<param name="section">The section.</param>
			<returns></returns>
			*/
			virtual int IndexOf(intrusive_ptr<ISection> section) = 0;
		private:
		};
	}
}