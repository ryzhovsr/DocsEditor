#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IDocumentObject.h"
#include "ICompositeObject.h"
#include "CommentsCollection.h"
#include "TableOfContent.h"
#include "TextBoxCollection.h"
#include "BookmarkCollection.h"
#include "ListStyleCollection.h"
#include "StyleCollection.h"
#include "BuiltinDocumentProperties.h"
#include "CustomDocumentProperties.h"
#include "SectionCollection.h"
#include "Section.h"
#include "ProtectionType.h"
#include "ViewSetup.h"
#include "WatermarkBase.h"
#include "MailMerge.h"
#include "Background.h"
#include "VariableCollection.h"
#include "ParagraphStyle.h"
#include "ListType.h"
#include "ListStyle.h"
#include "ImageType.h"
#include "BuiltinStyle.h"
#include "TextSelection.h"
#include "FileFormat.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS IDocument : public virtual ICompositeObject, public virtual IDocumentObject
		{
		public:
			/*
			<summary>
			   Gets document's built-in properties.
			</summary>
			*/
			virtual intrusive_ptr<BuiltinDocumentProperties> GetBuiltinDocumentProperties() = 0;
			/*
			<summary>
			   Gets document's custom properties.
			</summary>
			*/
			virtual intrusive_ptr<CustomDocumentProperties> GetCustomDocumentProperties() = 0;
			/*
			<summary>
			   Gets collection of sections of this document.
			</summary>
			*/
			virtual intrusive_ptr<SectionCollection> GetSections() = 0;
			/*
			<summary>
			   Gets collection of styles.
			</summary>
			*/
			virtual intrusive_ptr<StyleCollection> GetStyles() = 0;
			/*
			<summary>
			   Gets collection of list styles.
			</summary>
			*/
			virtual intrusive_ptr<ListStyleCollection> GetListStyles() = 0;
			/*
			<summary>
			   Gets collection of bookmarks of the document
			</summary>
			*/
			virtual intrusive_ptr<BookmarkCollection> GetBookmarks() = 0;
			/*
			<summary>
			   Gets the textboxes of the document.
			</summary>
			*/
			virtual intrusive_ptr<TextBoxCollection> GetTextBoxes() = 0;
			/*
			<summary>
			   Gets the TOC element of the document.
			</summary>
			*/
			virtual intrusive_ptr<TableOfContent> GetTOC() = 0;
			/*
			<summary>
			   Sets the TOC element of the document.
			</summary>
			*/
			virtual void SetTOC(intrusive_ptr<TableOfContent> value) = 0;
			/*
			<summary>
			   Gets Collection of Comments of the document.
			</summary>
			*/
			virtual intrusive_ptr<CommentsCollection> GetComments() = 0;
			/*
			<summary>
			   Gets last section object.
			</summary>
			*/
			virtual intrusive_ptr<Section> GetLastSection() = 0;
			/*
			<summary>
			   Gets the last paragraph.
			</summary>
			<value>The last paragraph.</value>
			*/
			virtual intrusive_ptr<Paragraph> GetLastParagraph() = 0;
			/*
			<summary>
			   Gets the type of protection of the document.
			</summary>
			*/
			virtual ProtectionType GetProtectionType() = 0;
			/*
			<summary>
			   Sets the type of protection of the document.
			</summary>
			*/
			virtual void SetProtectionType(ProtectionType value) = 0;
			/*
			<summary>
			   Returns or setsview type in MSWord.
			</summary>
			*/
			virtual intrusive_ptr<ViewSetup> GetViewSetup() = 0;
			/*
			<summary>
			   Gets watermark for the document.
			</summary>
			*/
			virtual intrusive_ptr<WatermarkBase> GetWatermark() = 0;
			/*
			<summary>
			   Sets watermark for the document.
			</summary>
			*/
			virtual void SetWatermark(intrusive_ptr<WatermarkBase> value) = 0;
			/*
			<summary>
			   Gets mail merge engine.
			</summary>
			*/
			virtual intrusive_ptr<MailMerge> GetMailMerge() = 0;
			/*
			<summary>
			   Gets background for the document.
			</summary>
			*/
			virtual intrusive_ptr<Background> GetBackground() = 0;
			/*
			<summary>
			   Gets the document variables.
			</summary>
			<value>The variables.</value>
			*/
			virtual intrusive_ptr<VariableCollection> GetVariables() = 0;
			/*
			<summary>
			   Gets the document properties.
			</summary>
			<value>The properties.</value>
			*/
			/*virtual DocumentProperties* GetProperties() = 0;*/
			/*
			<summary>
			   Gets a value indicating whether the document has tracked changes.
			</summary>
			<value>
			   if the document has tracked changes, set to <c>true</c>.
			</value>
			*/
			virtual bool GetHasChanges() = 0;
			/*
			<summary>
			   Gets a value indicating whether to update fields in the document.
			   On the moment only DOCVARIABLE fields can be updated.
			</summary>
			<value>if update fields, set to <c>true</c>.</value>
			*/
			virtual bool GetIsUpdateFields() = 0;
			/*
			<summary>
			   Sets a value indicating whether to update fields in the document.
			   On the moment only DOCVARIABLE fields can be updated.
			</summary>
			<value>if update fields, set to <c>true</c>.</value>
			*/
			virtual void SetIsUpdateFields(bool value) = 0;
			/*
			<summary>
			   If the document contains no sections, creates one section
			   with one paragraph.
			</summary>
			*/
			virtual void CreateMinialDocument() = 0;
			/*
			<summary>
			   Adds new section to document.
			</summary>
			<returns></returns>
			*/
			virtual intrusive_ptr<Section> AddSection() = 0;
			/*
			<summary>
			   Adds new paragraph style to document.
			</summary>
			<param name="styleName">Paragraph style name</param>
			<returns></returns>
			*/
			virtual intrusive_ptr<ParagraphStyle> AddParagraphStyle(LPCWSTR_S styleName) = 0;
			/*
			<summary>
			   Adds new list style to document.
			</summary>
			<param name="listType">Type of the list style.</param>
			<param name="styleName">List style name</param>
			<returns></returns>
			*/
			virtual intrusive_ptr<ListStyle> AddListStyle(ListType listType, LPCWSTR_S styleName) = 0;
			/*
			<summary>
			   Gets the document's text.
			</summary>
			<returns></returns>
			*/
			virtual LPCWSTR_S GetText() = 0;
			/*
			 <summary>
				Converts the specified page into image
			</summary>
			<param name="pageIndex">Zero based page index</param>
			<param name="imageFormat">The ImageFormat</param>
			<returns>Returns the image as stream</returns>
			<remarks>Layouting of the pages is not exactly the same as the layouting made by MS-Word. The total number of pages and layouting of the elements may vary.</remarks>
			*/
			//virtual intrusive_ptr<Stream> SaveToImages(int pageIndex, intrusive_ptr<ImageFormat> imageFormat) = 0;
			/*
			<summary>
			   Creates the paragraph.
			</summary>
			<returns></returns>
			*/
			virtual intrusive_ptr<Paragraph> CreateParagraph() = 0;
			/*
			<summary>
			   Make deep copy of word document.
			</summary>
			<returns></returns>
			*/
			//virtual Document* Clone() = 0;
			/*
			<summary>
			   Adds the style to the document style.
			</summary>
			<param name="builtinStyle">The built-in style.</param>
			*/
			virtual intrusive_ptr<Style> AddStyle(BuiltinStyle builtinStyle) = 0;
			/*
			<summary>
			   Protects the document.
			</summary>
			<param name="type">The type of the protection.</param>
			*/
			virtual void Protect(ProtectionType type) = 0;
			/*
			<summary>
			   Protects the document.
			</summary>
			<param name="type">The type of the protection</param>
			<param name="password">The password used for protection.</param>
			*/
			virtual void Protect(ProtectionType type, LPCWSTR_S password) = 0;
			/*
			<summary>
			   Encrypts the document.
			</summary>
			<param name="password">The password.</param>
			*/
			virtual void Encrypt(LPCWSTR_S password) = 0;
			/*
			<summary>
			   Removes the encryption.
			</summary>
			*/
			virtual void RemoveEncryption() = 0;
			/*
			<summary>
			   Update Paragraphs count, Word count and Character count
			</summary>
			*/
			virtual void UpdateWordCount() = 0;
			/*
			<summary>
			   Finds and returns entry of specified regular expression along with formatting.
			</summary>
			<param name="pattern"></param>
			*/
			//virtual intrusive_ptr<TextSelection> FindPattern (System.Text.RegularExpressions.Regex pattern)=0;
			/*
			<summary>
			   Finds and returns entry of specified string along with formatting,
			   taking into consideration caseSensitive and wholeWord options.
			</summary>
			<param name="matchString"></param>
			<param name="caseSensitive"></param>
			<param name="wholeWord"></param>
			<returns></returns>
			*/
			virtual intrusive_ptr<TextSelection> FindString(LPCWSTR_S given, bool caseSensitive, bool wholeWord) = 0;
			/*
			<summary>
			   Finds the first entry of specified pattern in single-line mode.
			</summary>
			<param name="pattern">The pattern.</param>
			<returns></returns>
			*/
			//virtual std::vector<intrusive_ptr<TextSelection>> FindPatternInLine (System.Text.RegularExpressions.Regex pattern)=0;
			/*
			<summary>
			   Finds the first entry of matchString text in single-line mode.
			</summary>
			<param name="matchString">The string to find.</param>
			<param name="caseSensitive">if it specifies case sensitive, set to <c>true</c>.</param>
			<param name="wholeWord">if it specifies to search a whole word, set to <c>true</c>.</param>
			<returns></returns>
			*/
			virtual std::vector<intrusive_ptr<TextSelection>> FindStringInLine(LPCWSTR_S given, bool caseSensitive, bool wholeWord) = 0;
			/*
			<summary>
			   Finds and returns all entries of specified regular expression along with formatting.
			</summary>
			<param name="pattern"></param>
			*/
			//virtual std::vector<intrusive_ptr<TextSelection>> FindAllPattern (System.Text.RegularExpressions.Regex pattern)=0;
			/*
			<summary>
			   Finds and returns all entries of specified string along with formatting,
			   taking into consideration caseSensitive and wholeWord options.
			</summary>
			<param name="matchString"></param>
			<param name="caseSensitive"></param>
			<param name="wholeWord"></param>
			<returns></returns>
			*/
			virtual std::vector<intrusive_ptr<TextSelection>> FindAllString(LPCWSTR_S given, bool caseSensitive, bool wholeWord) = 0;
			/*
			<summary>
			   Replaces all occurrences of a character pattern specified
			   by a regular expression with newValue string.
			</summary>
			<param name="pattern"></param>
			<param name="newValue"></param>
			<returns></returns>
			*/
			//virtual int Replace (System.Text.RegularExpressions.Regex pattern,LPCWSTR_S replace)=0;
			/*
			<summary>
			   Replaces all entries of matchString string with newValue string, taking into
			   consideration caseSensitive and wholeWord options.
			</summary>
			<param name="matchString"></param>
			<param name="newValue"></param>
			<param name="caseSensitive"></param>
			<param name="wholeWord"></param>
			*/
			virtual int Replace(LPCWSTR_S given, LPCWSTR_S replace, bool caseSensitive, bool wholeWord) = 0;
			/*
			<summary>
			   Replaces all entries of matchString regular expression with TextRangesHolder.
			</summary>
			<param name="pattern">The pattern.</param>
			<param name="textSelection">The text selection.</param>
			*/
			//virtual int Replace (System.Text.RegularExpressions.Regex pattern,intrusive_ptr<TextSelection> textSelection)=0;
			/*
			<summary>
			   Replaces all entries of matchString string with TextSelection, taking into
			   consideration caseSensitive and wholeWord options.
			</summary>
			<param name="matchString">The matchString.</param>
			<param name="textSelection">The text selection.</param>
			<param name="caseSensitive">if it specifies case sensitive, set to <c>true</c>.</param>
			<param name="wholeWord">if it specifies to search whole word, set to <c>true</c>.</param>
			*/
			virtual int Replace(LPCWSTR_S given, intrusive_ptr<TextSelection> textSelection, bool caseSensitive, bool wholeWord) = 0;
			/*
			<summary>
			   Replaces all entries of matchString text with newValue text in single-line mode.
			</summary>
			<param name="matchString">The matchString.</param>
			<param name="newValue">The newValue.</param>
			<param name="caseSensative">if it specifies case sensitive, set to <c>true</c>.</param>
			<param name="wholeWord">if it specifies whole word to be newValue, set to <c>true</c>.</param>
			<returns>The number of performed replaces.</returns>
			*/
			virtual int ReplaceInLine(LPCWSTR_S given, LPCWSTR_S replace, bool caseSensitive, bool wholeWord) = 0;
			/*
			<summary>
			   Replaces all entries with specified pattern with newValue text in single-line mode.
			</summary>
			<param name="pattern">The pattern.</param>
			<param name="newValue">The newValue.</param>
			<returns>The number of performed replaces.</returns>
			*/
			//virtual int ReplaceInLine (System.Text.RegularExpressions.Regex pattern,LPCWSTR_S replace)=0;
			/*
			<summary>
			   Replaces the matchString text with matchSelection in single-line mode.
			</summary>
			<param name="matchString">The matchString.</param>
			<param name="matchSelection">The matchSelection.</param>
			<param name="caseSensitive">if it specifies case sensitive newValue, set to <c>true</c>.</param>
			<param name="wholeWord">if it specifies whole word to be newValue, set to <c>true</c>.</param>
			<returns>The number of performed replaces.</returns>
			*/
			virtual int ReplaceInLine(LPCWSTR_S given, intrusive_ptr<TextSelection> replacement, bool caseSensitive, bool wholeWord) = 0;
			/*
			<summary>
			   Replaces the matchString pattern with matchSelection in single-line mode.
			</summary>
			<param name="pattern">The pattern.</param>
			<param name="matchSelection">The matchSelection.</param>
			<returns>The number of performed replaces.</returns>
			*/
			//virtual int ReplaceInLine (System.Text.RegularExpressions.Regex pattern,intrusive_ptr<TextSelection> replacement)=0;
			/*
			<summary>
			   Finds the next entry of matchString string, taking into consideration caseSensitive
			   and wholeWord options.
			</summary>
			<param name="start">The text body item at which search starts (paragraph or table).</param>
			<param name="matchString">The string to find.</param>
			<param name="caseSensitive">if it specifies case sensitive search, set to <c>true</c>.</param>
			<param name="wholeWord">if it specifies whole word to be search, set to <c>true</c>.</param>
			<returns></returns>
			*/
			virtual intrusive_ptr<TextSelection> FindString(intrusive_ptr<BodyRegion> startTextBodyItem, LPCWSTR_S given, bool caseSensitive, bool wholeWord) = 0;
			/*
			<summary>
			   Finds the next entry of matchString pattern.
			</summary>
			<param name="start">The start body item at which search starts (paragraph or table).</param>
			<param name="pattern">The pattern.</param>
			<returns></returns>
			*/
			//virtual intrusive_ptr<TextSelection> FindPattern (intrusive_ptr<BodyRegion> startBodyItem,System.Text.RegularExpressions.Regex pattern)=0;
			/*
			<summary>
			   Finds the next matchString text starting from specified.
			   BodyRegion using single-line mode.
			</summary>
			<param name="start">The start text body item.</param>
			<param name="matchString">The matchString.</param>
			<param name="caseSensitive">if it specifies case sensitive search, set to <c>true</c> .</param>
			<param name="wholeWord">if it specifies whole word to be search, set to <c>true</c>.</param>
			<returns></returns>
			*/
			virtual std::vector<intrusive_ptr<TextSelection>> FindStringInLine(intrusive_ptr<BodyRegion> startTextBodyItem, LPCWSTR_S given, bool caseSensitive, bool wholeWord) = 0;
			/*
			<summary>
			   Finds the next text which fit the specified pattern starting from start BodyRegion
			   using single-line mode.
			</summary>
			<param name="start">The start body item.</param>
			<param name="pattern">The pattern.</param>
			<returns></returns>
			*/
			//virtual std::vector<intrusive_ptr<TextSelection>> FindPatternInLine (intrusive_ptr<BodyRegion> startBodyItem,System.Text.RegularExpressions.Regex pattern)=0;
			/*
			<summary>
			   Resets the FindPattern.
			</summary>
			*/
			virtual void ResetFindState() = 0;
			/*
			<summary>
			   Opens the document from stream in Xml or Microsoft Word format.
			</summary>
			<param name="stream"></param>
			<param name="formatType"></param>
			*/
			virtual void LoadFromStream(intrusive_ptr<Stream> stream, FileFormat fileFormat) = 0;
			/*
			<summary>
			   Saves the document to a stream in Xml or Microsoft Word format.
			</summary>
			<param name="stream"></param>
			<param name="formatType"></param>
			*/
			virtual void SaveToFile(intrusive_ptr<Stream> stream, FileFormat fileFormat) = 0;
			/*
			<summary>
			   Opens the document from file in Microsoft Word format.
			</summary>
			<param name="fileName">File name</param>
			*/
			virtual void LoadFromFile(LPCWSTR_S fileName) = 0;
			/*
			<summary>
			   Opens the document from file in Xml or Microsoft Word format.
			</summary>
			<param name="fileName"></param>
			<param name="formatType"></param>
			*/
			virtual void LoadFromFile(LPCWSTR_S fileName, FileFormat fileFormat) = 0;
			/*
			<summary>
			   Streams the document to the client browser.
			</summary>
			<param name="fileName"></param>
			<param name="formatType"></param>
			<param name="response"></param>
			<param name="contentDisposotion"></param>
			*/
			//virtual void SaveToFile (LPCWSTR_S fileName,FileFormat fileFormat,System.Web.HttpResponse response,HttpContentType contentDisposotion)=0;
			/*
			<summary>
			   LoadFromStream new document in read-only mode.
			</summary>
			<param name="strFileName">File to open.</param>
			<param name="formatType">Type of the format.</param>
			*/
			virtual void LoadFromFileInReadMode(LPCWSTR_S strFileName, FileFormat fileFormat) = 0;
			/*
			<summary>
			   Saves the document to file in Microsoft Word format.
			</summary>
			<param name="fileName">File name</param>
			*/
			virtual void SaveToFile(LPCWSTR_S fileName) = 0;
			/*
			<summary>
			   Saves the document to file in Xml or Microsoft Word format.
			</summary>
			<param name="fileName">File name</param>
			<param name="formatType">Type of the format</param>
			*/
			virtual void SaveToFile(LPCWSTR_S fileName, FileFormat fileFormat) = 0;
			/*
			<summary>
			   Imports all content into the document.
			</summary>
			<param name="doc">The doc.</param>
			*/
			virtual void ImportContent(intrusive_ptr<IDocument> doc) = 0;
			/*
			<summary>
			   Imports all content into document.
			</summary>
			<param name="doc">The doc.</param>
			<param name="importStyles">If the document styles which have same names will be
			also imported to the destination document, set to <c>true</c>.</param>
			*/
			virtual void ImportContent(intrusive_ptr<IDocument> doc, bool importStyles) = 0;
		private:
		};
	}
}