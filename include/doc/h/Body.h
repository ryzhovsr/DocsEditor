#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IDocumentObject.h"
#include "ICompositeObject.h"
#include "DocumentContainer.h"
#include "IBody.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS Body : public virtual DocumentContainer, public virtual IDocumentObject, public virtual IBody, public virtual ICompositeObject
		{
		public:
			/*
		   <summary>
			   Gets the document .
		   </summary>
		   <value>The type of the document object.</value>
		   */
			virtual intrusive_ptr<Document> GetDocument();
			/*
			<summary>
				Gets the type of the document object.
			</summary>
		    <value>The type of the document object.</value>
			*/
			virtual DocumentObjectType GetDocumentObjectType();
			/*
			<summary>
				Gets inner paragraphs
			</summary>
			*/
			virtual intrusive_ptr<ParagraphCollection> GetParagraphs();
			/*
			<summary>
				Gets inner tables
			</summary>
			*/
			virtual intrusive_ptr<TableCollection> GetTables();
			/*
			<summary>
				Gets the form fields.
			</summary>
		    <value>The form fields.</value>
			*/
			virtual intrusive_ptr<FormFieldCollection> GetFormFields();
			/*
			<summary>
				Gets the last paragraph.
			</summary>
		    <value>The last paragraph.</value>
			*/
			virtual intrusive_ptr<IParagraph> GetLastParagraph();
			/*
			<summary>
				Gets the First paragraph.
			</summary>
		    <value>The last paragraph.</value>
			*/
			intrusive_ptr<IParagraph> GetFirstParagraph();
			/*

			*/
			virtual intrusive_ptr<DocumentObjectCollection> GetChildObjects();
			/*
			<summary>
				Adds paragraph at end of section.
			</summary>
			<returns></returns>
			*/
			virtual intrusive_ptr<Paragraph> AddParagraph();
			/*
			<summary>
				Adds the table.
			</summary>
			<returns></returns>
			*/
			virtual intrusive_ptr<Table> AddTable();
			/*
			<summary>
				Adds the table.
			</summary>
			<param name="showBorder">Is Show Border</param>
			<returns></returns>
			*/
			intrusive_ptr<Table> AddTable(bool showBorder);
			/*
			<summary>
				Inserts html at end of text body.
			</summary>
			*/
			virtual void InsertXHTML(LPCWSTR_S html);
			/*
			<summary>
				Inserts html. Inserting begins from paragraph specified by paragraphIndex
			</summary>
			*/
			virtual void InsertXHTML(LPCWSTR_S html, int paragraphIndex);
			/*
			<summary>
				Inserts html. Inserting begins from paragraph specified by paragraphIndex,
				and paragraph item specified by paragraphItemIndex
			</summary>
			*/
			virtual void InsertXHTML(LPCWSTR_S html, int paragraphIndex, int paragraphItemIndex);
			/*
			<summary>
				Validates the XHTML.
			</summary>
			<param name="html">The HTML.</param>
			<param name="type">The validation type.</param>
			<returns>
				if it is valid XHTML, set to <c>true</c>.
			</returns>
			*/
			bool IsValidXHTML(LPCWSTR_S html, XHTMLValidationType type);
			/*

			*/
			//bool IsValidXHTML (LPCWSTR_S html,XHTMLValidationType type,System.String& exceptionMessage);
			/*
			<summary>
				If the text body has no paragraphs, creates and appends one Paragraph.
			</summary>
			*/
			virtual void EnsureMinimum();
		private:
		};
	}
}