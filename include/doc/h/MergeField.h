#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IDocumentObject.h"
#include "ITextRange.h"
#include "Field.h"
#include "IMergeField.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS MergeField : public virtual Field, public virtual IDocumentObject, public virtual ITextRange, public virtual IMergeField
		{
			friend class Object;
		public:
			MergeField(intrusive_ptr<IDocument> doc);
			/*
			<summary>
				Gets the type of the document object.
			</summary>
			<value>The type of the document object.</value>
			*/
			virtual DocumentObjectType GetDocumentObjectType();
			/*
			<summary>
				Returns field name
			</summary>
			*/
			virtual LPCWSTR_S GetFieldName();
			/*
			<summary>
				Sets field name
			</summary>
	        */
			virtual void SetFieldName(LPCWSTR_S value);
			/*

			*/
			virtual LPCWSTR_S GetText();
			/*

			*/
			virtual void SetText(LPCWSTR_S value);
			/*
			<summary>
				Returns the text before merge field
			</summary>
			*/
			virtual LPCWSTR_S GetTextBefore();
			/*
			<summary>
				Sets the text before merge field
			</summary>
			*/
			virtual void SetTextBefore(LPCWSTR_S value);
			/*
			<summary>
				Returns the text after merge field
			</summary>
			*/
			virtual LPCWSTR_S GetTextAfter();
			/*
			<summary>
				Sets the text after merge field
			</summary>
			*/
			virtual void SetTextAfter(LPCWSTR_S value);
			/*
			<summary>
				Gets the prefix of merge field.
			</summary>
			*/
			LPCWSTR_S GetPrefix();
			/*
			<summary>
				Gets the number format.
			</summary>
			*/
			LPCWSTR_S GetNumberFormat();
			/*
			<summary>
				Gets the date format.
			</summary>
			*/
			LPCWSTR_S GetDateFormatSpire();
			/*
			<summary>
				Gets the text items.
			</summary>
		    <value>The text items.</value>
			*/
			intrusive_ptr<ParagraphItemCollection> GetTextItems();
		protected:
			MergeField();
		private:
		};
	}
}