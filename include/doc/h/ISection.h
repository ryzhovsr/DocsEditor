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
		<summary>
			Represents a section inside a Document.
		</summary>
		*/
		class EXPORTS ISection : public virtual ICompositeObject, public virtual IDocumentObject
		{
		public:
			/*
			<summary>
				Gets the paragraphs.
			</summary>
			<value>The paragraphs.</value>
			*/
			virtual intrusive_ptr<ParagraphCollection> GetParagraphs() = 0;
			/*
			<summary>
				Gets the tables.
			</summary>
			<value>The tables.</value>
			*/
			virtual intrusive_ptr<TableCollection> GetTables() = 0;
			/*
			<summary>
				Gets the section body.
			</summary>
			<value>The body.</value>
			*/
			virtual intrusive_ptr<Body> GetBody() = 0;
			/*
			<summary>
				Gets page Setup of current section.
			</summary>
			*/
			virtual intrusive_ptr<PageSetup> GetPageSetup() = 0;
			/*
			<summary>
				Get collection of columns which logically divide page on many
				printing/publishing areas.
			</summary>
			*/
			virtual intrusive_ptr<ColumnCollection> GetColumns() = 0;
			/*
			<summary>
				Returns sbreak code.
			</summary>
			*/
			virtual SectionBreakType GetBreakCode() = 0;
			/*
			<summary>
				Sets break code.
			</summary>
			*/
			virtual void SetBreakCode(SectionBreakType value) = 0;
			/*
			<summary>
				Gets a value indicating whether [protect form].
			</summary>
			<value><c>true</c> if [protect form]; otherwise, <c>false</c>.</value>
			*/
			virtual bool GetProtectForm() = 0;
			/*
			<summary>
				Sets a value indicating whether [protect form].
			</summary>
			<value><c>true</c> if [protect form]; otherwise, <c>false</c>.</value>
			*/
			virtual void SetProtectForm(bool value) = 0;
			/*
			<summary>
				Adds new column to the section.
			</summary>
			<param name="width"></param>
			<param name="spacing"></param>
			<returns></returns>
			*/
			virtual intrusive_ptr<Column> AddColumn(float width, float spacing) = 0;
			/*
			<summary>
				Adds the paragraph.
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
				Clones it self.
			</summary>
			<returns></returns>
			*/
			//virtual intrusive_ptr<Section> Clone() = 0;
			/*
			<summary>
				Makes all columns in current section to be of equal width.
			</summary>
			*/
			virtual void MakeColumnsSameWidth() = 0;
			/*
			<summary>
				Gets headers/footers of current section
			</summary>
			*/
			virtual intrusive_ptr<HeadersFooters> GetHeadersFooters() = 0;
		private:
		};
	}
}