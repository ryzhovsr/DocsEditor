#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IDocumentObject.h"
#include "IParagraphBase.h"
#include "ITextRange.h"
#include "IField.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
		<summary>
			Interface publishes merge field functionality
		</summary>
		*/
		class EXPORTS IMergeField : public virtual IField, public virtual ITextRange, public virtual IParagraphBase, public virtual IDocumentObject
		{
		public:
			/*
			<summary>
				Returns field name
			</summary>
			*/
			virtual LPCWSTR_S GetFieldName() = 0;
			/*
			<summary>
				Sets field name
			</summary>
			*/
			virtual void SetFieldName(LPCWSTR_S value) = 0;
			/*
			<summary>
				Gets "text before" switching value
			</summary>
			*/
			virtual LPCWSTR_S GetTextBefore() = 0;
			/*
			<summary>
				Sets "text before" switching value
			</summary>
			*/
			virtual void SetTextBefore(LPCWSTR_S value) = 0;
			/*
			<summary>
				Gets "text after" switching value
			</summary>
			*/
			virtual LPCWSTR_S GetTextAfter() = 0;
			/*
			<summary>
				Sets "text after" switching value
			</summary>
			*/
			virtual void SetTextAfter(LPCWSTR_S value) = 0;
		private:
		};
	}
}