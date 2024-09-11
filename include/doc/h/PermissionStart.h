#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IDocumentObject.h"
#include "ParagraphBase.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS PermissionStart : public virtual ParagraphBase, public virtual IDocumentObject
		{
			friend class Object;
		public:
			PermissionStart(intrusive_ptr<IDocument> doc, LPCWSTR_S id);
			/*
			<summary>
				Gets the type of the document object.
			</summary>
			<value>The type of the document object.</value>
			*/
			virtual DocumentObjectType GetDocumentObjectType();
			/*
			<summary>
				Gets the permissionstart id.
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

			*/
			void SetEditorGroup(EditingGroup value);
		protected:
			PermissionStart();
		private:
		};
	}
}