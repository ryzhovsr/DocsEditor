#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IDocumentObject.h"
#include "IField.h"
#include "TextRange.h"
#include "TextFormat.h"
#include "FieldType.h"
#include "FieldMark.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS Field : public virtual TextRange, public virtual IDocumentObject, public virtual IField
		{
			friend class Object;
		public:
			Field(intrusive_ptr<IDocument> doc);
			/*
			<summary>
				Gets the lock property of the filed.if the field is locked,the field can't be updated.
			</summary>
			*/
			virtual bool GetIsLocked();
			/*
			<summary>
				Sets the lock property of the filed.if the field is locked,the field can't be updated.
			</summary>
			*/
			virtual void SetIsLocked(bool value);

			/*
			<summary>
				Gets the document.
			</summary>
			*/
			intrusive_ptr<Document> GetDocument();
			/*
			<summary>
				Gets regular text format.
			</summary>
			*/
			TextFormat GetTextFormat();
			/*
			<summary>
				Sets regular text format.
			</summary>
			*/
			void SetTextFormat(TextFormat value);
			/*
			<summary>
				Gets the type of the document object.
			</summary>
			<value>The type of the document object.</value>
			*/
			virtual DocumentObjectType GetDocumentObjectType();
			/*
			<summary>
				Returns field pattern.
			</summary>
			*/
			LPCWSTR_S GetPattern();
			/*
			<summary>
				Sets field pattern.
			</summary>
			*/
			void SetPattern(LPCWSTR_S value);
			/*
			<summary>
				Gets the field value.
			</summary>
			<value>The field value.</value>
			*/
			LPCWSTR_S GetValue();
			/*
			<summary>
				Returns field type
			</summary>
			<value></value>
			*/
			virtual FieldType GetType();
			/*
			<summary>
				Sets field type
			</summary>
			<value></value>
			*/
			virtual void SetType(FieldType value);
			/*
			<summary>
				Gets the field code.
			</summary>
			<value>The field code.</value>
			*/
			LPCWSTR_S GetCode();
			/*
			<summary>
				Sets the field code.
			</summary>
			<value>The field code.</value>
			*/
			void SetCode(LPCWSTR_S value);
			/*
			<summary>
				Gets the field separator.
			</summary>
			<value>The field separator.</value>
			*/
			intrusive_ptr<FieldMark> GetSeparator();
			/*
			<summary>
				Gets the field end.
			</summary>
			<value>The field mark,Type of FieldEnd. </value>
			*/
			intrusive_ptr<FieldMark> GetEnd();
			/*
			<summary>
				Sets the field end.
			</summary>
			<value>The field mark,Type of FieldEnd. </value>
			*/
			void SetEnd(intrusive_ptr<FieldMark> value);
			/*
			<summary>
				Gets Filed Displays text information.
			</summary>
			*/
			LPCWSTR_S GetFieldText();
			/*
			<summary>
				Sets Filed Displays text information.
			</summary>
			*/
			void SetFieldText(LPCWSTR_S value);
			/*
			<summary>
				Update the result of the field.
				Can only be simpler field.
				Direct calls cannot update the NumPages field and Page field, ect.
			</summary>
			*/
			void Update();
		protected:
			Field();
		private:
		};
	}
}