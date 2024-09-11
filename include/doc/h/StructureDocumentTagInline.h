#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IDocumentObject.h"
#include "ParagraphBase.h"
#include "ICompositeObject.h"
#include "IStructureDocument.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
		<summary>
			This element specifies the presence of a structured document tag around one or more inline-level structures
			(runs, DrawingML objects, fields, etc.) in the current paragraph. The two child elements of this element shall be
			used to specify the properties and content of the current structured document tag via the sdtPr and sdtContent
			elements, respectively.
		</summary>
		*/
		class EXPORTS StructureDocumentTagInline : public virtual ParagraphBase, public virtual IDocumentObject, public virtual IStructureDocument, public virtual ICompositeObject
		{
			friend class Object;
		public:
			StructureDocumentTagInline(intrusive_ptr<Document> doc);
			/*
			<summary>
				Gets a valie specifies the last known contents of a structured document tag around one or more inline-level structures.
			</summary>
			*/
			intrusive_ptr<SDTInlineContent> GetSDTContent();
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

			*/
			//void BackupChildObjects();
			/*

			*/
			void RevertChildObjects();
			/*
			<summary>
				Accepts or rejects changes tracked from the moment of last change acceptance.
			</summary>
			<param name="acceptChanges">if it accepts changes, set to <c>true</c>.</param>
			*/
			void MakeChanges(bool acceptChanges);
			/*
			<summary>
				Updates stuctured documnet tag content with bound data.
			</summary>
			*/
			virtual void UpdateDataBinding();
		protected:
			StructureDocumentTagInline();
		private:
		};
	}
}