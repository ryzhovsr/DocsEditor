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
		class EXPORTS DropDownFormField : public virtual FormField, public virtual IDocumentObject
		{
		public:
			/*
			<summary>
				Gets the type of the document object.
			</summary>
			<value>The type of the document object.</value>
			*/
			virtual DocumentObjectType GetDocumentObjectType();
			/*
			<summary>
				Gets selected drop down index.
			</summary>
			*/
			int GetDropDownSelectedIndex();
			/*
			<summary>
				Sets selected drop down index.
			</summary>
			*/
			void SetDropDownSelectedIndex(int value);
			/*
			<summary>
				Gets drop down items.
			</summary>
			*/
			intrusive_ptr<DropDownCollection> GetDropDownItems();
		private:
		};
	}
}