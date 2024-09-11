#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IFieldsEventArgs.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
			<summary>
				Class AskFieldEventArgs;
			</summary>
		*/
		class EXPORTS AskFieldEventArgs : public virtual Object, public virtual IFieldsEventArgs
		{
		public:
			/*
			<summary>
				Gets
			</summary>
			*/
			virtual intrusive_ptr<Field> GetField();
			/*
			<summary>
				Gets the prompt text;
			</summary>
			*/
			LPCWSTR_S GetPromptText();
			/*
			<summary>
				Gets the default response.
			</summary>
			*/
			LPCWSTR_S GetDefaultResponse();
			/*
			<summary>
				Gets the response text.
			</summary>
			*/
			LPCWSTR_S GetResponseText();
			/*
			<summary>
				Sets the response text.
			</summary>
			*/
			void SetResponseText(LPCWSTR_S value);
			/*
			<summary>
				Gets a value indicating whether cancel to answer the question.
			</summary>
			*/
			bool GetCancel();
			/*
			<summary>
				Sets a value indicating whether cancel to answer the question.
			</summary>
			*/
			void SetCancel(bool value);
			/*
			<summary>
				Gets the name of bookmark.
			</summary>
			*/
			LPCWSTR_S GetBookmarkName();
		private:
		};
	}
}