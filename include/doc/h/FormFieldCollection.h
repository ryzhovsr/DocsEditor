#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "CollectionEx.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
			<summary>
				Represents a collection of form fields.
			</summary>
		*/
		class EXPORTS FormFieldCollection : public virtual CollectionEx
		{
		public:
			/*
			<summary>
				Gets the <see cref="!:Spire.Doc.FormField" /> at the specified index.
			</summary>
		    <value></value>
			*/
			intrusive_ptr<FormField> GetItem(int index);
			/*
			<summary>
				Gets the <see cref="!:Spire.Doc.FormField" /> by specified form field name.
			</summary>
		    <value></value>
			*/
			intrusive_ptr<FormField> GetItem(LPCWSTR_S formFieldName);
			/*
			<summary>
				Determines whether the specified collection contains item with specified name.
			</summary>
			<param name="itemName">Name of the item.</param>
			<returns></returns>
			*/
			bool ContainsName(LPCWSTR_S itemName);
		private:
			intrusive_ptr<FormField> CreateFieldByTypeName(IntPtrWithTypeName intPtrWithTypeName, Object* pParent);
		};
	}
}