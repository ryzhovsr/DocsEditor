#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IDocumentObject.h"
#include "ParagraphBase.h"
#include "ICompositeObject.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
		<summary>
			Defines the Office Math class such as function, equation
		</summary>
		*/
		class EXPORTS OfficeMath : public virtual ParagraphBase, public virtual IDocumentObject, public virtual ICompositeObject
		{
			friend class Object;
		public:
			OfficeMath(intrusive_ptr<Document> doc);

			OfficeMath(intrusive_ptr<Document> doc, intrusive_ptr<MathObject> officeMathElement);
			/*
			<summary>
				Gets the type of the document object.
			</summary>
			<value>The type of the document object.</value>
			*/
			virtual DocumentObjectType GetDocumentObjectType();
			/*
			<summary>
				Gets the parent paragraph.
			</summary>
			<value>The parent paragraph.</value>
			*/
			intrusive_ptr<Paragraph> GetParentParagraph();
			/*
			<summary>
				Froms the mathML code.
			</summary>
			<param name="mathMLCode">The Math ML code.</param>
			*/
			void FromMathMLCode(LPCWSTR_S mathMLCode);
			/*
			<summary>
				Froms the latex math code.
			</summary>
			<param name="latexMathCode">The latex math code.</param>
			*/
			void FromLatexMathCode(LPCWSTR_S latexMathCode);
			/*
			<summary>
				Save the OfficeMath object as Image stream
			</summary>
			*/
			intrusive_ptr<Stream> SaveImageToStream(ImageType imageType);
			/*
			<summary>
				To the mathML code.
			</summary>
			<returns>System.String.</returns>
			*/
			LPCWSTR_S ToMathMLCode();
			/*

			*/
			virtual intrusive_ptr<DocumentObjectCollection> GetChildObjects();
		protected:
			OfficeMath();
		private:
		};
	}
}