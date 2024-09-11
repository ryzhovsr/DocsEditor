#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IDocumentObject.h"
#include "ICompositeObject.h"
#include "IBodyRegion.h"
#include "BodyRegion.h"
#include "IStructureDocument.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
		<summary>
			This element specifies the presence of a structured document tag around one or more block-level structures
			(paragraphs, tables, etc.). The two child elements of this element shall be used to specify the properties and
			content of the current structured document tag via the sdtPr and sdtContent elements, respectively.
		</summary>
		*/
		class EXPORTS StructureDocumentTag : public virtual BodyRegion, public virtual IDocumentObject, public virtual IBodyRegion, public virtual IStructureDocument, public virtual ICompositeObject
		{
			friend class Object;
		public:
			StructureDocumentTag(intrusive_ptr<Document> doc);
			/*
			<summary>
				Gets the a value specifies the last known contents of a structured document tag around one or more block-level structures.
			</summary>
			*/
			intrusive_ptr<SDTContent> GetSDTContent();
			/*
			<summary>
				Gets the structured document tag properties.
			</summary>
			*/
			virtual intrusive_ptr<SDTProperties> GetSDTProperties();
			/*
			<summary>
				Gets character format for the break symbol.
			</summary>
			*/
			virtual intrusive_ptr<CharacterFormat> GetBreakCharacterFormat();
			/*
			<summary>
				Gets the type of the entity.
			</summary>
			<value>The type of the entity.</value>
			*/
			virtual DocumentObjectType GetDocumentObjectType();
			/*
			<summary>
				Gets the child entities.
			</summary>
			<value>The child entities.</value>
			*/
			virtual intrusive_ptr<DocumentObjectCollection> GetChildObjects();
			/*
			<summary>
				Returns the zero-based index of the specified entity.
			</summary>
			   <param name="entity">the document object.</param>
			<returns></returns>
			*/
			virtual int GetIndex(intrusive_ptr<IDocumentObject> entity);
			/*
			<summary>
				Updates stuctured documnet tag content with bound data.
			</summary>
			*/
			virtual void UpdateDataBinding();
			/*
			<summary>
				Replaces all entries of matchString regular expression with newValue string.
			</summary>
			<param name="pattern">The pattern.</param>
			<param name="newValue">The newValue.</param>
			<returns></returns>
			*/
			//virtual int Replace (System.Text.RegularExpressions.Regex pattern,LPCWSTR_S replace);
			/*
			<summary>
				Replaces all entries of matchString string with newValue string, taking into
				consideration caseSensitive and wholeWord options.
			</summary>
			<param name="matchString">The matchString text to newValue.</param>
			<param name="newValue">The newValue text .</param>
			<param name="caseSensitive">if specifies case sensitive, set to <c>true</c> .</param>
			<param name="wholeWord">if it specifies to search a whole word, set to <c>true</c>.</param>
			<returns></returns>
			*/
			virtual int Replace(LPCWSTR_S given, LPCWSTR_S replace, bool caseSensitive, bool wholeWord);
			/*
			<summary>
				Replaces all entries of matchString regular expression with TextRangesHolder.
			</summary>
			<param name="pattern">The pattern.</param>
			<param name="textSelection">The text selection.</param>
			<returns></returns>
			*/
			//virtual int Replace (System.Text.RegularExpressions.Regex pattern,intrusive_ptr<TextSelection> textSelection);
			/*
			<summary>
				Replaces all entries of matchString regular expression with TextRangesHolder.
			</summary>
			<param name="pattern">The pattern.</param>
			<param name="textSelection">The text selection.</param>
			<param name="saveFormatting">if it specifies save source formatting, set to <c>true</c>.</param>
			<returns></returns>
			*/
			//virtual int Replace (System.Text.RegularExpressions.Regex pattern,intrusive_ptr<TextSelection> textSelection,bool saveFormatting);
			/*
			<summary>
				Replaces all entries of matchString string with TextRangesHolder, taking into
				consideration caseSensitive and wholeWord options.
			</summary>
			<param name="matchString">The matchString.</param>
			<param name="textSelection">The text selection.</param>
			<param name="caseSensitive">if it specifies case sensitive, set to <c>true</c>.</param>
			<param name="wholeWord">if it specifies to check whole word, set to <c>true</c> .</param>
			*/
			int Replace(LPCWSTR_S given, intrusive_ptr<TextSelection> textSelection, bool caseSensitive, bool wholeWord);
			/*
			<summary>
				Replaces all entries of matchString string with TextRangesHolder, taking into
				consideration caseSensitive and wholeWord options.
			</summary>
			<param name="matchString">The matchString.</param>
			<param name="textSelection">The text selection.</param>
			<param name="caseSensitive">if it specifies case sensitive, set to <c>true</c> .</param>
			<param name="wholeWord">if it specifies to search a whole word, set to <c>true</c> .</param>
			<param name="saveFormatting">if it specifies save source formatting, set to <c>true</c>.</param>
			<returns></returns>
			*/
			int Replace(LPCWSTR_S given, intrusive_ptr<TextSelection> textSelection, bool caseSensitive, bool wholeWord, bool saveFormatting);
			/*
			<summary>
				Returns first entry of given regex.
			</summary>
			<param name="pattern">The pattern.</param>
			<returns></returns>
			*/
			//virtual intrusive_ptr<TextSelection> Find (System.Text.RegularExpressions.Regex pattern);
		protected:
			StructureDocumentTag();
		private:
		};
	}
}