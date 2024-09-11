#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IDocumentObject.h"
#include "FormField.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS CheckBoxFormField : public virtual FormField, public virtual IDocumentObject
		{
			friend class Object;
		public:
			CheckBoxFormField(intrusive_ptr<IDocument> doc);
			/*
			<summary>
				Gets the type of the document object.
			</summary>
			<value>The type of the document object.</value>
			*/
			virtual DocumentObjectType GetDocumentObjectType();
			/*
			<summary>
				Gets size of checkbox.
			</summary>
			*/
			int GetCheckBoxSize();
			/*
			<summary>
				Sets size of checkbox.
			</summary>
			*/
			void SetCheckBoxSize(int value);
			/*
			<summary>
				Gets default checkbox value.
			</summary>
			*/
			bool GetDefaultCheckBoxValue();
			/*
			<summary>
				Sets default checkbox value.
			</summary>
			*/
			void SetDefaultCheckBoxValue(bool value);
			/*
			<summary>
				Gets Checked property.
			</summary>
			*/
			bool GetChecked();
			/*
			<summary>
				Sets Checked property.
			</summary>
			*/
			void SetChecked(bool value);
			/*
			<summary>
				Gets check box size type.
			</summary>
			*/
			CheckBoxSizeType GetSizeType();
			/*
			<summary>
				Sets check box size type.
			</summary>
			*/
			void SetSizeType(CheckBoxSizeType value);
		private:
			CheckBoxFormField();
		};
	}
}