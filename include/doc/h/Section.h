#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IDocumentObject.h"
#include "ICompositeObject.h"
#include "DocumentContainer.h"
#include "ISection.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS Section : public virtual DocumentContainer, public virtual IDocumentObject, public virtual ISection, public virtual ICompositeObject
		{
			friend class Object;
		public:
			Section(intrusive_ptr<IDocument> doc);
			/*
			<summary>
				Gets the section body.
			</summary>
		    <value>The body.</value>
			*/
			virtual intrusive_ptr<Body> GetBody();
			/*
			<summary>
				Gets options that control numbering and positioning of endnotes in current section.
			</summary>
			*/
			intrusive_ptr<FootEndnoteOptions> GetEndnoteOptions();
			/*
			<summary>
				Gets options that control numbering and positioning of footnote in current section.
			</summary>
			*/
			intrusive_ptr<FootEndnoteOptions> GetFootnoteOptions();
			/*
			<summary>
				Gets headers/footers of current section.
			</summary>
			*/
			virtual intrusive_ptr<HeadersFooters> GetHeadersFooters();
			/*
			<summary>
				Gets page Setup of current section.
			</summary>
			*/
			virtual intrusive_ptr<PageSetup> GetPageSetup();
			/*
			<summary>
				Get collection of columns which logically divide page on many.
				printing/publishing areas
			</summary>
			*/
			virtual intrusive_ptr<ColumnCollection> GetColumns();
			/*
			<summary>
				Returns break code.
			</summary>
			*/
			virtual SectionBreakType GetBreakCode();
			/*
			<summary>
			    Sets break code.
			</summary>
			*/
			virtual void SetBreakCode(SectionBreakType value);
			/*
			<summary>
				Gets the type of the document object.
			</summary>
		    <value>The type of the document object.</value>
			*/
			virtual DocumentObjectType GetDocumentObjectType();
			/*
			<summary>
				Gets the child objects.
			</summary>
		    <value>The child objects.</value>
			*/
			virtual intrusive_ptr<DocumentObjectCollection> GetChildObjects();
			/*
			<summary>
				Gets the paragraphs.
			</summary>
		    <value>The paragraphs.</value>
			*/
			virtual intrusive_ptr<ParagraphCollection> GetParagraphs();
			/*
			<summary>
				Gets the tables.
			</summary>
		    <value>The tables.</value>
			*/
			virtual intrusive_ptr<TableCollection> GetTables();
			/*
			<summary>
				Gets the text direction.
			</summary>
			*/
			TextDirection GetTextDirection();
			/*
			<summary>
				Sets the text direction.
			</summary>
			*/
			void SetTextDirection(TextDirection value);
			/*
			<summary>
				Gets a value indicating whether [protect form].
			</summary>
			*/
			virtual bool GetProtectForm();
			/*
			<summary>
				Sets a value indicating whether [protect form].
			</summary>
			*/
			virtual void SetProtectForm(bool value);
			/*
			<summary>
				Adds new column to the section.
			</summary>
			<param name="width">The width.</param>
			<param name="spacing">The spacing.</param>
			<returns></returns>
			*/
			virtual intrusive_ptr<Column> AddColumn(float width, float spacing);
			/*
			<summary>
				Makes all columns in current section to be of equal width.
			</summary>
			*/
			virtual void MakeColumnsSameWidth();
			/*
			<summary>
		        Clones it self.
		    </summary>
		    <returns></returns>
			*/
			virtual intrusive_ptr<Section> CloneSection();
			/*
			<summary>
				Clones the properties of the current to the destination section.
			</summary>
			<param name="destSection">The destination section.</param>
			*/
			void CloneSectionPropertiesTo(intrusive_ptr<Section> destSection);
			/*
			<summary>
				Adds the paragraph.
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
			<param name="showBorder">Display table borders.True to display;False does not display. </param>
			<returns></returns>
			*/
			intrusive_ptr<Table> AddTable(bool showBorder);
		private:
			Section();
		};
	}
}