#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "SummaryDocumentProperties.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS BuiltinDocumentProperties : public virtual SummaryDocumentProperties
		{
		public:
			/*
			<summary>
				Gets the category of the document.
			</summary>
			*/
			LPCWSTR_S GetCategory();
			/*
			<summary>
				Sets the category of the document.
			</summary>
			*/
			void SetCategory(LPCWSTR_S value);
			/*
			<summary>
				Gets the number of bytes in the document.
			</summary>
			*/
			int GetBytesCount();
			/*
			<summary>
				Gets the number of lines in the document.
			</summary>
			*/
			int GetLinesCount();
			/*
			<summary>
				Gets the number of paragraphs in the document.
			</summary>
			*/
			int GetParagraphCount();
			/*
			<summary>
				Gets document characters count(including spaces)
			</summary>
			*/
			int GetCharCountWithSpace();
			/*
			<summary>
				Gets slide count.
			</summary>
			*/
			int GetSlideCount();
			/*
			<summary>
				Gets Note count.
			</summary>
			*/
			int GetNoteCount();
			/*
			<summary>
				Gets hidden count
			</summary>
			*/
			int GetHiddenCount();
			/*
			<summary>
				Returns Company property.
			</summary>
			*/
			LPCWSTR_S GetCompany();
			/*
			<summary>
				Sets Company property.
			</summary>
			*/
			void SetCompany(LPCWSTR_S value);
			/*
			<summary>
				Returns HyperLinkBase property.
			</summary>
			*/
			LPCWSTR_S GetHyperLinkBase();
			/*
			<summary>
				Sets HyperLinkBase property.
			</summary>
			*/
			void SetHyperLinkBase(LPCWSTR_S value);
			/*
			<summary>
				Gets Manager property.
			</summary>
			*/
			LPCWSTR_S GetManager();
			/*
			<summary>
				Sets Manager property.
			</summary>
			*/
			void SetManager(LPCWSTR_S value);
			/*
			<summary>
				Gets the document status.
			</summary>
			*/
			LPCWSTR_S GetContentStatus();
			/*
			<summary>
				Sets the document status.
			</summary>
			*/
			void SetContentStatus(LPCWSTR_S value);
			/*
			<summary>
			   Clone.
			</summary>
			<returns></returns>
			*/
			intrusive_ptr<BuiltinDocumentProperties> Clone();
		private:
		};
	}
}