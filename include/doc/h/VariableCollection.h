#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS VariableCollection : public virtual Object
		{
		public:
			/*
			<summary>
				Gets the variable with the specified name.
			</summary>
			*/
			LPCWSTR_S GetItem(LPCWSTR_S name);
			/*
			<summary>
				Sets the variable with the specified name.
			</summary>
			*/
			void SetItem(LPCWSTR_S name, LPCWSTR_S value);
			/*
			<summary>
				Gets the count of variables.
			</summary>
			*/
			int GetCount();
			/*
			<summary>
				Adds variable to document.
			</summary>
			<param name="name">The name.</param>
			<param name="value">The value.</param>
			*/
			void Add(LPCWSTR_S name, LPCWSTR_S value);
			/*
			<summary>
				Gets variable's key by the index.
			</summary>
			<param name="index">The index.</param>
			<returns></returns>
			*/
			LPCWSTR_S GetNameByIndex(int index);
			/*
			<summary>
				Gets variable's value by the index.
			</summary>
			<param name="index">The index.</param>
			<returns></returns>
			*/
			LPCWSTR_S GetValueByIndex(int index);
			/*
			<summary>
				Removes document variable with specified name from the document.
			</summary>
			<param name="name">The name.</param>
			*/
			void Remove(LPCWSTR_S name);
			/*

			*/
			//virtual System.Collections.IEnumerator GetEnumerator ();
		private:
		};
	}
}