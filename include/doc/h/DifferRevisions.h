#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
			<summary>
				Class difer revisions.
			</summary>
		*/
		class EXPORTS DifferRevisions : public virtual Object
		{
			friend class Object;
		public:
			/*

			*/
			virtual void Dispose();
			DifferRevisions(intrusive_ptr<Document> doc);
			/*
			<summary>
				Gets the delete revisions.
			</summary>
			*/
			//System.Collections.Generic.List`1[[Spire.Doc.DocumentObject, Spire.Doc, Version=10.9.9.0, Culture=neutral, PublicKeyToken=663f351905198cb3]] GetDeleteRevisions ();
			/*
			<summary>
				Gets the insert revisions.
			</summary>
			*/
			//System.Collections.Generic.List`1[[Spire.Doc.DocumentObject, Spire.Doc, Version=10.9.9.0, Culture=neutral, PublicKeyToken=663f351905198cb3]] GetInsertRevisions ();
		private:
			DifferRevisions();
		};
	}
}