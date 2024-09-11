#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "WordAttrCollection.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
			<summary>
				Represents a collection of four borders. <see cref="!:Spire.Doc.Border" /></summary>
		*/
		class EXPORTS Borders : public virtual WordAttrCollection
		{
		public:
			/*
			<summary>
				Gets whether the border exists
			</summary>
			*/
			bool GetNoBorder();
			/*
			<summary>
				Gets left border.
			</summary>
			*/
			intrusive_ptr<Border> GetLeft();
			/*
			<summary>
				Gets top border.
			</summary>
			*/
			intrusive_ptr<Border> GetTop();
			/*
			<summary>
				Gets right border.
			</summary>
			*/
			intrusive_ptr<Border> GetRight();
			/*
			<summary>
				Gets bottom border.
			</summary>
			*/
			intrusive_ptr<Border> GetBottom();
			/*
			<summary>
				Gets vertical border.
			</summary>
			*/
			intrusive_ptr<Border> GetVertical();
			/*
			<summary>
				Gets horizontal border.
			</summary>
			*/
			intrusive_ptr<Border> GetHorizontal();
			/*
			<summary>
				Gets diagonal border from top left corner to bottom right corner.
			</summary>
			*/
			intrusive_ptr<Border> GetDiagonalDown();
			/*
			<summary>
				Gets diagonal border from bottom left corner to top right corner.
			</summary>
			*/
			intrusive_ptr<Border> GetDiagonalUp();
			/*

			*/
			void SetColor(intrusive_ptr<Color> value);
			/*
			<summary>
			   Sets width of the borders.
			</summary>
			*/
			void SetLineWidth(float value);
			/*

			*/
			void SetOnlyLineWidth(float lineWidth);
			/*
			<summary>
			   Sets style of the borders.
			</summary>
			*/
			void SetBorderType(BorderStyle value);
			/*
			 <summary>
			   Sets width of space to maintain between borders and text within borders.
			 </summary>
			*/
			void SetSpace(float value);
			/*
			 <summary>
			   Sets whether borders are drawn with shadow.
			 </summary>
			*/
			void SetIsShadow(bool value);
			/*
			<summary>
				Gets a value indicating whether format is default.
			</summary>
			<value>
			<c>true</c> if format is default; otherwise,<c>false</c>.</value>&gt;

			*/
			virtual bool GetIsDefault();
			/*
			<summary>
				Clones self.
			</summary>
			<returns></returns>
			*/
			intrusive_ptr<Borders> Clone();
			/*

			*/
			//bool EqualsByValues (System.Object obj);
			/*
			<summary>
			   Gets left key.
			</summary
			*/
			static int LeftKey();
			/*
			<summary>
			   Gets top key.
			</summary
			*/
			static int TopKey();
			/*
			<summary>
			   Gets bottom key.
			</summary
			*/
			static int BottomKey();
			/*
			<summary>
			   Gets right key.
			</summary
			*/
			static int RightKey();
			/*
			<summary>
			   Gets vertical key.
			</summary
			*/
			static int VerticalKey();
			/*
			<summary>
			   Gets horizontal key.
			</summary
			*/
			static int HorizontalKey();
			/*
			<summary>
			   Gets diagonalDown key.
			</summary
			*/
			static int DiagonalDownKey();
			/*
			<summary>
			   Gets diagonalUp key.
			</summary
			*/
			static int DiagonalUpKey();
		private:
		};
	}
}