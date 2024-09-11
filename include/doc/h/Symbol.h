#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IDocumentObject.h"
#include "ParagraphBase.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS Symbol : public virtual ParagraphBase, public virtual IDocumentObject
		{
		public:
			/*
			<summary>
				Gets the type of the document object.
			</summary>
		    <value>The type of the document object.</value>
			*/
			virtual DocumentObjectType GetDocumentObjectType();
			/*
			<summary>
				Gets character format for the symbol.
			</summary>
			*/
			virtual intrusive_ptr<CharacterFormat> GetCharacterFormat();
			/*
			<summary>
				Returns symbol font name.
			</summary>
			*/
			LPCWSTR_S GetFontName();
			/*
			<summary>
				Sets symbol font name.
			</summary>
			*/
			void SetFontName(LPCWSTR_S value);
			/*
			<summary>
				Returns symbol's character code.
			</summary>
			*/
			byte GetCharacterCode();
			/*
			<summary>
				Sets symbol's character code.
			</summary>
			*/
			void SetCharacterCode(byte value);
		private:
		};
	}
}