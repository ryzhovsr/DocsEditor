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
		class EXPORTS FieldMark : public virtual ParagraphBase, public virtual IDocumentObject
		{
			friend class Object;
		public:
			FieldMark(intrusive_ptr<IDocument> doc, FieldMarkType type);
			/*
			<summary>
				Gets the type of the document object.
			</summary>
			<value>The type of the document object.</value>
			*/
			virtual DocumentObjectType GetDocumentObjectType();
			/*

			*/
			virtual intrusive_ptr<CharacterFormat> GetCharacterFormat();
			/*
			<summary>
				Gets type of field mark.
			</summary>
			*/
			FieldMarkType GetType();
			/*
			<summary>
				Sets type of field mark.
			</summary>
			*/
			void SetType(FieldMarkType value);
		protected:
			FieldMark();
		private:
		};
	}
}