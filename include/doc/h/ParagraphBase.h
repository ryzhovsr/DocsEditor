#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IDocumentObject.h"
#include "DocumentBase.h"
#include "IParagraphBase.h"
#include "DocumentObjectCollection.h"
#include "EditRevision.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS ParagraphBase : public virtual DocumentBase, public virtual IDocumentObject, public virtual IParagraphBase
		{
		public:
			/*
			<summary>
			Gets the document.
			</summary>
			<value>The type of the document object.</value>
			*/
			intrusive_ptr<Document> GetDocument();
			/*
			<summary>
				Gets the child objects of the entity.
			</summary>
			*/
			virtual intrusive_ptr<DocumentObjectCollection> GetChildObjects();
			/*
			<summary>
				Gets owner paragraph.
			</summary>
		    <value></value>
			*/
			virtual intrusive_ptr<Paragraph> GetOwnerParagraph();
			/*
			<summary>
				Gets a value indicating whether this item was inserted to the document,
				when "Track Changes" is or was set to "true".
			</summary>
		    <value>
				if this instance was inserted, set to <c>true</c>.
			</value>
			*/
			bool GetIsInsertRevision();
			/*
			<summary>
				Gets or set a value indicating whether this item was deleted from the document,
				when "Track Changes" is or was set to "true".
			</summary>
		    <value>
				if this instance is delete revision, set to <c>true</c>.
			</value>
			*/
			bool GetIsDeleteRevision();
			/*
			<summary>
				Gets the delete revision for this objects.
				Note this can be null. If null does not have delete revision.
			</summary>
			*/
			intrusive_ptr<EditRevision> GetDeleteRevision();
			/*
			<summary>
				Gets the insert revision for this objects.
				Note this can be null. If null does not have insert revision.
			</summary>
			*/
			intrusive_ptr<EditRevision> GetInsertRevision();
			/*
			<summary>
				Gets the style name.
			</summary>
			*/
			virtual LPCWSTR_S GetStyleName();
			/*
			<summary>
				Gets the character format.
			</summary>
		    <value>The paragraph item character format.</value>
			*/
			virtual intrusive_ptr<CharacterFormat> GetCharacterFormat();
			/*
			<summary>
				Sets the character format.
			</summary>
			<param name="charFormat">The character format.</param>
			*/
			virtual void ApplyCharacterFormat(intrusive_ptr<CharacterFormat> charFormat);
			/*
			<summary>
		        Applies the specified style.
		    </summary>
		    <param name="styleName">The style name.</param>
			*/
			virtual void ApplyStyle(LPCWSTR_S styleName);
			/*
			<summary>
		        Gets the previous sibling.
		    </summary>
		    <value>The previous Widget sibling.</value>
			*/
			virtual intrusive_ptr<IDocumentObject> GetPreviousWidgetSibling();
			/*
			<summary>
		        Gets the next widget sibling.
		    </summary>
		    <value>The next widget sibling.</value>
			*/
			virtual intrusive_ptr<IDocumentObject> GetNextWidgetSibling();
		private:
		};
	}
}