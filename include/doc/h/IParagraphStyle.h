#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IStyle.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
		<summary>
			Represents the style that can be used to format a Paragraph.
		</summary>
		*/
		class EXPORTS IParagraphStyle : public virtual IStyle
		{
		public:
			/*
			<summary>
				Gets formatting of paragraph.
			</summary>
			*/
			virtual intrusive_ptr<ParagraphFormat> GetParagraphFormat() = 0;
			/*
			<summary>
				Gets formatting of characters inside paragraph.
			</summary>
			*/
			virtual intrusive_ptr<CharacterFormat> GetCharacterFormat() = 0;
		private:
		};
	}
}