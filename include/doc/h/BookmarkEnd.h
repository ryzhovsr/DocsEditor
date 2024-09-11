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
		class EXPORTS BookmarkEnd : public virtual ParagraphBase, public virtual IDocumentObject
		{
			friend class Object;
		public:
			BookmarkEnd(intrusive_ptr<IDocument> document, LPCWSTR_S name);
			/*
			<summary>
				Gets the type of the document object.
			</summary>
		    <value>The type of the document object.</value>
			*/
			virtual DocumentObjectType GetDocumentObjectType();
			/*
			<summary>
				Gets the bookmark name.
			</summary>
		    <value>The name.</value>
			*/
			virtual LPCWSTR_S GetName();
		private:
			BookmarkEnd();
		};
	}
}