#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IDocumentObject.h"
#include "ICompositeObject.h"
#include "TableRow.h"
#include "IStructureDocument.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS StructureDocumentTagRow : public virtual TableRow, public virtual IDocumentObject, public virtual ICompositeObject, public virtual IStructureDocument
		{
		public:
			/*
			<summary>
				 Gets the type of the entity.
			</summary>
			*/
			virtual DocumentObjectType GetDocumentObjectType();
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
				Gets the child object.
			</summary>
		    <value>The child object.</value>
			*/
			virtual intrusive_ptr<DocumentObjectCollection> GetChildObjects();
			/*
			<summary>
				Returns or sets cell collection.
			</summary>
			*/
			virtual intrusive_ptr<CellCollection> GetCells();
			/*

			*/
			virtual void SetCells(intrusive_ptr<CellCollection> value);
			/*
			<summary>
		        Updates stuctured documnet tag content with bound data.
		    </summary>
			*/
			virtual void UpdateDataBinding();
		private:
		};
	}
}