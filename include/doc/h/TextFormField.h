#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IDocumentObject.h"
#include "ITextRange.h"
#include "FormField.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS TextFormField : public virtual FormField, public virtual IDocumentObject, public virtual ITextRange
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
				Gets text form field type.
			</summary>
			*/
			TextFormFieldType GetTextFieldType();
			/*
			<summary>
				Sets text form field type.
			</summary>
			*/
			void SetTextFieldType(TextFormFieldType value);
			/*
			<summary>
				Gets string text format (text, date/time, number) directly.
			</summary>
			*/
			LPCWSTR_S GetStringFormat();
			/*
			<summary>
				Sets string text format (text, date/time, number) directly.
			</summary>
			*/
			void SetStringFormat(LPCWSTR_S value);
			/*
			<summary>
				Gets default text for text form field.
			</summary>
			*/
			LPCWSTR_S GetDefaultText();
			/*
			<summary>
				Sets default text for text form field.
			</summary>
			*/
			void SetDefaultText(LPCWSTR_S value);
			/*
			<summary>
				Gets maximum text length.
			</summary>
			*/
			int GetMaximumLength();
			/*
			<summary>
				Sets maximum text length.
			</summary>
			*/
			void SetMaximumLength(int value);
			/*
			<summary>
				Gets form field text range;
			</summary>
			*/
			intrusive_ptr<TextRange> GetTextRange();
			/*
			<summary>
				Sets form field text range;
			</summary>
			*/
			void SetTextRange(intrusive_ptr<TextRange> value);
			/*
			<summary>
				Returns the text of text form field.
			</summary>
		    <value></value>
			*/
			virtual LPCWSTR_S GetText();
			/*
			<summary>
				Sets the text of text form field.
			</summary>
			*/
			virtual void SetText(LPCWSTR_S value);
		private:
		};
	}
}