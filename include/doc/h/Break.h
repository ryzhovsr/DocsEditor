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
		class EXPORTS Break : public virtual ParagraphBase, public virtual IDocumentObject
		{
			friend class Object;
		public:
			Break(intrusive_ptr<IDocument> doc);

			Break(intrusive_ptr<IDocument> doc, BreakType breakType);
			/*
			<summary>
				Gets the type of the document object.
			</summary>
			<value>The type of the document object.</value>
			*/
			virtual DocumentObjectType GetDocumentObjectType();
			/*
			<summary>
				Gets the character format.
			</summary>
			*/
			virtual intrusive_ptr<CharacterFormat> GetCharacterFormat();
			/*
			<summary>
				Gets the type of the break.
			</summary>
			<value>The type of the break.</value>
			*/
			BreakType GetBreakType();
		protected:
			Break();
		private:
		};
	}
}