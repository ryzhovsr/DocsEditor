#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IDocumentObject.h"
#include "IParagraphBase.h"
#include "CharacterFormat.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
		<summary>
			Interface publishes text range functionality
		</summary>
		*/
		class EXPORTS ITextRange : public virtual IParagraphBase, public virtual IDocumentObject
		{
		public:
			/*
			<summary>
				Returns text.
			</summary>
			*/
			virtual LPCWSTR_S GetText() = 0;
			/*
			<summary>
				Sets text.
			</summary>
			*/
			virtual void SetText(LPCWSTR_S value) = 0;
			/*
			<summary>
				Gets text format.
			</summary>
			*/
			virtual intrusive_ptr<CharacterFormat> GetCharacterFormat() = 0;
			/*
			<summary>
				Applies specified character format for current text range.
			</summary>
			<param name="charFormat"></param>
			*/
			virtual void ApplyCharacterFormat(intrusive_ptr<CharacterFormat> charFormat) = 0;
		private:
		};
	}
}