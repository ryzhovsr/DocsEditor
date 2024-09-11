#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "ParagraphBase.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS ShapeBase : public virtual ParagraphBase
		{
		public:
			/*

			*/
			virtual bool GetHasImage();
			/*

			*/
			virtual float GetVerticalPosition();
			/*

			*/
			virtual void SetVerticalPosition(float value);
			/*

			*/
			double GetRight();
			/*

			*/
			double GetBottom();
			/*

			*/
			double GetWidth();
			/*

			*/
			void SetWidth(double value);
			/*

			*/
			double GetHeight();
			/*

			*/
			void SetHeight(double value);
			/*

			*/
			double GetDistanceTop();
			/*

			*/
			void SetDistanceTop(double value);
			/*

			*/
			double GetDistanceBottom();
			/*

			*/
			void SetDistanceBottom(double value);
			/*

			*/
			double GetDistanceLeft();
			/*

			*/
			void SetDistanceLeft(double value);
			/*

			*/
			double GetDistanceRight();
			/*

			*/
			void SetDistanceRight(double value);
			/*

			*/
			double GetRotation();
			/*

			*/
			void SetRotation(double value);
			/*

			*/
			int GetZOrder();
			/*

			*/
			void SetZOrder(int value);
			/*

			*/
			intrusive_ptr<RectangleF> AdjustWithEffects(intrusive_ptr<RectangleF> source);
			/*

			*/
			ShapeType GetShapeType();
			/*

			*/
			virtual HorizontalOrigin GetHorizontalOrigin();
			/*

			*/
			virtual void SetHorizontalOrigin(HorizontalOrigin value);
			/*

			*/
			virtual VerticalOrigin GetVerticalOrigin();
			/*

			*/
			virtual void SetVerticalOrigin(VerticalOrigin value);
			/*

			*/
			virtual ShapeHorizontalAlignment GetHorizontalAlignment();
			/*

			*/
			virtual void SetHorizontalAlignment(ShapeHorizontalAlignment value);
			/*

			*/
			virtual ShapeVerticalAlignment GetVerticalAlignment();
			/*

			*/
			virtual void SetVerticalAlignment(ShapeVerticalAlignment value);
			/*

			*/
			TextWrappingStyle GetWrapType();
			/*

			*/
			void SetWrapType(TextWrappingStyle value);
			/*

			*/
			virtual TextWrappingStyle GetTextWrappingStyle();
			/*

			*/
			virtual void SetTextWrappingStyle(TextWrappingStyle value);
			/*

			*/
			virtual TextWrappingType GetTextWrappingType();
			/*

			*/
			virtual void SetTextWrappingType(TextWrappingType value);
			/*

			*/
			intrusive_ptr<Point> GetCoordOrigin();
			/*

			*/
			void SetCoordOrigin(intrusive_ptr<Point> value);
			/*

			*/
			intrusive_ptr<Size> GetCoordSize();
			/*

			*/
			void SetCoordSize(intrusive_ptr<Size> value);
			/*

			*/
			bool GetIsSignatureLine();
			/*

			*/
			intrusive_ptr<SizeF> GetSize();
			/*

			*/
			//System.Object GetDirectShapeAttr (int key);
			/*

			*/
			//System.Object FetchInheritedShapeAttr (int key);
			/*

			*/
			//System.Object FetchShapeAttr (int key);
			/*

			*/
			//void SetShapeAttr (int key,System.Object value);
			/*

			*/
			virtual void RemoveShapeAttr(int key);
			/*

			*/
			//virtual System.Object GetDirectShapeAttribute (int key);
			/*

			*/
			//virtual System.Object GetInheritedShapeAttribute (int key);
			/*

			*/
			//virtual System.Object GetShapeAttribute (int key);
			/*

			*/
			//virtual void SetShapeAttribute (int key,System.Object value);
			/*

			*/
			virtual void RemoveShapeAttribute(int key);
			/*

			*/
			virtual bool HasKey(int key);
			/*

			*/
			intrusive_ptr<PointF> LocalToParent(intrusive_ptr<PointF> value);
			/*

			*/
			void SetShapeType(ShapeType shapeType);
			/*
			<summary>
				Gets the child objects of the entity.
			</summary>
			*/
			virtual intrusive_ptr<DocumentObjectCollection> GetChildObjects();
			/*
			<summary>
				Gets or sets the alternative text.
			</summary>
			*/
			virtual LPCWSTR_S GetAlternativeText();
			/*

			*/
			virtual void SetAlternativeText(LPCWSTR_S value);
			/*

			*/
			virtual float GetHorizontalPosition();
			/*

			*/
			virtual void SetHorizontalPosition(float value);
		private:
		};
	}
}