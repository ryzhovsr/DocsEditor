#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IDocumentObject.h"
#include "ParagraphBase.h"
#include "ICompositeObject.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS Footnote : public virtual ParagraphBase, public virtual IDocumentObject, public virtual ICompositeObject
		{
			friend class Object;
		public:
			Footnote(intrusive_ptr<IDocument> doc);
			/*

			*/
			bool GetUseAbsolutePos();
			/*

			*/
			void SetUseAbsolutePos(bool value);
			/*
			<summary>
				Gets the type of the document object.
			</summary>
		    <value>The type of the document object.</value>
			*/
			virtual DocumentObjectType GetDocumentObjectType();
			/*
			<summary>
				Gets footnote type: footnote or endnote
			</summary>
			*/
			FootnoteType GetFootnoteType();
			/*
			<summary>
				Sets footnote type: footnote or endnote
			</summary>
			*/
			void SetFootnoteType(FootnoteType value);
			/*
			<summary>
				Gets the value indicating if the footnote is auto numbered
			</summary>
			*/
			bool GetIsAutoNumbered();
			/*
			<summary>
				Sets the value indicating if the footnote is auto numbered
			</summary>
			*/
			void SetIsAutoNumbered(bool value);
			/*
			<summary>
				Gets the text body of the footnote.
			</summary>
		    <value>The text body.</value>
			*/
			intrusive_ptr<Body> GetTextBody();
			/*
			<summary>
				Gets the marker character format
			</summary>
			*/
			intrusive_ptr<CharacterFormat> GetMarkerCharacterFormat();
			/*
			<summary>
				Gets or sets the marker symbol code.
			</summary>
		    <value>The symbol code.</value>
			*/
			byte GetSymbolCode();
			/*
			<summary>
				Sets the marker symbol code.
			</summary>
			<value>The symbol code.</value>
			*/
			void SetSymbolCode(byte value);
			/*
			<summary>
				Gets the custom footnote marker.
			</summary>
		    <value>The custom marker.</value>
			*/
			LPCWSTR_S GetCustomMarker();
			/*
			<summary>
				Sets the custom footnote marker.
			</summary>
			<value>The custom marker.</value>
			*/
			void SetCustomMarker(LPCWSTR_S value);
			/*

			*/
			virtual intrusive_ptr<DocumentObjectCollection> GetChildObjects();
			/*

			*/
			void EnsureMinimum();
		private:
			Footnote();
		};
	}
}