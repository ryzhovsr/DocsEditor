#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IDocumentObject.h"
#include "ICompositeObject.h"
#include "IBodyRegion.h"
#include "IStyleHolder.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
		<summary>
	       Represents a paragraph inside a Section.
	    </summary>
		*/
		class EXPORTS IParagraph : public virtual IBodyRegion, public virtual IDocumentObject, public virtual IStyleHolder, public virtual ICompositeObject
		{
		public:
			/*
			<summary>
		        Returns paragraph text.
		    </summary>
			*/
			virtual LPCWSTR_S GetText() = 0;
			/*
			<summary>
				Sets paragraph text.
			</summary>
			*/
			virtual void SetText(LPCWSTR_S value) = 0;
			/*
			<summary>
		       Gets the <see cref="Spire.Doc.ParagraphBase"/> at the specified index.
		    </summary>
		    <value></value>
			*/
			virtual intrusive_ptr<ParagraphBase> GetItem(int index) = 0;
			/*
			<summary>
		        Gets the paragraph items.
		    </summary>
		    <value>The items.</value>
			*/
			virtual intrusive_ptr<ParagraphItemCollection> GetItems() = 0;
			/*
            <summary>
		        Gets the paragraph format.
		    </summary>
			*/
			virtual intrusive_ptr<ParagraphFormat> GetFormat() = 0;
			/*
			<summary>
		        Gets list formatting for the paragraph.
		    </summary>
			*/
			virtual intrusive_ptr<ListFormat> GetListFormat() = 0;
			/*
			<summary>
		        Gets the character format for the break symbol.
		    </summary>
			*/
			virtual intrusive_ptr<CharacterFormat> GetBreakCharacterFormat() = 0;
			/*
			<summary>
		        Gets a value indicating whether this paragraph is in cell.
		    </summary>
		    <value>
		        if this paragraph is in cell, set to <c>true</c>.
		    </value>
			*/
			virtual bool GetIsInCell() = 0;
			/*
			<summary>
		        Gets a value indicating whether this paragraph is end of section.
		    </summary>
		    <value>
		     	if this paragraph is end of section, set to <c>true</c>.
		    </value>
			*/
			virtual bool GetIsEndOfSection() = 0;
			/*
			<summary>
		        Gets a value indicating whether this paragraph is end of document.
		    </summary>
		    <value>
		        if this instance is end of document, set to <c>true</c>.
		    </value>
			*/
			virtual bool GetIsEndOfDocument() = 0;
			/*
			<summary>
		        Appends text to the end of paragraph.
		    </summary>
		    <param name="text">The text.</param>
		    <returns></returns>
			*/
			virtual intrusive_ptr<TextRange> AppendText(LPCWSTR_S text) = 0;
			/*
			<summary>
		        Appends picture to the end of paragraph.
		    </summary>
		    <param name="image">The image.</param>
		    <returns></returns>
			*/
			//virtual intrusive_ptr<DocPicture> AppendPicture(intrusive_ptr<Image> image) = 0;
			/*
			<summary>
		        Appends picture to the end of paragraph.
		    </summary>
		    <param name="imageBytes">The image bytes.</param>
		    <returns></returns>
			*/
			//virtual intrusive_ptr<DocPicture> AppendPicture (std::vector<System.Byte> imageBytes)=0;
			/*
			<summary>
		        Appends field to the end of paragraph
		    </summary>
		    <param name="fieldName">Name of the field.</param>
		    <param name="fieldType">Type of the field.</param>
		    <returns></returns>
			*/
			virtual intrusive_ptr<Field> AppendField(LPCWSTR_S fieldName, FieldType fieldType) = 0;
			/*
			<summary>
		        Appends start of the bookmark with specified name into paragraph.
		    </summary>
		    <param name="name">The name.</param>
		    <returns></returns>
			*/
			virtual intrusive_ptr<BookmarkStart> AppendBookmarkStart(LPCWSTR_S name) = 0;
			/*
			<summary>
		        Appends end of the bookmark with specified name into paragraph.
		    </summary>
		    <param name="name">The name.</param>
		    <returns></returns>
			*/
			virtual intrusive_ptr<BookmarkEnd> AppendBookmarkEnd(LPCWSTR_S name) = 0;
			/*
			<summary>
		        Appends the comment.
		    </summary>
		    <returns></returns>
			*/
			virtual intrusive_ptr<Comment> AppendComment(LPCWSTR_S text) = 0;
			/*
			<summary>
		        Appends the footnote.
		    </summary>
		    <param name="type">The type.</param>
		    <returns></returns>
			*/
			virtual intrusive_ptr<Footnote> AppendFootnote(FootnoteType type) = 0;
			/*
			<summary>
		        Appends textbox to the end of the paragraph
		    </summary>
		    <param name="width">Textbox width</param>
		    <param name="height">Textbox height</param>
		    <returns></returns>
			*/
			virtual intrusive_ptr<TextBox> AppendTextBox(float width, float height) = 0;
			/*
			<summary>
		        Appends symbol to the end of paragraph.
		    </summary>
		    <param name="characterCode">The character code.</param>
		    <returns></returns>
			*/
			virtual intrusive_ptr<Symbol> AppendSymbol(byte characterCode) = 0;
			/*
			<summary>
		        Appends break to end of paragraph.
		    </summary>
		    <param name="breakType">Type of the break.</param>
			*/
			virtual intrusive_ptr<Break> AppendBreak(BreakType breakType) = 0;
			/*
			<summary>
		        Appends the HTML.
		    </summary>
		    <param name="html">The HTML.</param>
			*/
			virtual void AppendHTML(LPCWSTR_S html) = 0;
			/*
			<summary>
		        Gets related style.
		    </summary>
		    <returns></returns>
			*/
			virtual intrusive_ptr<ParagraphStyle> GetStyle() = 0;
			/*
			<summary>
		        Replaces all entries of matchString string with TextRangesHolder, taking into
		        consideration caseSensitive and wholeWord options.
		    </summary>
	        <param name="matchString">The matchString.</param>
		    <param name="textSelection">The text selection.</param>
		    <param name="caseSensitive">if it specifies case sensitive search, set to <c>true</c>.</param>
		    <param name="wholeWord">if it specifies the whole word to be newValue, set to <c>true</c>.</param>
			*/
			virtual int Replace(LPCWSTR_S given, intrusive_ptr<TextSelection> textSelection, bool caseSensitive, bool wholeWord) = 0;
			/*
			<summary>
		        Appends the check box.
		    </summary>
		    <returns></returns>
			*/
			virtual intrusive_ptr<CheckBoxFormField> AppendCheckBox() = 0;
			/*
			<summary>
		        Appends the text form field.
		    </summary>
		    <param name="defaultText">The default text.</param>
		    <returns></returns>
			*/
			virtual intrusive_ptr<TextFormField> AppendTextFormField(LPCWSTR_S defaultText) = 0;
			/*
			<summary>
		        Appends the drop down form field.
		    </summary>
		    <returns></returns>
			*/
			virtual intrusive_ptr<DropDownFormField> AppendDropDownFormField() = 0;
			/*
			<summary>
		        Appends the check box.
		    </summary>
		    <param name="checkBoxName">Name of the check box.</param>
		    <param name="defaultCheckBoxValue">Default checkbox value.</param>
		    <returns></returns>
			*/
			virtual intrusive_ptr<CheckBoxFormField> AppendCheckBox(LPCWSTR_S checkBoxName, bool defaultCheckBoxValue) = 0;
			/*
			<summary>
		        Appends the text form field.
		    </summary>
		    <param name="formFieldName">Name of the form field.</param>
		    <param name="defaultText">The default text.</param>
		    <returns></returns>
			*/
			virtual intrusive_ptr<TextFormField> AppendTextFormField(LPCWSTR_S formFieldName, LPCWSTR_S defaultText) = 0;
			/*
			<summary>
		        Appends the drop down form field.
		    </summary>
		    <param name="dropDropDownName">Name of the drop drop down.</param>
		    <returns></returns>
			*/
			virtual intrusive_ptr<DropDownFormField> AppendDropDownFormField(LPCWSTR_S dropDropDownName) = 0;
			/*
		    <summary>
		        Appends the hyperlink.
		    </summary>
		    <param name="link">The link.</param>
		    <param name="text">The text to display.</param>
		    <param name="type">The hyperlink type.</param>
		    <returns></returns>
			*/
			virtual intrusive_ptr<Field> AppendHyperlink(LPCWSTR_S link, LPCWSTR_S text, HyperlinkType type) = 0;
			/*
			<summary>
		        Appends the hyperlink.
		    </summary>
		    <param name="link">The link.</param>
		    <param name="picture">The picture to display.</param>
		    <param name="type">The type of hyperlink.</param>
		    <returns></returns>
			*/
			virtual intrusive_ptr<Field> AppendHyperlink(LPCWSTR_S link, intrusive_ptr<DocPicture> picture, HyperlinkType type) = 0;
			/*
			<summary>
		        Removes the absolute position data. If paragraph has absolute position in the document,
		        all position data will be erased.
		    </summary>
			*/
			virtual void RemoveAbsPosition() = 0;
			/*
			<summary>
		        Appends the TOC.
		    </summary>
		    <param name="lowerHeadingLevel">The lower heading level.</param>
		    <param name="upperHeadingLevel">The upper heading level.</param>
		    <returns></returns>
			*/
			virtual intrusive_ptr<TableOfContent> AppendTOC(int lowerHeadingLevel, int upperHeadingLevel) = 0;
			/*
			<summary>
		        Appends the OLE object.
		    </summary>
		    <param name="oleStream">The OLE stream.</param>
		    <param name="olePicture">The OLE picture.</param>
		    <returns></returns>
			*/
			virtual intrusive_ptr<DocOleObject> AppendOleObject(intrusive_ptr<Stream> oleStream, intrusive_ptr<DocPicture> olePicture, OleObjectType type) = 0;
			/*
			<summary>
		        Appends the OLE object.
		    </summary>
		    <param name="oleBytes">The OLE bytes.</param>
		    <param name="olePicture">The OLE picture.</param>
		    <returns></returns>
			*/
			//virtual intrusive_ptr<DocOleObject> AppendOleObject (std::vector<System.Byte> oleBytes,intrusive_ptr<DocPicture> olePicture,OleObjectType type)=0;
			/*
			<summary>
		        Appends the OLE object.
		    </summary>
		    <param name="pathToFile">The path to file.</param>
		    <param name="olePicture">The OLE picture.</param>
		    <param name="oleObjectFileType">Type of the OLE object file.</param>
		    <returns></returns>
			*/
			virtual intrusive_ptr<DocOleObject> AppendOleObject(LPCWSTR_S pathToFile, intrusive_ptr<DocPicture> olePicture, OleObjectType type) = 0;
			/*
            <summary>
		        Appends the OLE object.
		    </summary>
		    <param name="pathToFile">The path to file.</param>
		    <param name="olePicture">The OLE picture.</param>
		    <returns></returns>
			*/
			virtual intrusive_ptr<DocOleObject> AppendOleObject(LPCWSTR_S pathToFile, intrusive_ptr<DocPicture> olePicture) = 0;
			/*
			<summary>
		        Appends the OLE object into paragraph.
		    </summary>
		    <param name="oleStorage">The OLE storage.</param>
		    <param name="olePicture">The OLE picture.</param>
		    <param name="oleLinkType">The type of OLE object link type.</param>
		    <param name="oleLinkType"></param>
		    <returns></returns>
			*/
			virtual intrusive_ptr<DocOleObject> AppendOleObject(intrusive_ptr<Stream> stream, intrusive_ptr<DocPicture> pic, OleLinkType oleLinkType) = 0;
			/*
			<summary>
		        Appends the OLE object.
		    </summary>
		    <param name="oleBytes">The OLE storage bytes.</param>
		    <param name="olePicture">The OLE picture.</param>
		    <param name="oleLinkType">Type of the OLE link.</param>
		    <returns></returns>
			*/
			//virtual intrusive_ptr<DocOleObject> AppendOleObject (std::vector<System.Byte> oleBytes,intrusive_ptr<DocPicture> olePicture,OleLinkType oleLinkType)=0;
			/*
			<summary>
		        Appends the package OLE object (ole object without specified type).
		    </summary>
		    <param name="oleBytes">The OLE object bytes.</param>
		    <param name="olePicture">The OLE picture.</param>
		    <param name="fileExtension">The file extension.</param>
		    <returns></returns>
			*/
			//virtual intrusive_ptr<DocOleObject> AppendOleObject (std::vector<System.Byte> oleBytes,intrusive_ptr<DocPicture> olePicture,LPCWSTR_S fileExtension)=0;
			/*
			<summary>
		        Appends the package OLE object (ole object without specified type).
		    </summary>
		    <param name="oleStream">The OLE file stream.</param>
		    <param name="olePicture">The OLE picture.</param>
		    <param name="fileExtension">The file extension.</param>
		    <returns></returns>
			*/
			virtual intrusive_ptr<DocOleObject> AppendOleObject(intrusive_ptr<Stream> oleStream, intrusive_ptr<DocPicture> olePicture, LPCWSTR_S fileExtension) = 0;
		private:
		};
	}
}