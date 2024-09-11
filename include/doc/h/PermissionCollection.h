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
				A collection of <see cref="T:Spire.Doc.Permission" /> objects that
				represent the permission in the document.
			</summary>
		*/
		class EXPORTS PermissionCollection : public virtual CollectionEx
		{
		public:
			/*
			<summary>
				Gets the <see cref="T:Spire.Doc.Permission" /> with the specified id.
			</summary>
		    <value></value>
			*/
			intrusive_ptr<Permission> GetItem(LPCWSTR_S id);
			/*
			<summary>
				Gets the <see cref="T:Spire.Doc.Permission" /> at the specified index.
			</summary>
		    <value></value>
			*/
			intrusive_ptr<Permission> GetItem(int index);
			/*
			<summary>
				Finds <see cref="T:Spire.Doc.Permission" /> object by specified id
			</summary>
			<param name="name">The Permission id</param>
			<returns></returns>
			*/
			intrusive_ptr<Permission> FindById(LPCWSTR_S id);
			/*
			<summary>
				Removes a permission at the specified index.
			</summary>
			<param name="index">The index.</param>
			*/
			void RemoveAt(int index);
			/*
			<summary>
				Removes the specified permission.
			</summary>
			<param name="permission">The permission.</param>
			*/
			void Remove(intrusive_ptr<Permission> permission);
			/*
			<summary>
				Removes all permissions from the document.
			</summary>
			*/
			void Clear();
		private:
		};
	}
}