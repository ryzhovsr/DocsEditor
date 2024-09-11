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
		class EXPORTS BookmarkStart : public virtual ParagraphBase, public virtual IDocumentObject
		{
			friend class Object;
		public:
			BookmarkStart(intrusive_ptr<IDocument> doc, LPCWSTR_S name);
			/*
			<summary>
				Gets the document.
			</summary>
			<value>The type of the document object.</value>
			*/
			intrusive_ptr<Document> GetDocument();
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
			*/
			virtual LPCWSTR_S GetName();
		private:
			BookmarkStart();
		};
	}
}