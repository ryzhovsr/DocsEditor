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
		class EXPORTS TextBoxFormat : public virtual WordAttrCollection
		{
		public:
			/*
			<summary>
				Gets horizontal origin
			</summary>
			*/
			HorizontalOrigin GetHorizontalOrigin();
			/*
			<summary>
				Sets horizontal origin
			</summary>
			*/
			void SetHorizontalOrigin(HorizontalOrigin value);
			/*
			<summary>
				Gets vertical origin
			</summary>
			*/
			VerticalOrigin GetVerticalOrigin();
			/*
			<summary>
				Sets vertical origin
			</summary>
			*/
			void SetVerticalOrigin(VerticalOrigin value);
			/*
			<summary>
				Gets the fill color of the textbox.
			</summary>
			*/
			intrusive_ptr<Color> GetFillColor();
			/*
			<summary>
				Sets the fill color of the textbox.
			</summary>
			*/
			void SetFillColor(intrusive_ptr<Color> value);
			/*
			<summary>
				Gets the fill effects.
			</summary>
		    <value>The fill effects.</value>
			*/
			intrusive_ptr<Background> GetFillEfects();
			/*
			<summary>
				Gets text box linestyle
			</summary>
			*/
			TextBoxLineStyle GetLineStyle();
			/*
			<summary>
				Sets text box linestyle
			</summary>
			*/
			void SetLineStyle(TextBoxLineStyle value);
			/*
			<summary>
				Gets textbox width
			</summary>
			*/
			float GetWidth();
			/*
			<summary>
				Sets textbox width
			</summary>
			*/
			void SetWidth(float value);
			/*
			<summary>
				Gets textbox height
			</summary>
			*/
			float GetHeight();
			/*
			<summary>
				Sets textbox height
			</summary>
			*/
			void SetHeight(float value);
			/*
			<summary>
				Gets line color.
			</summary>
			*/
			intrusive_ptr<Color> GetLineColor();
			/*
			<summary>
				Sets line color.
			</summary>
			*/
			void SetLineColor(intrusive_ptr<Color> value);
			/*
			<summary>
				Gets value which defines if
				there is a line around textbox shape
			</summary>
			*/
			bool GetNoLine();
			/*
			<summary>
				Sets value which defines if
				there is a line around textbox shape
			</summary>
			*/
			void SetNoLine(bool value);
			/*
			<summary>
				Gets textbox horizontal position
			</summary>
			*/
			float GetHorizontalPosition();
			/*
			<summary>
				Sets textbox horizontal position
			</summary>
			*/
			void SetHorizontalPosition(float value);
			/*
			<summary>
				Gets a value.Specifies whether the spape stretches to fit the text in the textbox.
				Default is false.
			</summary>
			*/
			bool GetIsFitShapeToText();
			/*
			<summary>
				Sets a value.Specifies whether the spape stretches to fit the text in the textbox.
				Default is false.
			</summary>
			*/
			void SetIsFitShapeToText(bool value);
			/*
			<summary>
				Gets textbox vertical position
			</summary>
			*/
			float GetVerticalPosition();
			/*
			<summary>
				Sets textbox vertical position
			</summary>
			*/
			void SetVerticalPosition(float value);
			/*
			<summary>
				Gets text Wrapping style
			</summary>
			*/
			TextWrappingStyle GetTextWrappingStyle();
			/*
			<summary>
				Sets text Wrapping style
			</summary>
			*/
			void SetTextWrappingStyle(TextWrappingStyle value);
			/*
			<summary>
				Gets wrapping type for textbox
			</summary>
			*/
			TextWrappingType GetTextWrappingType();
			/*
			<summary>
				Sets wrapping type for textbox
			</summary>
			*/
			void SetTextWrappingType(TextWrappingType value);
			/*
			<summary>
				Gets textbox line width
			</summary>
			*/
			float GetLineWidth();
			/*
			<summary>
				Sets textbox line width
			</summary>
			*/
			void SetLineWidth(float value);
			/*
			<summary>
				Gets line dashing for textbox
			</summary>
			*/
			LineDashing GetLineDashing();
			/*
			<summary>
				Sets line dashing for textbox
			</summary>
			*/
			void SetLineDashing(LineDashing value);
			/*
			<summary>
				Gets textbox horizontal alignment
			</summary>
			*/
			ShapeHorizontalAlignment GetHorizontalAlignment();
			/*
			<summary>
				Sets textbox horizontal alignment
			</summary>
			*/
			void SetHorizontalAlignment(ShapeHorizontalAlignment value);
			/*
			<summary>
				Gets textbox vertical alignment
			</summary>
			*/
			ShapeVerticalAlignment GetVerticalAlignment();
			/*
			<summary>
				Sets textbox vertical alignment
			</summary>
			*/
			void SetVerticalAlignment(ShapeVerticalAlignment value);
			/*
			<summary>
				Gets the text direction of the textbox.
			</summary>
			*/
			TextDirection GetLayoutFlowAlt();
			/*
			<summary>
				Sets the text direction of the textbox.
			</summary>
			*/
			void SetLayoutFlowAlt(TextDirection value);
			/*
			<summary>
				Gets the vertical anchoring of text. Default is top.
			</summary>
			*/
			ShapeVerticalAlignment GetTextAnchor();
			/*
			<summary>
				Sets the vertical anchoring of text. Default is top.
			</summary>
			*/
			void SetTextAnchor(ShapeVerticalAlignment value);
			/*
			<summary>
				Gets the internal margin.
			</summary>
		    <value>The internal margin.</value>
			*/
			intrusive_ptr<InternalMargin> GetInternalMargin();
			/*
			<summary>
				Clone textbox format.
			</summary>
			<returns></returns>
			*/
			intrusive_ptr<TextBoxFormat> Clone();
		private:
		};
	}
}