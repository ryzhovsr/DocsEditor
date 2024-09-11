#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IDocumentObject.h"
#include "ParagraphBase.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS WatermarkBase : public virtual ParagraphBase, public virtual IDocumentObject
		{
		public:
			/*
			<summary>
				Gets the type of the document object.
			</summary>
			*/
			virtual DocumentObjectType GetDocumentObjectType();
			/*
			<summary>
				Gets the watermark type.
			</summary>
			*/
			WatermarkType GetType();
		private:
		};
	}
}