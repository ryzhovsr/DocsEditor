#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
			<summary>
				Represents data during MergeField event.
			</summary>
		*/
		class EXPORTS MergeFieldEventArgs : public virtual Object
		{
		public:
			/*
			<summary>
		        Gets the document.
		    </summary>
		    <value>The document.</value>
			*/
			intrusive_ptr<IDocument> GetDocument();
			/*
			<summary>
		        Returns or sets field name
		    </summary>
			*/
			LPCWSTR_S GetFieldName();
			/*
			<summary>
		        Returns or sets field name
		    </summary
			*/
			//System.Object GetFieldValue ();
			Object* GetFieldValue();
			/*

			*/
			LPCWSTR_S GetTableName();
			/*

			*/
			int GetRowIndex();
			/*

			*/
			intrusive_ptr<CharacterFormat> GetCharacterFormat();
			/*

			*/
			LPCWSTR_S GetText();
			/*

			*/
			void SetText(LPCWSTR_S value);
			/*

			*/
			intrusive_ptr<IMergeField> GetCurrentMergeField();
			/*

			*/
			bool GetIsKeepTextFormat();
			/*

			*/
			void SetIsKeepTextFormat(bool value);
			/*
			<summary>
				Gets or sets if keep html text formatting.
			</summary>
			*/
			bool GetIsKeepHtmlTextFormat();
			/*

			*/
			void SetIsKeepHtmlTextFormat(bool value);
		private:
		};
	}
}