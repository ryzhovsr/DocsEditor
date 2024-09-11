#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IDocumentObject.h"
#include "Paragraph.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
		 <summary>
			 Interface publishes base paragraph item functionality
		 </summary>
		*/
		class EXPORTS IParagraphBase : public virtual IDocumentObject
		{
		public:
			/*
			<summary>
		        Gets owner paragraph.
		    </summary>
			*/
			virtual intrusive_ptr<Paragraph> GetOwnerParagraph() = 0;
			/*
			<summary>
				Applys the character style.
			</summary>
			<param name="styleName">the style name.</param>
			*/
			virtual void ApplyStyle(LPCWSTR_S styleName) = 0;
			/*
			<summary>
				Gets the style name.
			</summary>
			*/
			virtual LPCWSTR_S GetStyleName() = 0;
		private:
		};
	}
}