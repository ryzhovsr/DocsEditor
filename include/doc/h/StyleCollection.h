#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "DocumentSerializableCollection.h"
#include "IStyleCollection.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS StyleCollection : public virtual DocumentSerializableCollection, public virtual IStyleCollection
		{
		public:
			virtual int GetCount();
			/*
			<summary>
				Gets the at the specified index.
			</summary>
		    <value></value>
			<returns></returns>
			*/
			virtual intrusive_ptr<IStyle> GetItem(int index);
			/*
			<summary>
				Adds Style to collection
			</summary>
			<param name="style">The style.</param>
			<returns></returns>
			*/
			virtual int Add(intrusive_ptr<IStyle> style);
			/*
			<summary>
				Applys the document default paragraph format and character format to normal style.
			</summary>
			*/
			void ApplyDocDefaultsToNormalStyle();
			/*
			<summary>
				Finds Style by name
			</summary>
			<param name="name">The name.</param>
			<returns></returns>
			*/
			virtual intrusive_ptr<Style> FindByName(LPCWSTR_S name);
			/*
			<summary>
				Finds Style by name
			</summary>
			<param name="name">The name.</param>
			<param name="styleType">Type of the style.</param>
			<returns></returns>
			*/
			virtual intrusive_ptr<IStyle> FindByName(LPCWSTR_S name, StyleType styleType);
			/*
			<summary>
				Finds Style by id
			</summary>
			<param name="styleId">The style id.</param>
			<returns></returns>
			*/
			intrusive_ptr<IStyle> FindById(int styleId);
			/*
			<summary>
				Finds Style by istd.
			</summary>
			<param name="istd">The style istd.</param>
			<returns></returns>
			*/
			intrusive_ptr<IStyle> FindByIstd(int istd);
			/*
			<summary>
				Finds Style by identifier
			</summary>
			<param name="sIdentifier">The style identifier.
					The parameter value is the <see cref="T:Spire.Doc.Documents.BuiltinStyle" /> enumeration value
					or the <see cref="T:Spire.Doc.Documents.DefaultTableStyle" /> enumeration value.</param>
			<returns></returns>
			*/
			intrusive_ptr<IStyle> FindByIdentifier(int sIdentifier);
		private:
			virtual intrusive_ptr<IStyle> Create(IntPtrWithTypeName intPtrWithTypeName, Object* pParent);
		};
	}
}