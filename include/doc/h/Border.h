#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "AttrCollection.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS Border : public virtual AttrCollection
		{
		public:
			/*
			<summary>
				Gets color of the border.
			</summary>
			*/
			intrusive_ptr<Color> GetColor();
			/*
			<summary>
				Sets color of the border.
			</summary>
			*/
			void SetColor(intrusive_ptr<Color> value);
			/*
			<summary>
				Gets width of the border.
			</summary>
			*/
			float GetLineWidth();
			/*
			<summary>
				Sets width of the border.
			</summary>
			*/
			void SetLineWidth(float value);
			/*
			<summary>
				Gets style of the border.
			</summary>
			*/
			BorderStyle GetBorderType();
			/*
			<summary>
				Sets  style of the border.
			</summary>
			*/
			void SetBorderType(BorderStyle value);
			/*
			<summary>
				Returns width of space to maintain between border and text within border.
			</summary>
			*/
			float GetSpace();
			/*
			<summary>
				Sets width of space to maintain between border and text within border.
			</summary>
			*/
			void SetSpace(float value);
			/*
			<summary>
			   Gets a value indicating whether the border has a shadow.
			</summary>
			<remarks>
			<p>In Microsoft Word, for a border to have a shadow, the borders on all four sides
			(left, top, right and bottom) should be of the same type, width, color and all should have
			the Shadow property set to true.</p>
			</remarks>
			*/
			bool GetShadow();
			/*
			<summary>
			   Sets a value indicating whether the border has a shadow.
			</summary>
			<remarks>
			<p>In Microsoft Word, for a border to have a shadow, the borders on all four sides
			(left, top, right and bottom) should be of the same type, width, color and all should have
			the Shadow property set to true.</p>
			</remarks>
			*/
			void SetShadow(bool value);
			/*
			<summary>
				Gets a value indicating whether format is default.
			</summary>
			<value>
			<c>true</c> if format is default; otherwise,<c>false</c>.</value>
			*/
			virtual bool GetIsDefault();
			/*
			<summary>
				Initialize Border style.
			</summary>
			<param name="color">The color.</param>
			<param name="lineWidth">Width of the line.</param>
			<param name="borderType">Type of the border.</param>
			<param name="shadow">if it specifies shadow, set to <c>true</c>.</param>
			*/
			void InitFormatting(intrusive_ptr<Color> color, float lineWidth, BorderStyle borderType, bool shadow);
		private:
		};
	}
}