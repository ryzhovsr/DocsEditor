#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "SdtControlProperties.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
		<summary>
			Represents plain/rich text SDT. See Iso29500, part 1, chapter 17.5.2.44
			text (Plain Text Structured Document Tag)
		</summary>
		*/
		class EXPORTS SdtText : public virtual SdtControlProperties
		{
			friend class Object;
		public:
			SdtText(bool isRichText);
			/*
			<summary>
				Allow Soft Line Breaks. Specifies whether soft line breaks can be added to
				the contents of this structured document tag when this document is modified.
			</summary>
			*/
			bool GetIsMultiline();
			/*

			*/
			void SetIsMultiline(bool value);
		protected:
		private:
			SdtText();
		};
	}
}