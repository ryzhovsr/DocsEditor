#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IDocumentObject.h"
#include "ParagraphBase.h"
#include "ITextRange.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS TextRange : public virtual ParagraphBase, public virtual IDocumentObject, public virtual ITextRange
		{
			friend class Object;
		public:
			TextRange(intrusive_ptr<IDocument> doc);
			void ApplyCharacterFormat(intrusive_ptr<CharacterFormat> charFormat);
			/*
			<summary>
				Gets the type of the document object.
			</summary>
			<value>The type of the document object.</value>
			*/
			virtual DocumentObjectType GetDocumentObjectType();
			/*
			<summary>
				Returns the text.
			</summary>
			*/
			virtual LPCWSTR_S GetText();
			/*
			<summary>
				Sets the text.
			</summary>
			*/
			virtual void SetText(LPCWSTR_S value);
			/*
			<summary>
				Gets the character format.
			</summary>
			*/
			virtual intrusive_ptr<CharacterFormat> GetCharacterFormat();
		protected:
			TextRange();
		private:
		};
	}
}