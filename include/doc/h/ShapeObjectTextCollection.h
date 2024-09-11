#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
		<summary>
			Class is responsible for saving the collection of text
			for each shape object (textbox, rectangle, etc.).
		</summary>
		*/
		class EXPORTS ShapeObjectTextCollection : public virtual Object
		{
		public:
			/*
			<summary>
				Add ShapeObject's text to text collection.
			</summary>
			<param name="shapeId">The shape id.</param>
			<param name="textBox">The text box.</param>
			*/
			void AddTextBox(int shapeId, intrusive_ptr<TextBox> textBox);
			/*
			<summary>
				Get ShapeObject's text body by text identifier.
			</summary>
			<param name="shapeId">The shape id.</param>
			<returns></returns>
			*/
			intrusive_ptr<TextBox> GetTextBox(int shapeId);
		private:
		};
	}
}