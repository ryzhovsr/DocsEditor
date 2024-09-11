#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IDocumentObject.h"
#include "IParagraphBase.h"
#include "ICompositeObject.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
		<summary>
			Summary description for ITextBox.
		</summary>
		*/
		class EXPORTS ITextBox : public virtual IParagraphBase, public virtual IDocumentObject, public virtual ICompositeObject
		{
		public:
			/*
			<summary>
				Gets the text box body.
			</summary>
			<value>The text box body.</value>
			*/
			virtual intrusive_ptr<Body> GetBody() = 0;
			/*
			<summary>
				Gets the text box format.
			</summary>
			<value>The text box format.</value>
			*/
			virtual intrusive_ptr<TextBoxFormat> GetFormat() = 0;
		private:
		};
	}
}