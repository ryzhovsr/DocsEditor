#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IDocumentObject.h"
#include "Body.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS TableCell : public virtual Body, public virtual IDocumentObject
		{
			friend class Object;
		public:
			TableCell(intrusive_ptr<IDocument> document);
			/*
			<summary>
		        Get grid Span
	        </summary>
			*/
			short int GetGridSpan();
			/*

			*/
			virtual DocumentObjectType GetDocumentObjectType();
			/*
			<summary>
				Gets owner row of the cell.
			</summary>
			*/
			intrusive_ptr<TableRow> GetOwnerRow();
			/*
			<summary>
				Gets cell format.
			</summary>
			*/
			intrusive_ptr<CellFormat> GetCellFormat();
			/*
			<summary>
				Gets the width of the cell.
			</summary>
			*/
			float GetWidth();
			/*
			<summary>
				Sets the width of the cell.
			</summary>
			*/
			void SetWidth(float value);
			/*
			<summary>
				Gets the width type of the cell.
			</summary>
			*/
			CellWidthType GetCellWidthType();
			/*
			<summary>
				Sets the width type of the cell.
			</summary>
			*/
			void SetCellWidthType(CellWidthType value);
			/*
			<summary>
				Gets the cell scaling.
			</summary>
			<value>The scaling.</value>
			*/
			float GetScaling();
			/*
			<summary>
				Sets the cell scaling.
			</summary>
			<value>The scaling.</value>
			*/
			void SetScaling(float value);
			/*
			<summary>
		        Clones this instance.
		    </summary>
		    <returns></returns>
			*/
			virtual intrusive_ptr<DocumentObject> Clone();
			/*

			*/
			int GetCellIndex();
			/*
			<summary>
				Set the width and type of the cell.
			</summary>
			<param name="width">Width of the cell.</param>
			<param name="widthType">Width type of the cell.</param>
			*/
			void SetCellWidth(float width, CellWidthType widthType);
			/*
			<summary>
				Gets the width of the cell.
			</summary>
			<returns></returns>
			*/
			float GetCellWidth();
			/*
			<summary>
				Gets the width type of the cell.
			</summary>
			<returns></returns>
			*/
			//CellWidthType GetCellWidthType();
			/*
			<summary>
				The one cell splits into two or more cells.
			</summary>
			<param name="columnNum">The split column number. Must be greater than or equal to 1 is only valid. </param>
			<param name="rowNum">The split row number. Must be greater than or equal to 1 is only valid. </param>
			*/
			void SplitCell(int columnNum, int rowNum);
		protected:
			TableCell();
		private:
		};
	}
}