#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
		<summary>
			Represents a collection of <see cref="Spire.Doc.ITextBox"/>.
		</summary>
		*/
		class EXPORTS ITextBoxItemCollection
		{
		public:
			/*
			<summary>
				Gets the <see cref="Spire.Doc.ITextBox"/> at the specified index.
			</summary>
			<value></value>
			*/
			virtual intrusive_ptr<ITextBox> GetTextBoxItem(int index) = 0;
			/*
			<summary>
				Adds a textbox to the collection.
			</summary>
			<param name="textBox">The text box.</param>
			<returns></returns>
			*/
			virtual int Add(intrusive_ptr<ITextBox> textBox) = 0;
		private:
		};
	}
}