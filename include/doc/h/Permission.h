#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS Permission : public virtual Object
		{
		public:
			/*
			<summary>
				Gets permission id.
			</summary>
			*/
			LPCWSTR_S GetId();
			/*
			<summary>
				Gets permission editorgroup.
			</summary>
			*/
			EditingGroup GetEditorGroup();
			/*
			<summary>
				Gets the Permission start.
			</summary>
			*/
			intrusive_ptr<PermissionStart> GetPermissionStart();
			/*
			<summary>
				Gets the Permission end.
			</summary>
			*/
			intrusive_ptr<PermissionEnd> GetPermissionEnd();
		private:
		};
	}
}