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
		class EXPORTS PermissionEnd : public virtual ParagraphBase, public virtual IDocumentObject
		{
			friend class Object;
		public:
			PermissionEnd(intrusive_ptr<IDocument> document, LPCWSTR_S id);
			/*
			<summary>
				Gets the type of the document object.
			</summary>
			<value>The type of the document object.</value>
			*/
			virtual DocumentObjectType GetDocumentObjectType();
			/*
			<summary>
				Gets the permission id.
			</summary>
			<value>The name.</value>
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
			PermissionEnd();
		private:
		};
	}
}