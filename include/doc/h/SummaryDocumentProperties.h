#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "DocumentSerializable.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS SummaryDocumentProperties : public virtual DocumentSerializable
		{
		public:
			/*
			<summary>
				Gets author name
			</summary>
			*/
			LPCWSTR_S GetAuthor();
			/*
			<summary>
				Sets author name
			</summary>
			*/
			void SetAuthor(LPCWSTR_S value);
			/*
			<summary>
				Gets application name
			</summary>
			*/
			LPCWSTR_S GetApplicationName();
			/*
			<summary>
				Sets application name
			</summary>
			*/
			void SetApplicationName(LPCWSTR_S value);
			/*
			<summary>
				Gets the document title
			</summary>
			*/
			LPCWSTR_S GetTitle();
			/*
			<summary>
				Sets the document title
			</summary>
			*/
			void SetTitle(LPCWSTR_S value);
			/*
			<summary>
				Gets the subject of the document
			</summary>
			*/
			LPCWSTR_S GetSubject();
			/*
			<summary>
				Sets the subject of the document
			</summary>
			*/
			void SetSubject(LPCWSTR_S value);
			/*
			<summary>
				Gets the document keywords
			</summary>
			*/
			LPCWSTR_S GetKeywords();
			/*
			<summary>
				Sets the document keywords
			</summary>
			*/
			void SetKeywords(LPCWSTR_S value);
			/*
			<summary>
				Gets the comments that provide additional information about the document
			</summary>
			*/
			LPCWSTR_S GetComments();
			/*
			<summary>
				Sets the comments that provide additional information about the document
			</summary>
			*/
			void SetComments(LPCWSTR_S value);
			/*
			<summary>
				Gets the template name of the document
			</summary>
			*/
			LPCWSTR_S GetTemplate();
			/*
			<summary>
				Sets the template name of the document
			</summary>
			*/
			void SetTemplate(LPCWSTR_S value);
			/*
			<summary>
				Gets the last author name
			</summary>
			*/
			LPCWSTR_S GetLastAuthor();
			/*
			<summary>
				Sets the last author name
			</summary>
			*/
			void SetLastAuthor(LPCWSTR_S value);
			/*
			<summary>
				Gets the document revision number
			</summary>
			*/
			LPCWSTR_S GetRevisionNumber();
			/*
			<summary>
				Sets the document revision number
			</summary>
			*/
			void SetRevisionNumber(LPCWSTR_S value);
			/*
			<summary>
				Gets the document total editing time
			</summary>
			*/
			intrusive_ptr<TimeSpan> GetTotalEditingTime();
			/*
			<summary>
				Sets the document total editing time
			</summary>
			*/
			void SetTotalEditingTime(intrusive_ptr<TimeSpan> value);
			/*
			<summary>
				Returns the last print date
			</summary>
			*/
			intrusive_ptr<DateTime> GetLastPrinted();
			/*
			<summary>
				Sets the last print date
			</summary>
			*/
			void SetLastPrinted(intrusive_ptr<DateTime> value);
			/*
			<summary>
				Gets the document creation date
			</summary>
			*/
			intrusive_ptr<DateTime> GetCreateDate();
			/*
			<summary>
				Sets the document creation date
			</summary>
			*/
			void SetCreateDate(intrusive_ptr<DateTime> value);
			/*
			<summary>
				Returns the last save date
			</summary>
			*/
			intrusive_ptr<DateTime> GetLastSaveDate();
			/*
			<summary>
				Sets the last save date
			</summary>
			*/
			void SetLastSaveDate(intrusive_ptr<DateTime> value);
			/*
			<summary>
				Gets document pages count
			</summary>
			*/
			int GetPageCount();
			/*
			<summary>
				Gets document words count
			</summary>
			*/
			int GetWordCount();
			/*
			<summary>
				Gets document characters count
			</summary>
			*/
			int GetCharCount();
			/*
			<summary>
				Gets document characters count(including spaces)
			</summary>
			*/
			int GetCharCountWithSpace();
			/*
			<summary>
				Returns thumbnail picture for document preview
			</summary>
			*/
			LPCWSTR_S GetThumbnail();
			/*
			<summary>
				Sets thumbnail picture for document preview
			</summary>
			*/
			void SetThumbnail(LPCWSTR_S value);
			/*
			<summary>
				Gets document security level
			</summary>
			*/
			int GetDocSecurity();
			/*
			<summary>
				Sets document security level
			</summary>
			*/
			void SetDocSecurity(int value);
			/*
			<summary>
				Gets summary count of document properties
			</summary>
			*/
			int GetCount();
			/*
			<summary>
				Adds the specified name.
			</summary>
			<param name="name">The name.</param>
			<param name="value">The value.</param>
			*/
			void Add(int key, intrusive_ptr<DocumentProperty> props);
		private:
		};
	}
}