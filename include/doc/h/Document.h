#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IDocumentObject.h"
#include "ICompositeObject.h"
#include "DocumentContainer.h"
#include "IDocument.h"
#include "PrivateFontPath.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS Document : public virtual DocumentContainer, public virtual IDocumentObject, public virtual IDocument, public virtual ICompositeObject
		{
		public:
			Document(intrusive_ptr<Stream> stream, LPCWSTR_S password, bool useNewEngine);

			Document(intrusive_ptr<Stream> stream, FileFormat type, LPCWSTR_S password);

			Document(intrusive_ptr<Stream> stream, FileFormat type, LPCWSTR_S password, bool useNewEngine);

			Document(LPCWSTR_S fileName);

			Document(LPCWSTR_S fileName, bool useNewEngine);

			Document(LPCWSTR_S fileName, LPCWSTR_S password);

			Document(LPCWSTR_S fileName, LPCWSTR_S password, bool useNewEngine);

			Document(LPCWSTR_S fileName, FileFormat type);

			Document(LPCWSTR_S fileName, FileFormat type, bool useNewEngine);

			Document(LPCWSTR_S fileName, FileFormat type, XHTMLValidationType validationType);

			Document(LPCWSTR_S fileName, FileFormat type, XHTMLValidationType validationType, bool useNewEngine);

			Document(LPCWSTR_S fileName, FileFormat type, LPCWSTR_S password);

			Document(LPCWSTR_S fileName, FileFormat type, LPCWSTR_S password, bool useNewEngine);

			Document(intrusive_ptr<Stream> stream, FileFormat type, XHTMLValidationType validationType);

			Document(intrusive_ptr<Stream> stream, FileFormat type, XHTMLValidationType validationType, bool useNewEngine);

			Document();

			Document(bool useNewEngine);

			Document(intrusive_ptr<Stream> stream);

			Document(intrusive_ptr<Stream> stream, bool useNewEngine);

			Document(intrusive_ptr<Stream> stream, FileFormat type);

			Document(intrusive_ptr<Stream> stream, FileFormat type, bool useNewEngine);

			Document(intrusive_ptr<Stream> stream, LPCWSTR_S password);
			/*
			<summary>
				Removes the macros from the document.
			</summary>
			*/
			void ClearMacros();
			/*
			<summary>
				Sets date and time of the unit test.
				For unit testing use only.
			</summary>
			<param name="dateTime">The date and time used in the test document.</param>
			*/
			void SetDateTimeOfUnitTest(intrusive_ptr<DateTime> dateTime);
			/*
			<summary>
				Reset the page layout cache data of the new engine.
			</summary>
			*/
			void ResetPageLayoutCache();
			/*

			*/
			FileFormat GetOriginalFileFormat();
			/*
			<summary>
				Saves the SVG.
			</summary>
			<param name="fileName">The file name.</param>
			*/
			void SaveToSVG(LPCWSTR_S fileName);
			/*
			<summary>
				Saves the SVG.
			</summary>
			*/
			//System.Collections.Generic.Queue`1[[System.Byte[], mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] SaveToSVG ();
			/*
			<summary>
				Saves the document in Spire.Online format.
			</summary>
			<param name="fileName">Spire.Online file path</param>
			<returns>Save Success: true; Failed: false</returns>
			*/
			bool SaveToOnlineBin(LPCWSTR_S fileName);
			
			/*
			<summary>
	            Save the specified range of pages as image return streams. 
	            The default is PNG format image.
	        </summary>
	        <param name="pageIndex">Index of the page.</param>
	        <param name="pageCount">The page count.</param>
	        <param name="type">The type.</param>
	        <returns>std::vector<Stream>.</returns>
			*/
			std::vector<intrusive_ptr<Stream>> SaveImageToStreams(int pageIndex, int pageCount, ImageType type);
			/*
			<summary>
	            Save the specified page as image return stream.
	            The default is PNG format image.
	        </summary>
	        <param name="pageIndex">Index of the page.</param>
	        <param name="type">The type.</param>
	        <returns>Stream.</returns>
	        */
			intrusive_ptr<Stream> SaveImageToStreams(int pageIndex, ImageType type);
			/*
			<summary>
	            Save the specified page as image return streams.
	            The default is PNG format image.
	        </summary>
	        <param name="type">The type.</param>
	        <returns>std::vector<Stream>.</returns>
	        */
			std::vector<intrusive_ptr<Stream>> SaveImageToStreams(ImageType type);
			/*
			<summary>
				Saves the document into stream.
			</summary>
			<param name="stream">The stream.</param>
			<param name="paramList"></param>
			*/
			void SaveToStream(intrusive_ptr<Stream> stream, intrusive_ptr<ToPdfParameterList> paramList);
			/*
			<summary>
				Opens the HTML document from stream .
			</summary>
			<param name="stream">The stream.</param>
			<param name="formatType">Type of the format.</param>
			<param name="validationType">Type of the validation.</param>
			*/
			void LoadFromStream(intrusive_ptr<Stream> stream, FileFormat fileFormat, XHTMLValidationType validationType);
			/*
			<summary>
				Opens the document from stream in Xml or Microsoft Word format.
			</summary>
			<param name="stream"></param>
			<param name="formatType"></param>
			*/
			virtual void LoadFromStream(intrusive_ptr<Stream> stream, FileFormat fileFormat);
			/*
			<summary>
				Opens the document from stream in Xml or Microsoft Word format.
			</summary>
			<param name="stream">The stream.</param>
			<param name="formatType">Type of the format.</param>
			<param name="password">The password.</param>
			*/
			void LoadFromStream(intrusive_ptr<Stream> stream, FileFormat fileFormat, LPCWSTR_S password);
			/*
			<summary>
				Saves document to stream and digitally sign, Only DOC and DOCX are supported.
			</summary>
			<param name="stream">The stream.</param>
			<param name="fileFormat">The file format.</param>
			<param name="certificatePath">Path to the file certificate</param>
			<param name="securePassword">Password of the certificate.</param>
			*/
			void SaveToStream(intrusive_ptr<Stream> stream, FileFormat fileFormat, LPCWSTR_S certificatePath, LPCWSTR_S securePassword);
			/*
			<summary>
				Saves document to stream and digitally sign, Only DOC and DOCX are supported.
			</summary>
			<param name="stream">The stream.</param>
			<param name="fileFormat">The file format.</param>
			<param name="certificateData">The certificate data.</param>
			<param name="securePassword">Password of the certificate.</param>
			*/
			//void SaveToStream (intrusive_ptr<Stream> stream,FileFormat fileFormat,std::vector<System.Byte> certificateData,LPCWSTR_S securePassword);
			/*
			<summary>
				Saves document to file and digitally sign, Only DOC and DOCX are supported.
			</summary>
			<param name="stream">The file.</param>
			<param name="fileFormat">The file format.</param>
			<param name="certificatePath">Path to the file certificate</param>
			<param name="securePassword">Password of the certificate.</param>
			*/
			void SaveToFile(LPCWSTR_S fileName, FileFormat fileFormat, LPCWSTR_S certificatePath, LPCWSTR_S securePassword);
			/*
			<summary>
				Saves document to file and digitally sign, Only DOC and DOCX are supported.
			</summary>
			<param name="stream">The file.</param>
			<param name="fileFormat">The file format.</param>
			<param name="certificateData">The certificate data.</param>
			<param name="securePassword">Password of the certificate.</param>
			*/
			//void SaveToFile(LPCWSTR_S fileName, FileFormat fileFormat, std::vector<System.Byte> certificateData, LPCWSTR_S securePassword);
			/*
			<summary>
				Saves the document into stream in Xml or Microsoft Word format.
			</summary>
			<param name="stream"></param>
			<param name="formatType"></param>
			*/
			void SaveToStream(intrusive_ptr<Stream> stream, FileFormat fileFormat);
			/*
			<summary>
				Saves the document into stream in Xml or Microsoft Word format.
			</summary>
			<param name="stream"></param>
			<param name="formatType"></param>
			*/
			virtual void SaveToFile(intrusive_ptr<Stream> stream, FileFormat fileFormat);
			/*
			<summary>
				Closes this instance.
			</summary>
			*/
			void Close();
			/*
			<summary>
				Prerforms application-defined tasks associated with freeing,releasing, or
				resetting unmanaged resources.
			</summary>
			*/
			virtual void Dispose();
			/*
			<summary>
				Finds and returns entry of specified regular expression along with formatting.
			</summary>
			<param name="pattern">regex pattern</param>
			<returns>Found text selection</returns>
			*/
			//virtual intrusive_ptr<TextSelection> FindPattern (System.Text.RegularExpressions.Regex pattern);
			/*
			<summary>
				Finds the first entry of specified pattern in single-line mode.
			</summary>
			<param name="pattern">The pattern.</param>
			<returns></returns>
			*/
			//virtual std::vector<intrusive_ptr<TextSelection>> FindPatternInLine (System.Text.RegularExpressions.Regex pattern);
			/*
			<summary>
				Finds and returns string along with formatting.
			</summary>
			<param name="matchString"></param>
			<param name="caseSensitive"></param>
			<param name="wholeWord"></param>
			<returns></returns>
			*/
			virtual intrusive_ptr<TextSelection> FindString(LPCWSTR_S stringValue, bool caseSensitive, bool wholeWord);
			/*
			<summary>
				Finds the first entry of matchString text in single-line mode.
			</summary>
			<param name="matchString">The string to find.</param>
			<param name="caseSensitive">if set to <c>true</c> use case sensitive search.</param>
			<param name="wholeWord">if it search the whole word, set to <c>true</c>.</param>
			<returns></returns>
			*/
			virtual std::vector<intrusive_ptr<TextSelection>> FindStringInLine(LPCWSTR_S given, bool caseSensitive, bool wholeWord);
			/*
			<summary>
				Returns all entries of matchString regex.
			</summary>
			<param name="pattern"></param>
			*/
			virtual std::vector<intrusive_ptr<TextSelection>> FindAllPattern(intrusive_ptr<Regex> pattern);
			/*
			<summary>
				Returns all entries of matchString regex.
			</summary>
			<param name="pattern"></param>
			<param name="isAdvancedSearch"></param>
			*/
			std::vector<intrusive_ptr<TextSelection>> FindAllPattern(intrusive_ptr<Regex> pattern, bool isAdvancedSearch);
			/*
			<summary>
				Returns all entries of matchString string, taking into consideration caseSensitive
				and wholeWord options.
			</summary>
			<param name="matchString"></param>
			<param name="caseSensitive"></param>
			<param name="wholeWord"></param>
			<returns></returns>
			*/
			virtual std::vector<intrusive_ptr<TextSelection>> FindAllString(LPCWSTR_S matchString, bool caseSensitive, bool wholeWord);
			/*
			<summary>
				Replaces all entries of matchString regular expression with newValue string.
			</summary>
			<param name="pattern"></param>
			<param name="newValue"></param>
			<returns></returns>
			*/
			virtual int Replace(intrusive_ptr<Regex> pattern, LPCWSTR_S replace);
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
			virtual int Replace(LPCWSTR_S matchString, LPCWSTR_S newValue, bool caseSensitive, bool wholeWord);
			/*
			<summary>
				Replaces all entries of matchString string with TextSelection, taking into
				consideration caseSensitive and wholeWord options.
			</summary>
			<param name="matchString">The matchString.</param>
			<param name="textSelection">The text selection.</param>
			<param name="caseSensitive">if it is case sensitive, set to <c>true</c>.</param>
			<param name="wholeWord">if it specifies whole word, set to <c>true</c>.</param>
			<returns></returns>
			*/
			virtual int Replace(LPCWSTR_S matchString, intrusive_ptr<TextSelection> textSelection, bool caseSensitive, bool wholeWord);
			/*
			<summary>
				Replaces all entries of matchString regular expression with TextRangesHolder.
			</summary>
			<param name="pattern">The pattern.</param>
			<param name="textSelection">The text selection.</param>
			<returns></returns>
			*/
			virtual int Replace(intrusive_ptr<Regex> pattern, intrusive_ptr<TextSelection> textSelection);
			/*
			<summary>
				clone Websettings to other document
			</summary>
			<param name="otherDoc">The other doc</param>
			<returns></returns>
			*/
			void CloneWebSettingsTo(intrusive_ptr<Document> destDoc);
			/*
			<summary>
				Replaces the specified matchString.
			</summary>
			<param name="matchString">The matchString.</param>
			<param name="matchDoc">The newValue doc.</param>
			<param name="caseSensitive">if it is case sensitive, set to <c>true</c>.</param>
			<param name="wholeWord">if specifies whole word,set to <c>true</c>.</param>
			<returns></returns>
			*/
			int Replace(LPCWSTR_S matchString, intrusive_ptr<IDocument> matchDoc, bool caseSensitive, bool wholeWord);
			/*
			<summary>
				Update Paragraphs count, Word count and Character count
			</summary>
			*/
			virtual void UpdateWordCount();
			/*
			<summary>
				Update Paragraphs count, Word count and Character count.
			</summary>
			<param name="splitchar">The word separator. </param>
			*/
			//void UpdateWordCount(std::vector<System.Char> splitchar);
			/*
			<summary>
				Update Paragraphs count, Word count and Character count.
			</summary>
			<param name="splitchar">The word separator.</param>
			<param name="includeTbFnEn">The include text boxes,footnotes and endnotes.</param>
			*/
			//void UpdateWordCount(std::vector<System.Char> splitchar, bool includeTbFnEn);
			/*
			<summary>
				Check that the password entered is the same as the permission protection password
			</summary>
			<param name="password">The enter password</param>
			<returns>whether the password entered is the same as the permission protection password</returns>
			*/
			bool checkProtectionPassWord(LPCWSTR_S password);
			/*
			<summary>
				Gets total number of pages for document.
			</summary>
			<returns></returns>
			*/
			int GetPageCount();
			/*
			<summary>
				Update Table of contents in the document.
			</summary>
			*/
			void UpdateTableOfContents();
			/*
			<summary>
				Update specified Table of content in the document.
			</summary>
			*/
			void UpdateTableOfContents(intrusive_ptr<TableOfContent> toc);
			/*
			<summary>
				Compares this document with another document.
			</summary>
			<param name="document">Document to compare</param>
			<param name="author">The author to use for revisions</param>
			*/
			void Compare(intrusive_ptr<Document> document, LPCWSTR_S author);
			/*
			<summary>
				Compares this document with another document.
			</summary>
			<param name="document">Document to compare</param>
			<param name="author">The author to use for revisions</param>
			<param name="options">The comparison parameter</param>
			*/
			void Compare(intrusive_ptr<Document> document, LPCWSTR_S author, intrusive_ptr<CompareOptions> options);
			/*
			<summary>
				Compares this document with another document.
			</summary>
			<param name="document">Document to compare</param>
			<param name="author">The author to use for revisions</param>
			<param name="dateTime">The date and time to use for revisions</param>
			*/
			void Compare(intrusive_ptr<Document> document, LPCWSTR_S author, intrusive_ptr<DateTime> dateTime);
			/*
			<summary>
				Compares this document with another document.
			</summary>
			<param name="document">Document to compare</param>
			<param name="author">The author to use for revisions</param>
			<param name="dateTime">The date and time to use for revisions</param>
			<param name="options">The comparison parameter</param>
			*/
			void Compare(intrusive_ptr<Document> document, LPCWSTR_S author, intrusive_ptr<DateTime> dateTime, intrusive_ptr<CompareOptions> options);
			/*
			<summary>
				Replaces all entries of matchString text with newValue text in single-line mode.
			</summary>
			<param name="matchString">The matchString.</param>
			<param name="newValue">The newValue.</param>
			<param name="caseSensative">if it specifies case sensative newValue, set to <c>true</c>.</param>
			<param name="wholeWord">if it specifies only whole word will be replaced, set to <c>true</c>.</param>
			<returns></returns>
			*/
			virtual int ReplaceInLine(LPCWSTR_S matchString, LPCWSTR_S newValue, bool caseSensitive, bool wholeWord);
			/*
			<summary>
				Replaces all entries with specified pattern with newValue text in single-line mode.
			</summary>
			<param name="pattern">The pattern.</param>
			<param name="newValue">The newValue.</param>
			<returns></returns>
			*/
			virtual int ReplaceInLine(intrusive_ptr<Regex> pattern, LPCWSTR_S newValue);
			/*
			<summary>
				Replaces the matchString text with matchSelection in single-line mode.
			</summary>
			<param name="matchString">The matchString.</param>
			<param name="matchSelection">The matchSelection.</param>
			<param name="caseSensitive">if it is case sensitive newValue, set to <c>true</c>.</param>
			<param name="wholeWord">if it replaces only whole word, set to <c>true</c>.</param>
			<returns></returns>
			*/
			virtual int ReplaceInLine(LPCWSTR_S matchString, intrusive_ptr<TextSelection> matchSelection, bool caseSensitive, bool wholeWord);
			/*
			<summary>
				Replaces the matchString pattern with matchSelection in single-line mode.
			</summary>
			<param name="pattern">The pattern.</param>
			<param name="matchSelection">The matchSelection.</param>
			<returns>The number of performed replaces.</returns>
			*/
			virtual int ReplaceInLine(intrusive_ptr<Regex> pattern, intrusive_ptr<TextSelection> matchSelection);
			/*
			<summary>
				Finds the next entry of matchString string, taking into consideration caseSensitive
				and wholeWord options.
			</summary>
			<param name="start">Search starts.</param>
			<param name="matchString">The string to find.</param>
			<param name="caseSensitive">if it specifies case sensitive search, set to <c>true</c> .</param>
			<param name="wholeWord">if it search for the whole word, set to <c>true</c> .</param>
			<returns></returns>
			*/
			virtual intrusive_ptr<TextSelection> FindString(intrusive_ptr<BodyRegion> start, LPCWSTR_S matchString, bool caseSensitive, bool wholeWord);
			/*
			<summary>
				Finds the next entry of matchString pattern.
			</summary>
			<param name="start">Search starts</param>
			<param name="pattern">The pattern.</param>
			<returns></returns>
			*/
			//virtual intrusive_ptr<TextSelection> FindPattern (intrusive_ptr<BodyRegion> start,System.Text.RegularExpressions.Regex pattern);
			/*
			<summary>
				Finds the next matchString text starting from specified using single-line mode.
			</summary>
			<param name="start">Search start.</param>
			<param name="matchString">The matchString.</param>
			<param name="caseSensitive">if it is case sensitive search, set to <c>true</c>.</param>
			<param name="wholeWord">if it search for whole word, set to <c>true</c> .</param>
			<returns></returns>
			*/
			virtual std::vector<intrusive_ptr<TextSelection>> FindStringInLine(intrusive_ptr<BodyRegion> start, LPCWSTR_S matchString, bool caseSensitive, bool wholeWord);
			/*
			<summary>
				Finds the text which fit the specified pattern starting from start.
				using single-line mode.
			</summary>
			<param name="start">Search start.</param>
			<param name="pattern">The pattern.</param>
			<returns></returns>
			*/
			//virtual std::vector<intrusive_ptr<TextSelection>> FindPatternInLine (intrusive_ptr<BodyRegion> start,System.Text.RegularExpressions.Regex pattern);
			/*
			<summary>
				Resets the FindPattern.
			</summary>
			*/
			virtual void ResetFindState();
			/*
			<summary>
				Creates new paragraph item instance.
			</summary>
			<param name="itemType">Paragraph item type</param>
			<returns></returns>
			*/
			intrusive_ptr<ParagraphBase> CreateParagraphItem(ParagraphItemType itemType);
			/*
			<summary>
				Creates the paragraph.
			</summary>
			<returns></returns>
			*/
			virtual intrusive_ptr<Paragraph> CreateParagraph();
			/*
			<summary>
				Create a minial document,  one empty section to the document and one empty paragraph to created section.
			</summary>
			*/
			virtual void CreateMinialDocument();
			/*
			<summary>
				Adds new section to document.
			</summary>
			<returns></returns>
			*/
			virtual intrusive_ptr<Section> AddSection();
			/*
			<summary>
				Adds new paragraph style to the document.
			</summary>
			<param name="styleName">Paragraph style name</param>
			<returns></returns>
			*/
			virtual intrusive_ptr<ParagraphStyle> AddParagraphStyle(LPCWSTR_S styleName);
			/*
			<summary>
				Adds new list style to document.
			</summary>
			<param name="listType">List type</param>
			<param name="styleName">Paragraph style name</param>
			<returns></returns>
			*/
			virtual intrusive_ptr<ListStyle> AddListStyle(ListType listType, LPCWSTR_S styleName);
			/*
			<summary>
				Gets the document's text.
			</summary>
			*/
			virtual LPCWSTR_S GetText();
			/*
			<summary>
				 Create digitally signed word document.
				 Digital signature of documents support only DOC and DOCX formats.
			</summary>
			<param name="sourceStream">Source file stream</param>
			<param name="certificatePath">Path to the file certificate</param>
			<param name="securePassword">Password of the certificate.</param>
			<returns>Bytes of signed word document </returns>
			*/
			//static std::vector<System.Byte> Sign(intrusive_ptr<Stream> sourceStream, LPCWSTR_S certificatePath, LPCWSTR_S securePassword);
			/*
			<summary>
				Create digitally signed word document.
				Digital signature of documents support only DOC and DOCX formats.
			</summary>
			<param name="sourceStream">Source file stream.</param>
			<param name="certificateData">the certificate data.</param>
			<param name="securePassword">Password of the certificate.</param>
			<returns>Bytes of signed word document</returns>
			*/
			//static std::vector<System.Byte> Sign(intrusive_ptr<Stream> sourceStream, std::vector<System.Byte> certificateData, LPCWSTR_S securePassword);
			/*
			<summary>
				Clones itself.
			</summary>
			<returns></returns>
			*/
			virtual intrusive_ptr<Document> CloneDocument();
			/*
			<summary>
				Clones the current document default style to the destination document.
			</summary>
			<param name="destDoc">The destination document.</param>
			*/
			void CloneDefaultStyleTo(intrusive_ptr<Document> destDoc);
			/*
			<summary>
				Clones the current document theme style to the destination document.
			</summary>
			<param name="destDoc">The destination document.</param>
			*/
			void CloneThemesTo(intrusive_ptr<Document> destDoc);
			/*
			<summary>
				Clones the current document compatibility to the destination document.
			</summary>
			<param name="destDoc">The destination document.</param>
			*/
			void CloneCompatibilityTo(intrusive_ptr<Document> destDoc);
			/*
			<summary>
				Imports section into document.
			</summary>
			<param name="section">The section.</param>
			*/
			void ImportSection(intrusive_ptr<ISection> section);
			/*
			<summary>
				Imports all content into the document.
			</summary>
			<param name="doc">The doc.</param>
			*/
			virtual void ImportContent(intrusive_ptr<IDocument> doc);
			/*
			<summary>
				Imports all content into document.
			</summary>
			<param name="doc">The doc.</param>
			<param name="importStyles">If document styles which have same names will be also imported
			to the destination document,set to <c>true</c>.</param>
			*/
			virtual void ImportContent(intrusive_ptr<IDocument> doc, bool importStyles);
			/*
			<summary>
				Adds the style to the document style.
			</summary>
			<param name="builtinStyle">The built-in style.</param>
			*/
			virtual intrusive_ptr<Style> AddStyle(BuiltinStyle builtinStyle);
			/*
			<summary>
				Accepts changes tracked from the moment of last change acceptance.
			</summary>
			*/
			void AcceptChanges();
			/*
			<summary>
				Rejects changes tracked from the moment of last change acceptance.
			</summary>
			*/
			void RejectChanges();
			/*
			<summary>
				Protects the document.
			</summary>
			<param name="type">The type of the protection.</param>
			*/
			virtual void Protect(ProtectionType type);
			/*
			<summary>
				Protects the document.
			</summary>
			<param name="type">The type of the protection</param>
			<param name="password">The password used for protection.</param>
			*/
			virtual void Protect(ProtectionType type, LPCWSTR_S password);
			/*
			<summary>
				Encrypts the document.
			</summary>
			<param name="password">Password.</param>
			*/
			virtual void Encrypt(LPCWSTR_S password);
			/*
			<summary>
				Removes the encryption.
			</summary>
			*/
			virtual void RemoveEncryption();
			/*
			<summary>
				Saves to text document with specified encoding.
			</summary>
			<param name="fileName">Name of the file.</param>
			<param name="encoding">The encoding.</param>
			*/
			void SaveToTxt(LPCWSTR_S fileName, intrusive_ptr<Encoding> encoding);
			/*
			<summary>
				Opens the Spire.Online document.
			</summary>
			<param name="reader">Spire.Online document path.</param>
			*/
			void OpenOnlineBin(LPCWSTR_S fileName);
			/*
			<summary>
				Load document in html format
			</summary>
			<param name="reader">Reader of html code.</param>
			<param name="baseURL">The default base URL for all links of external resource,
								  it should be a absolute and well formed uri string, for example:
								  http://www.e-iceblue.com/ or file:///C:/mywebsite/docs/
								  If it's null, use the href attribute of base tag in html instead;
								  Otherwise, it will overwrite the href attribute of base tag.</param>
			<param name="validationType">XHTML validation type.</param>
			*/
			//void LoadHTML (System.IO.TextReader reader,LPCWSTR_S baseURL,XHTMLValidationType validationType);
			/*
			<summary>
				Load document in html format
			</summary>
			<param name="reader">Reader of html code.</param>
			<param name="validationType">XHTML validation type.</param>
			*/
			//void LoadHTML (System.IO.TextReader reader,XHTMLValidationType validationType);
			/*
			<summary>
				Opens the text document from a file with default encoding utf-8.
			</summary>
			<param name="fileName">Name of the file.</param>
			*/
			void LoadText(LPCWSTR_S fileName);
			/*
			<summary>
				Opens the text document from a stream with default encoding utf-8.
			</summary>
			<param name="stream">The stream.</param>
			*/
			void LoadText(intrusive_ptr<Stream> stream);
			/*
			<summary>
				Opens the text document with specified encoding from a file.
			</summary>
			<param name="fileName">Name of the file.</param>
			<param name="encoding">The encoding</param>
			*/
			void LoadText(LPCWSTR_S fileName, intrusive_ptr<Encoding> encoding);
			/*
			<summary>
				Opens the text document with specified encoding from a stream.
			</summary>
			<param name="stream">The text document stream.</param>
			<param name="encoding">The encoding</param>
			*/
			void LoadText(intrusive_ptr<Stream> stream, intrusive_ptr<Encoding> encoding);
			/*
			<summary>
				Opens the rtf document with specified encoding from a reader.
			</summary>
			<param name="reader">The rtf document reader</param>
			*/
			//void LoadText (System.IO.TextReader reader);
			/*
			<summary>
				Opens doc file.
			</summary>
			<param name="fileName"></param>
			*/
			virtual void LoadFromFile(LPCWSTR_S fileName);
			/*
			<summary>
				Opens the document from file in Xml or Microsoft Word format.
			</summary>
			<param name="fileName"></param>
			<param name="formatType"></param>
			*/
			virtual void LoadFromFile(LPCWSTR_S fileName, FileFormat fileFormat);
			/*
			<summary>
				Opens the HTML document from stream .
			</summary>
			<param name="fileName">Name of the file.</param>
			<param name="formatType">Type of the format.</param>
			<param name="validationType">Type of the validation.</param>
			*/
			void LoadFromFile(LPCWSTR_S fileName, FileFormat fileFormat, XHTMLValidationType validationType);
			/*
			<summary>
				Opens the document from file in Xml or Microsoft Word format.
			</summary>
			<param name="fileName">Name of the file.</param>
			<param name="formatType">Type of the format.</param>
			<param name="password">The password.</param>
			*/
			void LoadFromFile(LPCWSTR_S fileName, FileFormat fileFormat, LPCWSTR_S password);
			/*
			<summary>
				LoadFromStream new document in read-only mode.
			</summary>
			<param name="strFileName">File to open.</param>
			<param name="formatType">Type of the format.</param>
			*/
			virtual void LoadFromFileInReadMode(LPCWSTR_S strFileName, FileFormat fileFormat);
			/*
			<summary>
				Opens the rtf document from a file.
			</summary>
			<param name="fileName">Name of the file.</param>
			*/
			void LoadRtf(LPCWSTR_S fileName);
			/*
			<summary>
				Opens the rtf document from a stream.
			</summary>
			<param name="stream">The stream.</param>
			*/
			void LoadRtf(intrusive_ptr<Stream> stream);
			/*
			<summary>
				Opens the rtf document with specified encoding from a file.
			</summary>
			<param name="fileName">Name of the file.</param>
			<param name="encoding">The encoding</param>
			*/
			void LoadRtf(LPCWSTR_S fileName, intrusive_ptr<Encoding> encoding);
			/*
			<summary>
				Opens the rtf document with specified encoding from a stream.
			</summary>
			<param name="stream">The rtf document stream.</param>
			<param name="encoding">The encoding</param>
			*/
			void LoadRtf(intrusive_ptr<Stream> stream, intrusive_ptr<Encoding> encoding);
			/*
			<summary>
				Opens the rtf document with specified encoding from a reader.
			</summary>
			<param name="reader">The rtf document reader</param>
			*/
			//void LoadRtf (System.IO.TextReader reader);
			/*
			<summary>
				Saves to file in Microsoft Word format.
			</summary>
			<param name="fileName"></param>
			*/
			virtual void SaveToFile(LPCWSTR_S fileName);
			/*
			<summary>
				Saves the document to PDF file.
			</summary>
			<param name="fileName">File name</param>
			<param name="paramList">Parameter list</param>
			*/
			void SaveToFile(LPCWSTR_S fileName, intrusive_ptr<ToPdfParameterList> paramList);
			/*
			<summary>
				Saves the EPUB document.
			</summary>
			<param name="fileName">The file name.</param>
			<param name="coverImage">The cover image.</param>
			*/
			void SaveToEpub(LPCWSTR_S fileName, intrusive_ptr<DocPicture> coverImage);
			/*
			<summary>
				Saves the EPUB document.
			</summary>
			<param name="stream">The stream.</param>
			<param name="coverImage">The cover image.</param>
			*/
			void SaveToEpub(intrusive_ptr<Stream> stream, intrusive_ptr<DocPicture> coverImage);
			/*
			<summary>
				Insert text from a file.
			</summary>
			<param name="fileName">File name</param>
			<param name="fileFormat">Type of the format</param>
			*/
			void InsertTextFromFile(LPCWSTR_S fileName, FileFormat fileFormat);
			/*
			<summary>
				Insert text from stream.
			</summary>
			<param name="stream">The stream.</param>
			<param name="fileFormat">Type of the format</param>
			*/
			void InsertTextFromStream(intrusive_ptr<Stream> stream, FileFormat fileFormat);
			/*
			<summary>
				Saves the document to file in Xml or Microsoft Word format.
			</summary>
			<param name="fileName">File name</param>
			<param name="formatType">Type of the format</param>
			*/
			virtual void SaveToFile(LPCWSTR_S fileName, FileFormat fileFormat);
			/*
			<summary>
				Saves the specified file name.
			</summary>
			<param name="fileName">Name of the file.</param>
			<param name="formatType">Type of the format.</param>
			<param name="response">The response.</param>
			<param name="contentDisposition">The content disposition.</param>
			*/
			//virtual void SaveToFile (LPCWSTR_S fileName,FileFormat fileFormat,System.Web.HttpResponse response,HttpContentType contentType);
			/*
			<summary>
				Gets total number of pages for document.
			</summary>
			*/
			//int GetPageCount();
			/*

			*/
			//void SetPrintDialog (System.Windows.Forms.PrintDialog value);
			/*
			<summary>
				Gets the PrintDocument
			</summary>
			*/
			//System.Drawing.Printing.PrintDocument GetPrintDocument ();
			/*
			<summary>
				Indicates whether the document has macros.
			</summary>
			*/
			bool GetIsContainMacro();
			/*
			<summary>
				Gets a value that indicates whether to keep same formatting when this document is merged to other document.
			</summary>
			*/
			bool GetKeepSameFormat();
			/*
			<summary>
				Sets a value that indicates whether to keep same formatting when this document is merged to other document.
			</summary>
			*/
			void SetKeepSameFormat(bool value);
			/*
			<summary>
				Gets a value indicating whether the new engine layout is enabled.
				The Spire.Doc product conversion feature has enabled the new engine way layout by default.
				If you want to switch to the old engine layout, use the Document constructor
				with the \"useNewEngine\" parameter and set the parameter \"useNewEngine\" to false.
			</summary>
			*/
			bool GetUseNewEngine();
			/*

			*/
			void add_EvalInformation(intrusive_ptr<SpireDocEvalInfo> value);
			/*

			*/
			void remove_EvalInformation(intrusive_ptr<SpireDocEvalInfo> value);
			/*

			*/
			void add_BookmarkLayout(intrusive_ptr<BookmarkLevelHandler> value);
			/*

			*/
			void remove_BookmarkLayout(intrusive_ptr<BookmarkLevelHandler> value);
			/*

			*/
			void add_PageLayout(intrusive_ptr<PageLayoutHandler> value);
			/*

			*/
			void remove_PageLayout(intrusive_ptr<PageLayoutHandler> value);
			/*

			*/
			void add_UpdateFields(intrusive_ptr<UpdateFieldsHandler> value);
			/*

			*/
			void remove_UpdateFields(intrusive_ptr<UpdateFieldsHandler> value);
			/*
			<summary>
				Gets the TOC element of the word document.
			</summary>
			*/
			virtual intrusive_ptr<TableOfContent> GetTOC();
			/*
			<summary>
				Sets the TOC element of the word document.
			</summary>
			*/
			virtual void SetTOC(intrusive_ptr<TableOfContent> value);
			/*
			<summary>
				Gets a value indicating whether save fonts that are used in the document in the file.
				Only support for the DOCX file format.
			</summary>
			*/
			bool GetEmbedFontsInFile();
			/*
			<summary>
				Sets a value indicating whether save fonts that are used in the document in the file.
				Only support for the DOCX file format.
			</summary>
			*/
			void SetEmbedFontsInFile(bool value);
			/*
			<summary>
				Gets the private font list.
			</summary>
			*/
			std::vector<intrusive_ptr<PrivateFontPath>> GetPrivateFontList();
			/*
			<summary>
				Gets a value indicating whether save system fonts that are used in the document in the file.
			</summary>
			*/
			bool GetEmbedSystemFonts();
			/*
			<summary>
				Sets a value indicating whether save system fonts that are used in the document in the file.
			</summary>
			*/
			void SetEmbedSystemFonts(bool value);
			/*
			<summary>
				Gets the Base path which is used to convert the relative path to absolute path.
			</summary>
			*/
			LPCWSTR_S GetHtmlBaseUrl();
			/*
			<summary>
				Sets the Base path which is used to convert the relative path to absolute path.
			</summary>
			*/
			void SetHtmlBaseUrl(LPCWSTR_S value);
			/*
			<summary>
			 <para>Gets a value specifying whether parsing and writing custom Change_Tracking HTML Tags are supported.</para>
			 <para>Supported HTML Tag : insert / delete.</para>
			 <para>Supported HTML Tag Attribytes : data-username / data-time.</para>
			</summary>
			*/
			bool GetHTMLTrackChanges();
			/*
			 <summary>
			 <para>Sets a value specifying whether parsing and writing custom Change_Tracking HTML Tags are supported.</para>
			 <para>Supported HTML Tag : insert / delete.</para>
			 <para>Supported HTML Tag Attribytes : data-username / data-time.</para>
			</summary>
			*/
			void SetHTMLTrackChanges(bool value);
			/*
			<summary>
			 <para>Gets a value specifying whether to add identifier to a sentence when writing to HTML.</para>
			 <para>Writed HTML Attribyte : sentence.</para>
			 <para>Writed HTML Value Of Attribyte : start / end / (start,end).</para>
			</summary>
			*/
			bool GetHTMLSentenceIdentifier();
			/*
			<summary>
			 <para>Sets a value specifying whether to add identifier to a sentence when writing to HTML.</para>
			 <para>Writed HTML Attribyte : sentence.</para>
			 <para>Writed HTML Value Of Attribyte : start / end / (start,end).</para>
			</summary>
			*/
			void SetHTMLSentenceIdentifier(bool value);
			/*
			<summary>
			 <para>Gets a value specifying whether parsing and writing comment of document in HTML.</para>
			 <para>Supported HTML Tag : span ,when the value of class attribute is comment</para>
			 <para>Supported HTML Tag Attribytes : data-comment / data-user / data-cid / data-date.</para>
			</summary>
			*/
			bool GetHTMLCustomComment();
			/*
			<summary>
			 <para>Sets a value specifying whether parsing and writing comment of document in HTML.</para>
			 <para>Supported HTML Tag : span ,when the value of class attribute is comment</para>
			 <para>Supported HTML Tag Attribytes : data-comment / data-user / data-cid / data-date.</para>
			</summary>
			*/
			void SetHTMLCustomComment(bool value);
			/*
			<summary>
				Set the custom punctuation as sentence indentifier.
					Full stop, qusetion mark, exclamatory mark are default values.
			</summary>
			*/
			//System.Collections.Generic.List`1[[System.Char, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] GetHTMLIdentifierPunctuations ();
			/*

			*/
			//void SetHTMLIdentifierPunctuations (System.Collections.Generic.List`1[[System.Char, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] value);
			/*
			<summary>
				Gets document footnotes.
			</summary>
			*/
			//System.Collections.Generic.List`1[[Spire.Doc.Fields.Footnote, Spire.Doc, Version=10.9.9.0, Culture=neutral, PublicKeyToken=663f351905198cb3]] GetFootnotes ();
			/*
			<summary>
				Gets document endnotes.
			</summary>
			*/
			//System.Collections.Generic.List`1[[Spire.Doc.Fields.Footnote, Spire.Doc, Version=10.9.9.0, Culture=neutral, PublicKeyToken=663f351905198cb3]] GetEndnotes ();
			/*
			<summary>
				Gets the type of the document object.
			</summary>
			*/
			virtual DocumentObjectType GetDocumentObjectType();
			/*
			<summary>
				Gets document built-in properties object.
			</summary>
			*/
			virtual intrusive_ptr<BuiltinDocumentProperties> GetBuiltinDocumentProperties();
			/*
			<summary>
				Gets document custom properties object.
			</summary>
			*/
			virtual intrusive_ptr<CustomDocumentProperties> GetCustomDocumentProperties();
			/*
			<summary>
				Gets document sections.
			</summary>
			*/
			virtual intrusive_ptr<SectionCollection> GetSections();
			/*
			<summary>
				Gets document styles.
			</summary>
			*/
			virtual intrusive_ptr<StyleCollection> GetStyles();
			/*
			<summary>
				Gets document list styles.
			</summary>
			*/
			virtual intrusive_ptr<ListStyleCollection> GetListStyles();
			/*
			<summary>
				Gets document bookmarks.
			</summary>
			*/
			virtual intrusive_ptr<BookmarkCollection> GetBookmarks();
			/*
			<summary>
				Gets fields of the documnet.
			</summary>
			*/
			intrusive_ptr<FieldCollection> GetFields();
			/*
			<summary>
				Gets comments item of the document.
			</summary>
			*/
			virtual intrusive_ptr<CommentsCollection> GetComments();
			/*
			<summary>
				Gets textbox items of main document
			</summary>
			*/
			virtual intrusive_ptr<TextBoxCollection> GetTextBoxes();
			/*
			<summary>
				Sets textbox items of main document
			</summary>
			*/
			void SetTextBoxes(intrusive_ptr<TextBoxCollection> value);
			/*
			<summary>
				Gets last section of the document.
			</summary>
			*/
			virtual intrusive_ptr<Section> GetLastSection();
			/*
			<summary>
				Gets last section object.
			</summary>
			*/
			virtual intrusive_ptr<Paragraph> GetLastParagraph();
			/*
			<summary>
				Gets options that control numbering and positioning of endnotes in this document.
			</summary>
			*/
			intrusive_ptr<FootEndnoteOptions> GetEndnoteOptions();
			/*
			<summary>
				 Gets options that control numbering and positioning of footnotes in this document.
			</summary>
			*/
			intrusive_ptr<FootEndnoteOptions> GetFootnoteOptions();
			/*
			<summary>
				Gets document's watermark.
			</summary>
			*/
			virtual intrusive_ptr<WatermarkBase> GetWatermark();
			/*
			<summary>
				Sets document's watermark.
			</summary>
			*/
			virtual void SetWatermark(intrusive_ptr<WatermarkBase> value);
			/*
			<summary>
				Gets document's background
			</summary>
			*/
			virtual intrusive_ptr<Background> GetBackground();
			/*
			<summary>
				Gets mail merge engine.
			</summary>
			*/
			virtual intrusive_ptr<MailMerge> GetMailMerge();
			/*
			<summary>
				Gets the type of protection of the document.
			</summary>
			*/
			virtual ProtectionType GetProtectionType();
			/*
			<summary>
				Sets the type of protection of the document.
			</summary>
			*/
			virtual void SetProtectionType(ProtectionType value);
			/*
			<summary>
				Gets view setup options in Microsoft word.
			</summary>
			*/
			virtual intrusive_ptr<ViewSetup> GetViewSetup();
			/*
			<summary>
				Gets whether is quite mode.
			</summary>
			*/
			bool GetQuiteMode();
			/*
			<summary>
				Sets whether is quite mode.
			</summary>
			*/
			void SetQuiteMode(bool value);
			/*
			<summary>
				Gets the child entities.
			</summary>
			<value>The child entities.</value>
			*/
			virtual intrusive_ptr<DocumentObjectCollection> GetChildObjects();
			/*
			<summary>
				Gets the HTML validate option.the default value is None.
			</summary>
			<value>The HTML validate option.</value>
			*/
			XHTMLValidationType GetXHTMLValidateOption();
			/*
			<summary>
				Sets the HTML validate option.the default value is None.
			</summary>
			<value>The HTML validate option.</value>
			*/
			void SetXHTMLValidateOption(XHTMLValidationType value);
			/*
			<summary>
				Gets or sets the document variables.
			</summary>
			<value>The variables.</value>
			*/
			virtual intrusive_ptr<VariableCollection> GetVariables();
			/*
			<summary>
				Gets the document properties.
			</summary>
			<value>The properties.</value>
			*/
			//virtual DocumentProperties* GetProperties();
			/*
			<summary>
				Gets a value indicating whether the document has tracked changes.
			</summary>
			<value>
				if the document has tracked changes, set to <c>true</c>.
			</value>
			*/
			virtual bool GetHasChanges();
			/*
			<summary>
				Gets a value indicating whether tracking changes is turn on.
			</summary>
			<value>if track changes in on, set to <c>true</c>.</value>
			*/
			bool GetTrackChanges();
			/*
			<summary>
				Sets a value indicating whether tracking changes is turn on.
			</summary>
			<value>if track changes in on, set to <c>true</c>.</value>
			*/
			void SetTrackChanges(bool value);
			/*
			<summary>
				Gets a value indicating whether updating the styles in this document to match
				the styles in the attached template each time you open .
			</summary>
			<value>if update document styles automatically, set to <c>true</c>.</value>
			*/
			bool GetAutoUpdateStylesByTemplate();
			/*
			<summary>
				Sets a value indicating whether updating the styles in this document to match
				the styles in the attached template each time you open .
			</summary>
			<value>if update document styles automatically, set to <c>true</c>.</value>
			*/
			void SetAutoUpdateStylesByTemplate(bool value);
			/*
			<summary>
				Gets a value indicating whether need first replacing.
			</summary>
			<value>True indciates need first replacing.</value>
			*/
			bool GetReplaceFirst();
			/*
			<summary>
				Sets a value indicating whether need first replacing.
			</summary>
			<value>True indciates need first replacing.</value>
			*/
			void SetReplaceFirst(bool value);
			/*
			<summary>
				Gets the save options.
			</summary>
			<value>The save options.</value>
			*/
			intrusive_ptr<HtmlExportOptions> GetHtmlExportOptions();
			/*
			<summary>
				Gets a value indicating whether to update fields in the document.
			</summary>
			*/
			virtual bool GetIsUpdateFields();
			/*
			<summary>
				Sets a value indicating whether to update fields in the document.
			</summary>
			*/
			virtual void SetIsUpdateFields(bool value);
			/*
			<summary>
				Returns the detected format type of the document which was loaded. .
			</summary>
			*/
			FileFormat GetDetectedFormatType();
			/*
			<summary>
				Gets the quality (Q%) of the image of JPEG format, this property
				is only used for doc to pdf. The default value is 80.
			</summary>
			*/
			int GetJPEGQuality();
			/*
			<summary>
				Sets the quality (Q%) of the image of JPEG format, this property
				is only used for doc to pdf. The default value is 80.
			</summary>
			*/
			void SetJPEGQuality(int value);
		private:
			intrusive_ptr<ParagraphBase> CreateParagraphItemByType(IntPtrWithTypeName intPtrWithTypeName, Object* pParent);
			intrusive_ptr<Style> CreateObjectByTypeName(IntPtrWithTypeName intPtrWithTypeName, Object* pParent);
		};
	}
}