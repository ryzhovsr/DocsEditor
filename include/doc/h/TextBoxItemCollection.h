#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "ITextBoxItemCollection.h"
#include "DocumentObjectCollection.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
			<summary>
				Represents a collection of <see cref="!:Spire.Doc.TextBox" /> objects.
			</summary>
		*/
		class EXPORTS TextBoxItemCollection : public virtual DocumentObjectCollection, public virtual ITextBoxItemCollection
		{
		public:
			/*
			<summary>
				Gets the <see cref="Spire.Doc.ITextBox"/> at the specified index.
			</summary>
			<value></value>
			<returns></returns>
			*/
			virtual intrusive_ptr<ITextBox> GetTextBoxItem(int index);
			/*
			<summary>
				Adds a textbox to the collection.
			</summary>
			<param name="textBox">The text box.</param>
			<returns></returns>
			*/
			virtual int Add(intrusive_ptr<ITextBox> textBox);
		private:
		};
	}
}