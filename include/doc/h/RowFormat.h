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
		class EXPORTS RowFormat : public virtual WordAttrCollection
		{
		public:
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
				Returns spacing between cells.
					The setting value must be between 0 pt and 264.5 pt.
					The value will not be applied to this property if it is set out of range.
					This property will be cleared if the set value is less than 0.
			</summary>
			*/
			float GetCellSpacing();
			/*
			<summary>
				Sets spacing between cells.
					The setting value must be between 0 pt and 264.5 pt.
					The value will not be applied to this property if it is set out of range.
					This property will be cleared if the set value is less than 0.
			</summary>
			*/
			void SetCellSpacing(float value);
			/*
			<summary>
				Returns table indent.
			</summary>
			*/
			float GetLeftIndent();
			/*
			<summary>
				Sets table indent.
			</summary>
			*/
			void SetLeftIndent(float value);
			/*
			<summary>
				Returns the boolean value indicating if table is auto resized
			</summary>
			*/
			bool GetIsAutoResized();
			/*
			<summary>
				Sets the boolean value indicating if table is auto resized
			</summary>
			*/
			void SetIsAutoResized(bool value);
			/*
			<summary>
				Returns the boolean value indicating if there is a break across pages
			</summary>
			*/
			bool GetIsBreakAcrossPages();
			/*
			<summary>
				Sets the boolean value indicating if there is a break across pages
			</summary>
			*/
			void SetIsBreakAcrossPages(bool value);
			/*
			<summary>
				Returns whether table is right to left.
			</summary>
			*/
			bool GetBidi();
			/*
			<summary>
				Sets whether table is right to left.
			</summary>
			*/
			void SetBidi(bool value);
			/*
			<summary>
				Gets horizontal alignment for the table.
			</summary>
			*/
			RowAlignment GetHorizontalAlignment();
			/*
			<summary>
				Sets horizontal alignment for the table.
			</summary>
			*/
			void SetHorizontalAlignment(RowAlignment value);
			/*
			<summary>
				Gets a value indicating whether to use "Around" text wrapping.
			</summary>
			<value>
			<c>true</c> if wrap text around; otherwise, <c>false</c>.</value>
			*/
			bool GetWrapTextAround();
			/*
			<summary>
				Sets a value indicating whether to use "Around" text wrapping.
			</summary>
			<value>
			<c>true</c> if wrap text around; otherwise, <c>false</c>.</value>
			*/
			void SetWrapTextAround(bool value);
			/*
			<summary>
				the positioning.
			</summary>
			<value>The positioning.</value>
			*/
			intrusive_ptr<TablePositioning> GetPositioning();
			/*
			<summary>
				Gets the value of the layoutType.
				This element specifies the algorithm which shall be used  to layout the comtents of the table within the document.
			</summary>
			<value>The type of the layout.</value>
			*/
			LayoutType GetLayoutType();
			/*
			<summary>
				Sets the value of the layoutType.
				This element specifies the algorithm which shall be used  to layout the comtents of the table within the document.
			</summary>
			<value>The type of the layout.</value>
			*/
			void SetLayoutType(LayoutType value);
		private:
		};
	}
}