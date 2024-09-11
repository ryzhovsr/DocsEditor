#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IDocumentObject.h"
#include "ICompositeObject.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS IBody : public virtual ICompositeObject, public virtual IDocumentObject
		{
		public:
			/*
			<summary>
			   Gets inner tables.
			</summary>
			*/
			virtual intrusive_ptr<TableCollection> GetTables() = 0;
			/*
			<summary>
			   Gets inner paragraphs.
			</summary>
			*/
			virtual intrusive_ptr<ParagraphCollection> GetParagraphs() = 0;
			/*
			<summary>
			   Gets the form fields.
			</summary>
			<value>The form fields.</value>
			*/
			virtual intrusive_ptr<FormFieldCollection> GetFormFields() = 0;
			/*
			<summary>
			   Gets the last paragraph.
			</summary>
			<value>The last paragraph.</value>
			*/
			virtual intrusive_ptr<IParagraph> GetLastParagraph() = 0;
			/*
			<summary>
				Adds paragraph at the end of section.
			</summary>
			<returns></returns>
			*/
			virtual intrusive_ptr<Paragraph> AddParagraph() = 0;
			/*
			<summary>
				Adds the table.
			</summary>
			<returns></returns>
			*/
			virtual intrusive_ptr<Table> AddTable() = 0;
			/*
			<summary>
				Inserts html at end of text body.
			</summary>
			*/
			virtual void InsertXHTML(LPCWSTR_S html) = 0;
			/*
			<summary>
				Inserts html begins from paragraph specified by paragraphIndex.
			</summary>
			*/
			virtual void InsertXHTML(LPCWSTR_S html, int paragraphIndex) = 0;
			/*
			<summary>
				Inserts html beginning from paragraph specified by paragraphIndex,
				and after paragraph item specified by paragraphItemIndex.
			</summary>
			*/
			virtual void InsertXHTML(LPCWSTR_S html, int paragraphIndex, int paragraphItemIndex) = 0;
			/*
			<summary>
				If the text body has no paragraphs, creates and appends one Paragraph.
			</summary>
			*/
			virtual void EnsureMinimum() = 0;
		private:
		};
	}
}