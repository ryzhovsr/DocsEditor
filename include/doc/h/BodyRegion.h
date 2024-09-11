#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "DocumentBase.h"
#include "IBodyRegion.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS BodyRegion : public virtual DocumentBase, public virtual IBodyRegion
		{
		public:
			/*
			<summary>
				Gets the owner text body.
			</summary>
			<value>The owner text body.</value>
			*/
			intrusive_ptr<Body> GetOwnerTextBody();
			/*
			<summary>
				Gets a value indicating whether this item was inserted to the document.
			</summary>
			*/
			bool GetIsInsertRevision();
			/*
			<summary>
				Gets the insert revision for this objects.
				Note this can be null. If null does not have insert revision.
			</summary>
			*/
			intrusive_ptr<EditRevision> GetInsertRevision();
			/*
			<summary>
				Gets a value indicating whether this item was deleted from the document.
			</summary>
			*/
			bool GetIsDeleteRevision();
			/*
			<summary>
				Gets the delete revision for this objects.
				Note this can be null. If null does not have delete revision.
			</summary>
			*/
			intrusive_ptr<EditRevision> GetDeleteRevision();
			/*

			*/
			//virtual TextSelection* Find (System.Text.RegularExpressions.Regex pattern);
			/*

			*/
			//virtual int Replace (System.Text.RegularExpressions.Regex pattern,LPCWSTR_S replace);
			/*

			*/
			virtual int Replace(LPCWSTR_S given, LPCWSTR_S replace, bool caseSensitive, bool wholeWord);
			/*

			*/
			//virtual int Replace (System.Text.RegularExpressions.Regex pattern,TextSelection* textSelection);
			/*

			*/
			//virtual int Replace (System.Text.RegularExpressions.Regex pattern,TextSelection* textSelection,bool saveFormatting);
		private:
		};
	}
}