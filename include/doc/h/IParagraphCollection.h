#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "ICollectionBase.h"
#include "IDocumentObjectCollection.h"
#include "Paragraph.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
		<summary>
	        Represents a collection of <see cref="Spire.Doc.IParagraph"/>.
	    </summary>
		*/
		class EXPORTS IParagraphCollection : public virtual IDocumentObjectCollection, public virtual ICollectionBase
		{
		public:
			/*
			<summary>
		        Gets the <see cref="Spire.Doc.IParagraph"/> at the specified index.
		    </summary>
		    <value></value>
			*/
			virtual intrusive_ptr<Paragraph> GetItemInParagraphCollection(int index) = 0;
			/*
			<summary>
		        Adds a paragraph to the end of collection.
		    </summary>
		    <param name="paragraph">The paragraph.</param>
		    <returns></returns>
			*/
			virtual int Add(intrusive_ptr<IParagraph> paragraph) = 0;
			/*
			<summary>
		        Inserts a paragraph into collection at the specified index.
		    </summary>
		    <param name="index">The index.</param>
		    <param name="paragraph">The paragraph.</param>
			*/
			virtual void Insert(int index, intrusive_ptr<IParagraph> paragraph) = 0;
			/*
			<summary>
		        Returns the zero-based index of the specified paragraph.
		    </summary>
		    <param name="paragraph">The paragraph.</param>
		    <returns></returns>
			*/
			virtual int IndexOf(intrusive_ptr<IParagraph> paragraph) = 0;
			/*
			<summary>
		        Removes the paragraph at the specified index from the collection.
		    </summary>
		    <param name="index">The index.</param>
			*/
			virtual void RemoveAt(int index) = 0;
		private:
		};
	}
}