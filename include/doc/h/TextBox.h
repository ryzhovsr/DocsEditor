#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IDocumentObject.h"
#include "ICompositeObject.h"
#include "ShapeObject.h"
#include "ITextBox.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS TextBox : public virtual ShapeObject, public virtual IDocumentObject, public virtual ITextBox, public virtual ICompositeObject
		{
			friend class Object;
		public:
			TextBox(intrusive_ptr<IDocument> doc);
			/*
			<summary>
				Gets the child entities.
			</summary>
			<value>The child entities.</value>
			*/
			virtual intrusive_ptr<DocumentObjectCollection> GetChildObjects();
			/*
			<summary>
				Gets the type of the document object.
			</summary>
			<value>The type of the document object.</value>
			*/
			virtual DocumentObjectType GetDocumentObjectType();
			/*
			<summary>
				Gets the format value.
			</summary>
			*/
			virtual intrusive_ptr<TextBoxFormat> GetFormat();
			/*
			<summary>
				Get/set TextBody value
			</summary>
			*/
			virtual intrusive_ptr<Body> GetBody();
			/*
			<summary>
				Gets the character format.
			</summary>
			<value>The character format.</value>
			*/
			virtual intrusive_ptr<CharacterFormat> GetCharacterFormat();
		protected:
			TextBox();
		private:
		};
	}
}