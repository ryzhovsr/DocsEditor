#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IDocumentObject.h"
#include "ShapeBase.h"
#include "Paragraph.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS Shape : public virtual ShapeBase, public virtual IDocumentObject
		{
		public:
			/*

			*/
			virtual DocumentObjectType GetDocumentObjectType();
			/*

			*/
			virtual bool GetHasImage();
			/*

			*/
			intrusive_ptr<Paragraph> GetFirstParagraph();
			/*

			*/
			intrusive_ptr<Paragraph> GetLastParagraph();
			/*
			<summary>
				 Returns true if this shape has a  chart.
			</summary>
			*/
			bool GetHasChart();
		private:
		};
	}
}