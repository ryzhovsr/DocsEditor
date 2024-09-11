#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS MergeGroupEventArgs : public virtual Object
		{
		public:
			/*
			<summary>
				Gets the document.
			</summary>
			*/
			intrusive_ptr<IDocument> GetDocument();
			/*
			<summary>
				Gets the Table Name
			</summary>
			*/
			LPCWSTR_S GetTableName();
			/*
			<summary>
				Gets the group name.
			</summary>
			*/
			LPCWSTR_S GetGroupName();
			/*
			<summary>
				Gets the merge field.
			</summary>
			*/
			intrusive_ptr<IMergeField> GetMergeField();
			/*
			<summary>
				Gets the index of the row.
			</summary>
			*/
			int GetRowIndex();
			/*
			<summary>
				Gets the count of the row.
			</summary>
			*/
			int GetRowCount();
			/*

			*/
			GroupEventType GetEventType();
		private:
		};
	}
}