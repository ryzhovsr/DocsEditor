#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "DocumentSerializable.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS CustomDocumentProperties : public virtual DocumentSerializable
		{
		public:
			/*

			*/
			//System.Collections.Generic.Dictionary`2[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[Spire.Doc.DocumentProperty, Spire.Doc, Version=10.9.9.0, Culture=neutral, PublicKeyToken=663f351905198cb3]] GetCustomHash ();
			/*
			<summary>
				Gets property by specified name.
			</summary>
			*/
			intrusive_ptr<DocumentProperty> GetItem(LPCWSTR_S name);
			/*
			<summary>
				Gets property by specified index.
			</summary>
			*/
			intrusive_ptr<DocumentProperty> GetItem(int index);
			/*
			<summary>
				Gets count of the properties.
			</summary>
			*/
			int GetCount();
			/*
			<summary>
				Adds the specified name.
			</summary>
			<param name="name">The name.</param>
			<param name="value">The value.</param>
			<returns></returns>
			*/
			intrusive_ptr<DocumentProperty> Add(LPCWSTR_S name, intrusive_ptr<Object> value);
			/*
			<summary>
				Remove property specified by name.
			</summary>
			<param name="name">The name.</param>
			*/
			void Remove(LPCWSTR_S name);
			/*
			<summary>
				Clones this instance.
			</summary>
			<returns></returns>
			*/
			intrusive_ptr<CustomDocumentProperties> Clone();
		private:
		};
	}
}