#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IDocumentObject.h"
#include "ICompositeObject.h"
#include "IBodyRegion.h"
#include "BodyRegion.h"
#include "ITable.h"
#include "AutoFitBehaviorType.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS Table : public virtual BodyRegion, public virtual IDocumentObject, public virtual IBodyRegion, public virtual ITable, public virtual ICompositeObject
		{
			friend class Object;
		public:
			Table(intrusive_ptr<IDocument> doc);

			Table(intrusive_ptr<IDocument> doc, bool showBorder);

			Table(intrusive_ptr<IDocument> doc, bool showBorder, float lineWidth);
			/*
			<summary>
				Gets the default row height, the unit of measure is point, 1point = 0.3528 mm
			</summary>
			*/
			float GetDefaultRowHeight();
			/*
			<summary>
				Sets the default row height, the unit of measure is point, 1point = 0.3528 mm
			</summary>
			*/
			void SetDefaultRowHeight(float value);
			/*
			<summary>
	            Gets the default column count of per row
		    </summary>
			*/
			int GetDefaultColumnsNumber();
			/*
			<summary>
				Sets the default column count of per row
			</summary>
			*/
			void SetDefaultColumnsNumber(int value);
			/*
			<summary>
				Gets the default width of each column.
			</summary>
			*/
			float GetDefaultColumnWidth();
			/*
			<summary>
				Sets the default width of each column.
			</summary>
			*/
			void SetDefaultColumnWidth(float value);
			/*
			<summary>
				Determines how Microsoft Word resizes a table when the AutoFit feature is used.
			</summary>
			<param name="behavior">How Word resizes the specified table with the AutoFit feature is used.</param>
			*/
			void AutoFit(AutoFitBehaviorType behavior);
			/*
			<summary>
				Gets the width of each column.
			</summary>
			*/
			std::vector<float> GetColumnWidth();
			/*
			<summary>
				Sets the width of each column.
			</summary>
			*/
			void SetColumnWidth(std::vector<float> value);
			/*
			<summary>
				Gets the type of the document object.
			</summary>
			*/
			virtual DocumentObjectType GetDocumentObjectType();
			/*
			<summary>
				Get the table rows
			</summary>
			<value></value>
			*/
			virtual intrusive_ptr<RowCollection> GetRows();
			/*
			<summary>
				Gets the table formatting after ResetCells call.
			</summary>
			<value>The table format.</value>
			*/
			virtual intrusive_ptr<RowFormat> GetTableFormat();
			/*
			<summary>
				This property specifies the preferred horizontal width of a table.
			</summary>
			*/
			intrusive_ptr<PreferredWidth> GetPreferredWidth();
			/*
			<summary>
				Sets value to specifie the preferred horizontal width of a table.
			</summary>
			*/
			void SetPreferredWidth(intrusive_ptr<PreferredWidth> value);
			/*
			<summary>
				Gets table style name.
			</summary>
			<value></value>
			*/
			LPCWSTR_S GetTableStyleName();
			/*
			<summary>
				Get last cell of the table
			</summary>
			<value></value>
			*/
			virtual intrusive_ptr<TableCell> GetLastCell();
			/*
			<summary>
				Get first row of the table.
			</summary>
			<value></value>
			*/
			virtual intrusive_ptr<TableRow> GetFirstRow();
			/*
			<summary>
				Get last row of the table.
			</summary>
			<value></value>
			*/
			virtual intrusive_ptr<TableRow> GetLastRow();
			/*
			<summary>
				Get table cell by row and column indexes.
			</summary>
			<value></value>
			*/
			virtual intrusive_ptr<TableCell> GetItem(int row, int column);
			/*
			<summary>
				Gets the table width
			</summary>
			<value></value>
			*/
			virtual float GetWidth();
			/*
			<summary>
				Gets the child entities.
			</summary>
			<value>The child entities.</value>
			*/
			virtual intrusive_ptr<DocumentObjectCollection> GetChildObjects();
			/*
			<summary>
				Gets indent from left for the table.
			</summary>
			*/
			virtual float GetIndentFromLeft();
			/*
			<summary>
				Sets indent from left for the table.
			</summary>
			*/
			virtual void SetIndentFromLeft(float value);
			/*
			<summary>
				Gets the table title.
			</summary>
			<value>The title.</value>
			*/
			LPCWSTR_S GetTitle();
			/*
			<summary>
				Sets the table title.
			</summary>
			<value>The title.</value>
			*/
			void SetTitle(LPCWSTR_S value);
			/*
			<summary>
				Gets the table description.
			</summary>
			*/
			LPCWSTR_S GetTableDescription();
			/*
			<summary>
				Sets the table description.
			</summary>
			*/
			void SetTableDescription(LPCWSTR_S value);
			/*
			<summary>
				Add Caption for current Table
			</summary>
			<param name="captionPosition"></param>
			<param name="name"></param>
			<param name="format"></param>
			<returns></returns>
			*/
			intrusive_ptr<IParagraph> AddCaption(LPCWSTR_S name, CaptionNumberingFormat format, CaptionPosition captionPosition);
			/*
			<summary>
				Clones this instance.
			</summary>
			<returns></returns>
			*/
			intrusive_ptr<Table> CloneTable();
			/*
			<summary>
				Resets rows / columns numbers.
			</summary>
			<param name="rowsNum">The rows number.</param>
			<param name="columnsNum">The columns number.</param>
			*/
			virtual void ResetCells(int rowsNum, int columnsNum);
			/*
			<summary>
				Resets rows / columns numbers.
			</summary>
			<param name="rowsNum">The rows num.</param>
			<param name="columnsNum">The columns num.</param>
			<param name="format"></param>
			<param name="cellWidth">Width of the cell.</param>
			*/
			virtual void ResetCells(int rowsNum, int columnsNum, intrusive_ptr<RowFormat> format, float cellWidth);
			/*
			<summary>
				Applies the built-in table style.
			</summary>
			<param name="builtinStyle">The built-in table style.</param>
			*/
			void ApplyStyle(DefaultTableStyle builtinTableStyle);
			/*
			<summary>
				Applies the table style properties to table and cell.
			</summary>
			*/
			void ApplyTableStyle();
			/*
			<summary>
				Adds a row to table
			</summary>
			<returns></returns>
			*/
			virtual intrusive_ptr<TableRow> AddRow();
			/*
			<summary>
				Adds a row to table with copy format from the current last row, and then add columnsNum cells to the new row.
			</summary>
			<param name="columnsNum">The number of the count of the new row, it's must be -1 &lt; columnsNum &lt; 64.</param>
			<returns></returns>
			*/
			intrusive_ptr<TableRow> AddRow(int columnsNum);
			/*
			<summary>
				Adds new row to table.
			</summary>
			<param name="isCopyFormat"></param>
			<returns></returns>
			*/
			virtual intrusive_ptr<TableRow> AddRow(bool isCopyFormat);
			/*
			<summary>
				Adds a row to table with copy format option
			</summary>
			<param name="isCopyFormat">Indicates whether copy format from previous row or not</param>
			<param name="autoPopulateCells">if specifies to populate cells automatically, set to <c>true</c>.</param>
			<returns></returns>
			*/
			virtual intrusive_ptr<TableRow> AddRow(bool isCopyFormat, bool autoPopulateCells);
			/*
			<summary>
				Adds a row to table with copy format option
			</summary>
			<param name="isCopyFormat">Indicates whether copy format from previous row or not</param>
			<param name="columnsNum">The number of the count of the new row, it's must be -1 &lt; columnsNum &lt; 64.</param>
			<returns></returns>
			*/
			intrusive_ptr<TableRow> AddRow(bool isCopyFormat, int columnsNum);
			/*
			<summary>
				Replaces all entries of matchString regular expression with newValue string.
			</summary>
			<param name="pattern">Pattern</param>
			<param name="newValue">Replace text</param>
			<returns></returns>
			*/
			virtual int Replace(intrusive_ptr<Regex> pattern, LPCWSTR_S replace);
			/*
			<summary>
				Replaces by specified matchString string.
			</summary>
			<param name="matchString">The matchString text.</param>
			<param name="newValue">The newValue text.</param>
			<param name="caseSensitive">if it specifies case sensitive, set to <c>true</c>.</param>
			<param name="wholeWord">if it specifies to search a whole word, set to <c>true</c>.</param>
			<returns></returns>
			*/
			virtual int Replace(LPCWSTR_S given, LPCWSTR_S replace, bool caseSensitive, bool wholeWord);
			/*
			<summary>
				Replaces by specified pattern.
			</summary>
			<param name="pattern">The pattern.</param>
			<param name="textSelection">The text selection.</param>
			<returns></returns>
			*/
			virtual int Replace(intrusive_ptr<Regex> pattern, intrusive_ptr<TextSelection> textSelection);
			/*
			<summary>
				Replaces by specified pattern.
			</summary>
			<param name="pattern">The pattern.</param>
			<param name="textSelection">The text selection.</param>
			<param name="saveFormatting">if it specifies save source formatting, set to <c>true</c>.</param>
			<returns></returns>
			*/
			virtual int Replace(intrusive_ptr<Regex> pattern, intrusive_ptr<TextSelection> textSelection, bool saveFormatting);
			/*
			<summary>
				Finds text by specified pattern.
			</summary>
			<param name="pattern">The pattern.</param>
			<returns></returns>
			*/
			virtual intrusive_ptr<TextSelection> Find(intrusive_ptr<Regex> pattern);
			/*
			<summary>
				Applies the vertical merge for table cells.
			</summary>
			<param name="columnIndex">Index of the column.</param>
			<param name="startRowIndex">Start index of the row.</param>
			<param name="endRowIndex">End index of the row.</param>
			*/
			virtual void ApplyVerticalMerge(int columnIndex, int startRowIndex, int endRowIndex);
			/*
			<summary>
				Applies horizontal merging for cells of table row.
			</summary>
			<param name="rowIndex">Index of the row.</param>
			<param name="startCellIndex">Start index of the cell.</param>
			<param name="endCellIndex">End index of the cell.</param>
			*/
			virtual void ApplyHorizontalMerge(int rowIndex, int startCellIndex, int endCellIndex);
			/*
			<summary>
				Removes the absolute position data. If table has absolute position in the document,
				all position data will be erased.
			</summary>
			*/
			virtual void RemoveAbsPosition();
			/*
			<summary>
				Sets the width of all cells in the current column of the table.
			</summary>
			<param name="columnIndex">Index of the column.</param>
			<param name="columnWidth">The column width.</param>
			<param name="columnWidthType">The column width type.</param>
			*/
			void SetColumnWidth(int columnIndex, float columnWidth, CellWidthType columnWidthType);
		protected:
			Table();
		private:
		};
	}
}