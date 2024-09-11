#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IDocumentObject.h"
#include "ICompositeObject.h"
#include "IBodyRegion.h"
#include "BodyRegion.h"
#include "IStyleHolder.h"
#include "IParagraph.h"
#include "ShapeType.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
		<summary>
	        Represents a paragraph of text.
	    </summary>
		*/
		class EXPORTS Paragraph : public virtual BodyRegion, public virtual IDocumentObject, public virtual IBodyRegion, public virtual IParagraph, public virtual IStyleHolder, public virtual ICompositeObject
		{
			friend class Object;
		public:
			Paragraph(intrusive_ptr<IDocument> doc);
			intrusive_ptr<Document> GetDocument();
			/*

			*/
			intrusive_ptr<Section> GetParentSection();
			/*

			*/
			virtual intrusive_ptr<TextSelection> Find (intrusive_ptr<Regex> pattern);
			/*

			*/
			intrusive_ptr<TextSelection> Find(LPCWSTR_S given, bool caseSensitive, bool wholeWord);
			/*

			*/
			virtual int Replace (intrusive_ptr<Regex> pattern,LPCWSTR_S replace);
			/*

			*/
			virtual int Replace(LPCWSTR_S given, LPCWSTR_S replace, bool caseSensitive, bool wholeWord);
			/*

			*/
			virtual int Replace (intrusive_ptr<Regex> pattern,intrusive_ptr<TextSelection> textSelection);
			/*

			*/
			virtual int Replace (intrusive_ptr<Regex> pattern,intrusive_ptr<TextSelection> textSelection,bool saveFormatting);
			/*

			*/
			virtual int Replace(LPCWSTR_S given, intrusive_ptr<TextSelection> textSelection, bool caseSensitive, bool wholeWord);
			/*

			*/
			int Replace(LPCWSTR_S given, intrusive_ptr<TextSelection> textSelection, bool caseSensitive, bool wholeWord, bool saveFormatting);
			/*
			<summary>
				Inserts the section break.
			</summary>
			*/
			intrusive_ptr<Section> InsertSectionBreak();
			/*
			<summary>
				Inserts the section break.
			</summary>
			<param name="breakType">Type of the break.</param>
			*/
			intrusive_ptr<Section> InsertSectionBreak(SectionBreakType breakType);
			/*

			*/
			//void UpdateWordCount (std::vector<System.Char> splitchar,bool includeTbFnEn);
			/*
			<summary>
				Updates the list value.
					The value of the list number is obtained by dynamic calculation.
					The value of the list number of the paragraph directly may be incorrect.
					To obtain the correct value, you need to traverse all paragraphs in the document.
			</summary>
			<returns>the value string.</returns>
			*/
			LPCWSTR_S UpdateListValue();
			/*
			<summary>
				Gets the list format for apply style.
			</summary>
			<returns>the list format.</returns>
			*/
			intrusive_ptr<ListFormat> GetListFormatForApplyStyle();
			/*

			*/
			virtual int GetIndex(intrusive_ptr<IDocumentObject> entity);
			/*
			<summary>
				Gets the list text.
					The value of the list number is obtained by dynamic calculation.
					The value of the list number of the paragraph directly may be incorrect.
					To obtain the correct value, you need to traverse all paragraphs in the document.
			</summary>
			*/
			LPCWSTR_S GetListText();
			/*
			<summary>
				Gets the type of the document object.
			</summary>
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
				Gets paragraph style name.
			</summary>
		    <value></value>
			*/
			virtual LPCWSTR_S GetStyleName();
			/*
			<summary>
				Returns paragraph text.
			</summary>
		    <value></value>
		    <remarks>All internal formatting will be cleared when new text is set.</remarks>
			*/
			virtual LPCWSTR_S GetText();
			/*
			<summary>
				Sets paragraph text.
			</summary>
			<value></value>
			<remarks>All internal formatting will be cleared when new text is set.</remarks>
			*/
			virtual void SetText(LPCWSTR_S value);
			/*
			<summary>
				Gets paragraph item by index.
			</summary>
		    <value></value>
			*/
			virtual intrusive_ptr<ParagraphBase> GetItem(int index);
			/*
			<summary>
				Gets paragraph items.
			</summary>
		    <value>The items.</value>
			*/
			virtual intrusive_ptr<ParagraphItemCollection> GetItems();
			/*
			<summary>
				Gets paragraph format.
			</summary>
		    <value></value>
			*/
			virtual intrusive_ptr<ParagraphFormat> GetFormat();
			/*
			<summary>
				Gets character format for the break symbol.
			</summary>
		    <value></value>
			*/
			virtual intrusive_ptr<CharacterFormat> GetBreakCharacterFormat();
			/*
			<summary>
				Gets format of the list for the paragraph.
			</summary>
			*/
			virtual intrusive_ptr<ListFormat> GetListFormat();
			/*
			<summary>
				Gets a value indicating whether this paragraph is in cell.
			</summary>
		    <value>
				if this paragraph is in cell, set to <c>true</c>.
			</value>
			*/
			virtual bool GetIsInCell();
			/*
			<summary>
				Gets a value indicating whether this paragraph is end of section.
			</summary>
		    <value>
				if this paragraph is end of section, set to <c>true</c>.
			</value>
			*/
			virtual bool GetIsEndOfSection();
			/*

			*/
			bool GetIsEndOfHeaderFooter();
			/*
			<summary>
				Gets a value indicating whether this paragraph is end of document.
			</summary>
		    <value>
				if this instance is end of document, set to <c>true</c>.
			</value>
			*/
			virtual bool GetIsEndOfDocument();
			/*

			*/
			int GetWordCount();
			/*

			*/
			int GetCharCount();
			/*

			*/
			int GetCharCountIncludeSpace();
			/*

			*/
			virtual void ApplyStyle(LPCWSTR_S styleName);
			/*

			*/
			virtual void ApplyStyle(BuiltinStyle builtinStyle);
			/*

			*/
			void ApplyStyle(intrusive_ptr<IParagraphStyle> style);
			/*

			*/
			virtual intrusive_ptr<ParagraphStyle> GetStyle();
			/*

			*/
			virtual void RemoveAbsPosition();
			/*
			<summary>
				Appends text to end of document.
			</summary>
			<param name="text"></param>
			<returns></returns>
			*/
			virtual intrusive_ptr<TextRange> AppendText(LPCWSTR_S text);
			/*
			<summary>
				Appends image to end of paragraph.
			</summary>
			<returns></returns>
			*/
			virtual intrusive_ptr<DocPicture> AppendPicture(std::vector<intrusive_ptr<Byte>> imageBytes);
			/*
			<summary>
				Appends the field.
			</summary>
			<returns></returns>
			*/
			virtual intrusive_ptr<Field> AppendField(LPCWSTR_S fieldName, FieldType fieldType);
			/*
			<summary>
				Appends the field mark.
			</summary>
			<param name="type">The type.</param>
			*/
			intrusive_ptr<FieldMark> AppendFieldMark(FieldMarkType type);
			/*
			<summary>
				Appends the hyperlink.
			</summary>
			<param name="link">The link.</param>
			<param name="text">The text to display.</param>
			<param name="type">The hyperlink type.</param>
			<returns></returns>
			*/
			virtual intrusive_ptr<Field> AppendHyperlink(LPCWSTR_S link, LPCWSTR_S text, HyperlinkType type);
			/*
			<summary>
				Appends the hyperlink.
			</summary>
			<param name="link">The link.</param>
			<param name="picture">The picture to display.</param>
			<param name="type">The type of hyperlink.</param>
			<returns></returns>
			*/
			virtual intrusive_ptr<Field> AppendHyperlink(LPCWSTR_S link, intrusive_ptr<DocPicture> picture, HyperlinkType type);
			/*
			<summary>
				Appends start of the bookmark with specified name into paragraph.
			</summary>
			*/
			virtual intrusive_ptr<BookmarkStart> AppendBookmarkStart(LPCWSTR_S name);
			/*
			<summary>
				Appends end of the bookmark with specified name into paragraph.
			</summary>
			*/
			virtual intrusive_ptr<BookmarkEnd> AppendBookmarkEnd(LPCWSTR_S name);
			/*
			<summary>
				Appends start of the permission with specified id into paragraph.
			</summary>
			*/
			intrusive_ptr<PermissionStart> AppendPermStart(LPCWSTR_S id);
			/*
			<summary>
				Appends end of the permission with specified id into paragraph.
			</summary>
			*/
			intrusive_ptr<PermissionEnd> AppendPermEnd(LPCWSTR_S id);
			/*
			<summary>
				Appends the comment.
			</summary>
			<param name="text">The string.</param>
			<returns>Returns WComment.</returns>
			*/
			virtual intrusive_ptr<Comment> AppendComment(LPCWSTR_S text);
			/*
			<summary>
				Appends the comment mark.
			</summary>
			<param name="type">The type.</param>
			<returns>Returns CommentMark.</returns>
			*/
			intrusive_ptr<CommentMark> AppendCommentMark(CommentMarkType type);
			/*
			<summary>
				Appends the footnote.
			</summary>
			<param name="type">The type.</param>
			<returns>returns the footnotes.</returns>
			*/
			virtual intrusive_ptr<Footnote> AppendFootnote(FootnoteType type);
			/*
			<summary>
				Appends the footnote.
			</summary>
			<param name="type">The type.</param>
			<param name="bIsAutoNumbered">Is auto numbered.</param>
			<returns></returns>
			*/
			intrusive_ptr<Footnote> AppendFootnote(FootnoteType type, bool bIsAutoNumbered);
			/*
			<summary>
				Append Textbox to the end of the paragraph
			</summary>
			<param name="width">Textbox width</param>
			<param name="height">Textbox height</param>
			<returns></returns>
			*/
			virtual intrusive_ptr<TextBox> AppendTextBox(float width, float height);
			/*
			<summary>
				Appends the check box form field.
			</summary>
			<returns></returns>
			*/
			virtual intrusive_ptr<CheckBoxFormField> AppendCheckBox();
			/*
			<summary>
				Appends the check box.
			</summary>
			<param name="checkBoxName">Name of the check box.</param>
			<param name="defaultCheckBoxValue">Default checkbox value</param>
			<returns></returns>
			*/
			virtual intrusive_ptr<CheckBoxFormField> AppendCheckBox(LPCWSTR_S checkBoxName, bool defaultCheckBoxValue);
			/*
			<summary>
				Appends the text form field.
			</summary>
			<param name="defaultText">The default text. Pass "null" to insert default Word text</param>
			<returns></returns>
			*/
			virtual intrusive_ptr<TextFormField> AppendTextFormField(LPCWSTR_S defaultText);
			/*
			<summary>
				Appends the text form field.
			</summary>
			<param name="formFieldName">Name of the form field.</param>
			<param name="defaultText">The default text. Pass "null" to insert default Word text</param>
			<returns></returns>
			*/
			virtual intrusive_ptr<TextFormField> AppendTextFormField(LPCWSTR_S formFieldName, LPCWSTR_S defaultText);
			/*
			<summary>
				Appends the drop down form field.
			</summary>
			<returns></returns>
			*/
			virtual intrusive_ptr<DropDownFormField> AppendDropDownFormField();
			/*
			<summary>
				Appends the drop down form field.
			</summary>
			<param name="dropDropDownName">Name of the drop drop down.</param>
			<returns></returns>
			*/
			virtual intrusive_ptr<DropDownFormField> AppendDropDownFormField(LPCWSTR_S dropDropDownName);
			/*
			<summary>
				Appends special symbol to end of paragraph.
			</summary>
			<param name="characterCode">The character code.</param>
			<returns></returns>
			*/
			virtual intrusive_ptr<Symbol> AppendSymbol(byte characterCode);
			/*
			<summary>
				Append Shape to the end of the paragraph.
			</summary>
			<param name="width">Shape width</param>
			<param name="height">Shape height</param>
			<param name="shapeType">Shape type</param>
			<returns></returns>
			*/
			intrusive_ptr<ShapeObject> AppendShape(float width, float height, ShapeType shapeType);
			/*
			<summary>
				Append Horizonal Line to the end of the paragraph.
			</summary>
			*/
			intrusive_ptr<ShapeObject> AppendHorizonalLine();
			/*
			<summary>
				Append shape Group to the end of the paragraph.
			</summary>
			<param name="width">The width.</param>
			<param name="height">The height.</param>
			<returns></returns>
			*/
			intrusive_ptr<ShapeGroup> AppendShapeGroup(float width, float height);
			/*
			<summary>
				Appends break to end of paragraph.
			</summary>
			<param name="breakType">The break type.</param>
			<returns></returns>
			*/
			virtual intrusive_ptr<Break> AppendBreak(BreakType breakType);
			/*
			<summary>
				Appends the table of content.
			</summary>
			<param name="lowerLevel">The starting heading level of the table of content.</param>
			<param name="upperLevel">The ending heading level of the table of content.</param>
			<returns></returns>
			*/
			virtual intrusive_ptr<TableOfContent> AppendTOC(int lowerLevel, int upperLevel);
			/*
			<summary>
				Appends the picture.
			</summary>
			<param name="imgFile">The img file.</param>
			<returns>DocPicture.</returns>
			*/
			intrusive_ptr<DocPicture> AppendPicture(LPCWSTR_S imgFile);
			/*
			<summary>
				Appends the picture.
			</summary>
			<param name="imgStream">The img stream.</param>
			<returns>DocPicture.</returns>
			*/
			intrusive_ptr<DocPicture> AppendPicture(intrusive_ptr<Stream> imgStream);
			/*
			<summary>
				Appends the HTML.
			</summary>
			<param name="html">The HTML.</param>
			*/
			virtual void AppendHTML(LPCWSTR_S html);
			/*
			<summary>
				Appends the RTF.
			</summary>
			<param name="rtfcode">the RTF code.</param>
			<param name="addtolastsection">When is true, added to the last section of the document.</param>
			*/
			void AppendRTF(LPCWSTR_S rtfcode, bool addtolastsection);
			/*
			<summary>
				Appends the RTF.
			</summary>
			<param name="rtfCode">The RTF code.</param>
			*/
			void AppendRTF(LPCWSTR_S rtfCode);
			/*
			<summary>
				Appends the OLE object.
			</summary>
			<param name="oleStorage">The OLE object (file) stream.</param>
			<param name="olePicture">The OLE picture.</param>
			<param name="type">The type of OLE object.</param>
			<returns></returns>
			*/
			virtual intrusive_ptr<DocOleObject> AppendOleObject(intrusive_ptr<Stream> oleStream, intrusive_ptr<DocPicture> olePicture, OleObjectType type);
			/*
			<summary>
				Appends the OLE object into paragraph.
			</summary>
			<param name="oleBytes">The OLE object (file) bytes.</param>
			<param name="olePicture">The OLE picture.</param>
			<param name="type">The type of OLE object.</param>
			<returns></returns>
			*/
			//virtual intrusive_ptr<DocOleObject> AppendOleObject (std::vector<System.Byte> oleBytes,intrusive_ptr<DocPicture> olePicture,OleObjectType type);
			/*
			<summary>
				Appends the OLE object into paragraph.
			</summary>
			<param name="progId">The programmatic identifier.</param>
			<param name="clsId">The class identifier.</param>
			<param name="nativeData">The native data of embedded OLE object.</param>
			<param name="olePicture">The OLE picture.</param>
			<returns></returns>
			*/
			//intrusive_ptr<DocOleObject> AppendOleObject (LPCWSTR_S progId,LPCWSTR_S clsId,std::vector<System.Byte> nativeData,intrusive_ptr<DocPicture> olePicture);
			/*
			<summary>
				Appends the OLE object into paragraph.
			</summary>
			<param name="pathToFile">The path to file.</param>
			<param name="olePicture">The OLE picture.</param>
			<param name="type">The type of OLE object.</param>
			<returns></returns>
			*/
			virtual intrusive_ptr<DocOleObject> AppendOleObject(LPCWSTR_S pathToFile, intrusive_ptr<DocPicture> olePicture, OleObjectType type);
			/*
			<summary>
				Appends the OLE object.
			</summary>
			<param name="pathToFile">The path to file.</param>
			<param name="olePicture">The OLE picture.</param>
			<returns></returns>
			*/
			virtual intrusive_ptr<DocOleObject> AppendOleObject(LPCWSTR_S pathToFile, intrusive_ptr<DocPicture> olePicture);
			/*
			<summary>
				Appends the OLE object into paragraph.
			</summary>
			<param name="oleStorage">The OLE storage.</param>
			<param name="olePicture">The OLE picture.</param>
			<param name="oleLinkType">The type of OLE object link type.</param>
			<returns></returns>
			*/
			virtual intrusive_ptr<DocOleObject> AppendOleObject(intrusive_ptr<Stream> oleStream, intrusive_ptr<DocPicture> olePicture, OleLinkType oleLinkType);
			/*
			<summary>
				Appends the OLE object.
			</summary>
			<param name="oleBytes">The OLE storage bytes.</param>
			<param name="olePicture">The OLE picture.</param>
			<param name="oleLinkType">Type of the OLE link.</param>
			<returns></returns>
			*/
			//virtual intrusive_ptr<DocOleObject> AppendOleObject (std::vector<System.Byte> oleBytes,intrusive_ptr<DocPicture> olePicture,OleLinkType oleLinkType);
			/*
			<summary>
				Appends the OLE object.
			</summary>
			<param name="linkFile">The link file. </param>
			<param name="olePicture">The OLE picture.</param>
			<param name="oleLinkType">Type of the OLE link.</param>
			<returns></returns>
			*/
			intrusive_ptr<DocOleObject> AppendOleObject(LPCWSTR_S linkFile, intrusive_ptr<DocPicture> olePicture, OleLinkType oleLinkType);
			/*
			<summary>
				Appends the package OLE object (ole object without specified type).
			</summary>
			<param name="oleBytes">The OLE object bytes.</param>
			<param name="olePicture">The OLE picture.</param>
			<param name="fileExtension">The file extension.</param>
			<returns></returns>
			*/
			//virtual intrusive_ptr<DocOleObject> AppendOleObject (std::vector<System.Byte> oleBytes,intrusive_ptr<DocPicture> olePicture,LPCWSTR_S fileExtension);
			/*
			<summary>
				Appends the package OLE object (ole object without specified type).
			</summary>
			<param name="oleStream">The OLE file stream.</param>
			<param name="olePicture">The OLE picture.</param>
			<param name="fileExtension">The file extension.</param>
			<returns></returns>
			*/
			virtual intrusive_ptr<DocOleObject> AppendOleObject(intrusive_ptr<Stream> oleStream, intrusive_ptr<DocPicture> olePicture, LPCWSTR_S fileExtension);
			/*
			<summary>
				Remove a frame.
			</summary>
			*/
			void RemoveFrame();
		protected:
			Paragraph();
		private:
			intrusive_ptr<Field> CreateObjectByTypeName(IntPtrWithTypeName intPtrWithTypeName, Object* pParent);
		};
	}
}