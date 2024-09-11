#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IDocumentObject.h"
#include "Field.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS SequenceField : public virtual Field, public virtual IDocumentObject
		{
			friend class Object;
		public:
			SequenceField(intrusive_ptr<IDocument> doc);
			/*
			<summary>
				Gets the type of the document object.
			</summary>
		    <value>The type of the document object.</value>
			*/
			virtual DocumentObjectType GetDocumentObjectType();
			/*
			<summary>
				Gets the formatting string
			</summary>
			*/
			LPCWSTR_S GetFormattingString();
			/*
			<summary>
				Returns the type of caption numbering
			</summary>
			*/
			CaptionNumberingFormat GetNumberFormat();
			/*
			<summary>
				Sets the type of caption numbering
			</summary>
			*/
			void SetNumberFormat(CaptionNumberingFormat value);
			/*
			<summary>
				Returns caption name
			</summary>
			*/
			LPCWSTR_S GetCaptionName();
			/*
			<summary>
		        Sets caption name
			</summary>
			*/
			void SetCaptionName(LPCWSTR_S value);
		protected:
			SequenceField();
		private:
		};
	}
}