#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IDocumentObject.h"
#include "Shape.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS ShapeObject : public virtual Shape, public virtual IDocumentObject
		{
			friend class Object;
		public:
			ShapeObject(intrusive_ptr<IDocument> doc);

			ShapeObject(intrusive_ptr<IDocument> doc, ShapeType shapeType);
			/*
			<summary>
				Returns a chart object.
					If there is a chart associated with this shape,
					it allows for the manipulation of chart.
			</summary>
			*/
			//intrusive_ptr<Chart> GetChart();
			/*
			<summary>
				Gets the type of the document object.
			</summary>
		<value>The type of the document object.</value>
			*/
			virtual DocumentObjectType GetDocumentObjectType();
			/*
			<summary>
				Gets shape object's character format.
			</summary>
			*/
			virtual intrusive_ptr<CharacterFormat> GetCharacterFormat();
			/*

			*/
			intrusive_ptr<Color> GetFillColor();
			/*

			*/
			void SetFillColor(intrusive_ptr<Color> value);
			/*

			*/
			void SetFillTransparency(double value);
			/*

			*/
			double GetStrokeWeight();
			/*

			*/
			void SetStrokeWeight(double value);
			/*

			*/
			intrusive_ptr<Color> GetStrokeColor();
			/*

			*/
			void SetStrokeColor(intrusive_ptr<Color> value);
			/*

			*/
			ShapeLineStyle GetLineStyle();
			/*

			*/
			void SetLineStyle(ShapeLineStyle value);
			/*
			<summary>
				Defines the line dashing of the stroke.
			</summary>
			*/
			LineDashing GetLineDashing();
			/*

			*/
			void SetLineDashing(LineDashing value);
			/*

			*/
			intrusive_ptr<WordArt> GetWordArt();
			/*

			*/
			bool GetExtrusionEnabled();
			/*

			*/
			bool GetShadowEnabled();
			/*
			<summary>
				Gets the child objects of the entity.
			</summary>
			*/
			virtual intrusive_ptr<DocumentObjectCollection> GetChildObjects();
		protected:
			ShapeObject();
		private:
		};
	}
}