#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IDocumentObject.h"
#include "DocumentBase.h"
#include "ICompositeObject.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS TableRow : public virtual DocumentBase, public virtual IDocumentObject, public virtual ICompositeObject
		{
			friend class Object;
		public:
			TableRow(intrusive_ptr<IDocument> document);
			/*
			<summary>
				Gets the child object.
			</summary>
			<value>The child object.</value>
			*/
			virtual intrusive_ptr<DocumentObjectCollection> GetChildObjects();
			/*
			<summary>
				Gets the type of the document object.
			</summary>
			<value>The type of the document object.</value>
			*/
			virtual DocumentObjectType GetDocumentObjectType();
			/*
			<summary>
				Returns cell collection.
			</summary>
			*/
			virtual intrusive_ptr<CellCollection> GetCells();
			/*
			<summary>
				Sets cell collection.
			</summary>
			*/
			virtual void SetCells(intrusive_ptr<CellCollection> value);
			/*
			<summary>
				Gets table row height type
			</summary>
			*/
			TableRowHeightType GetHeightType();
			/*
			<summary>
				Sets table row height type
			</summary>
			*/
			void SetHeightType(TableRowHeightType value);
			/*
			<summary>
				Gets table format
			</summary>
			*/
			intrusive_ptr<RowFormat> GetRowFormat();
			/*
			<summary>
				Returns height of the row.
			</summary>
			*/
			float GetHeight();
			/*
			<summary>
				Sets height of the row.
			</summary>
			*/
			void SetHeight(float value);
			/*
			<summary>
				Returns whether the row is a table header.
			</summary>
			*/
			bool GetIsHeader();
			/*
			<summary>
				Sets whether the row is a table header.
			</summary>
			*/
			void SetIsHeader(bool value);
			/*
			<summary>
				Clones this instance.
			</summary>
			<returns></returns>
			*/
			intrusive_ptr<TableRow> CloneTableRow();
			/*
			<summary>
				Adds the cell.
			</summary>
			*/
			intrusive_ptr<TableCell> AddCell();
			/*
			<summary>
				Adds the cell.
			</summary>
			<param name="isCopyFormat">Specifies whether to apply the parent row format.</param>
			<returns></returns>
			*/
			intrusive_ptr<TableCell> AddCell(bool isCopyFormat);
			/*
			<summary>
				Returns index of the row in owner table.
			</summary>
			<returns></returns>
			*/
			int GetRowIndex();
		protected:
			TableRow();
		private:
		};
	}
}