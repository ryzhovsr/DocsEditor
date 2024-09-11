#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IDocumentObject.h"
#include "ICompositeObject.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
		<summary>
			Represents a table in a document.
		</summary>
		*/
		class EXPORTS ITable : public virtual ICompositeObject, public virtual IDocumentObject
		{
		public:
			/*
			<summary>
				Gets row collection.
			</summary>
			*/
			virtual intrusive_ptr<RowCollection> GetRows() = 0;
			/*
			<summary>
				Gets the table format.
			</summary>
			<value>The table format.</value>
			*/
			virtual intrusive_ptr<RowFormat> GetTableFormat() = 0;
			/*
			<summary>
				Gets the last cell in last row.
			</summary>
			*/
			virtual intrusive_ptr<TableCell> GetLastCell() = 0;
			/*
			<summary>
				Gets the last row in table.
			</summary>
			*/
			virtual intrusive_ptr<TableRow> GetFirstRow() = 0;
			/*
			<summary>
				Gets the last row in table.
			</summary>
			*/
			virtual intrusive_ptr<TableRow> GetLastRow() = 0;
			/*
			<summary>
				Gets cell by row/column indexes.
			</summary>
			*/
			virtual intrusive_ptr<TableCell> GetItem(int row, int column) = 0;
			/*
			<summary>
				Returns or setstable width.
			</summary>
			*/
			virtual float GetWidth() = 0;
			/*
			 <summary>
				 Adds new row to table.
			</summary>
			<returns></returns>
			*/
			virtual intrusive_ptr<TableRow> AddRow() = 0;
			/*
			<summary>
				Adds new row to table.
			</summary>
			<returns></returns>
			*/
			virtual intrusive_ptr<TableRow> AddRow(bool isCopyFormat) = 0;
			/*
			<summary>
				Adds a row to table with copy format option
			</summary>
			<param name="isCopyFormat">Indicates whether copy format from previous row or not</param>
			<param name="autoPopulateCells">if it specifies auto populate cells, set to <c>true</c>.</param>
			<returns></returns>
			*/
			virtual intrusive_ptr<TableRow> AddRow(bool isCopyFormat, bool autoPopulateCells) = 0;
			/*
			<summary>
				Resets rows / columns numbers.
			</summary>
			<param name="rowsNum">The rows number.</param>
			<param name="columnsNum">The columns number.</param>
			*/
			virtual void ResetCells(int rowsNum, int columnsNum) = 0;
			/*
			<summary>
				Resets rows / columns numbers.
			</summary>
			<param name="rowsNum">The rows num.</param>
			<param name="columnsNum">The columns num.</param>
			<param name="format">The format.</param>
			<param name="cellWidth">Width of the cell.</param>
			*/
			virtual void ResetCells(int rowsNum, int columnsNum, intrusive_ptr<RowFormat> format, float cellWidth) = 0;
			/*
			<summary>
				Applies the vertical merge for table cells.
			</summary>
			<param name="columnIndex">Index of the column.</param>
			<param name="startRowIndex">Start index of the row.</param>
			<param name="endRowIndex">End index of the row.</param>
			*/
			virtual void ApplyVerticalMerge(int columnIndex, int startRowIndex, int endRowIndex) = 0;
			/*
			<summary>
				Applies horizontal merging for cells of table row.
			</summary>
			<param name="rowIndex">Index of the row.</param>
			<param name="startCellIndex">Start index of the cell.</param>
			<param name="endCellIndex">End index of the cell.</param>
			*/
			virtual void ApplyHorizontalMerge(int rowIndex, int startCellIndex, int endCellIndex) = 0;
			/*
			<summary>
				Gets indent from left for the table.
			</summary>
			*/
			virtual float GetIndentFromLeft() = 0;
			/*
			<summary>
				Sets indent from left for the table.
			</summary>
			*/
			virtual void SetIndentFromLeft(float value) = 0;
			/*
			<summary>
				Removes the absolute position data. If table has absolute position in the document,
				all position data will be erased.
			</summary>
			*/
			virtual void RemoveAbsPosition() = 0;
		private:
		};
	}
}