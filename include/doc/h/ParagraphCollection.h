#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "DocumentSubsetCollection.h"
#include "IParagraphCollection.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS ParagraphCollection : public virtual DocumentSubsetCollection, public virtual IParagraphCollection
		{
		public:
			/*

			*/
			virtual intrusive_ptr<Paragraph> GetItemInParagraphCollection(int index);
			/*
			<summary>
				Adds a paragraph to end of text body.
			</summary>
			<param name="paragraph">The paragraph.</param>
			<returns></returns>
			*/
			virtual int Add(intrusive_ptr<IParagraph> paragraph);
			/*
			<summary>
				Determines whether the <see cref="!:Spire.Doc.IParagraphCollection" /> contains a specific value.
			</summary>
			<param name="paragraph">The paragraph.</param>
			<returns>
				If paragraph is found, set to <c>true</c>.
			</returns>
			*/
			bool Contains(intrusive_ptr<IParagraph> paragraph);
			/*
			<summary>
				Inserts a paragraph into collection at the specified index.
			</summary>
			<param name="index">The index.</param>
			<param name="paragraph">The paragraph.</param>
			*/
			virtual void Insert(int index, intrusive_ptr<IParagraph> paragraph);
			/*
			<summary>
				Returns the zero-based index of the specified paragraph.
			</summary>
			<param name="paragraph">The paragraph.</param>
			<returns></returns>
			*/
			virtual int IndexOf(intrusive_ptr<IParagraph> paragraph);
			/*
			<summary>
				Removes the specified paragraph.
			</summary>
			<param name="paragraph">The paragraph.</param>
			*/
			void Remove(intrusive_ptr<IParagraph> paragraph);
			/*
			<summary>
				Removes the paragraph at the specified index from the collection.
			</summary>
			<param name="index">The index.</param>
			*/
			virtual void RemoveAt(int index);
		private:
		};
	}
}