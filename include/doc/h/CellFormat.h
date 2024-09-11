#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "WordAttrCollection.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS CellFormat : public virtual WordAttrCollection
		{
		public:
			/*
			<summary>
				Gets borders.
			</summary>
			*/
			intrusive_ptr<Borders> GetBorders();
			/*
			<summary>
				Gets paddings.
			</summary>
			*/
			intrusive_ptr<Paddings> GetPaddings();
			/*
			<summary>
				Gets vertical alignment.
			</summary>
			*/
			VerticalAlignment GetVerticalAlignment();
			/*
			<summary>
				Sets vertical alignment.
			</summary>
			*/
			void SetVerticalAlignment(VerticalAlignment value);
			/*
			<summary>
				Gets background color.
			</summary>
			*/
			intrusive_ptr<Color> GetBackColor();
			/*
			<summary>
				Sets background color.
			</summary>
			*/
			void SetBackColor(intrusive_ptr<Color> value);
			/*
			<summary>
				Gets the way of vertical merging of the cell.
			</summary>
			*/
			CellMerge GetVerticalMerge();
			/*
			<summary>
				Sets the way of vertical merging of the cell.
			</summary>
			*/
			void SetVerticalMerge(CellMerge value);
			/*
			<summary>
				Gets the way of horizontal merging of the cell.
			</summary>
			*/
			CellMerge GetHorizontalMerge();
			/*
			<summary>
				Sets the way of horizontal merging of the cell.
			</summary>
			*/
			void SetHorizontalMerge(CellMerge value);
			/*
			<summary>
				Gets a value indicating whether [text wrap].
			</summary>
			<value>
			<c>true</c> if it specifies text wrap, set to <c>true</c>.</value>
			*/
			bool GetTextWrap();
			/*
			<summary>
				Sets a value indicating whether [text wrap].
			</summary>
			<value>
			<c>true</c> if it specifies text wrap, set to <c>true</c>.</value>
			*/
			void SetTextWrap(bool value);
			/*
			<summary>
				Gets fit text option.
			</summary>
			*/
			bool GetFitText();
			/*
			<summary>
				Sets fit text option.
			</summary>
			*/
			void SetFitText(bool value);
			/*
			<summary>
				Gets cell text direction.
			</summary>
			*/
			TextDirection GetTextDirection();
			/*
			<summary>
				Sets cell text direction.
			</summary>
			*/
			void SetTextDirection(TextDirection value);
			/*
			<summary>
				Gets whether to use same paddings as table has.
			</summary>
			*/
			bool GetSamePaddingsAsTable();
			/*
			<summary>
				Sets whether to use same paddings as table has.
			</summary>
			*/
			void SetSamePaddingsAsTable(bool value);
			/*
			<summary>
				Clears cell background.
			</summary>
			*/
			virtual void ClearBackground();
		private:
		};
	}
}