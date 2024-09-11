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
		class EXPORTS HeadersFooters : public virtual DocumentSerializable
		{
		public:
			/*
			<summary>
				Gets default header.
			</summary>
			*/
			intrusive_ptr<HeaderFooter> GetHeader();
			/*
			<summary>
				Gets default footer.
			</summary>
			*/
			intrusive_ptr<HeaderFooter> GetFooter();
			/*
			<summary>
				Gets even header.
			</summary>
			*/
			intrusive_ptr<HeaderFooter> GetEvenHeader();
			/*
			<summary>
				Gets odd header ( This is also the default header ).
			</summary>
			*/
			intrusive_ptr<HeaderFooter> GetOddHeader();
			/*
			<summary>
				Gets even footer
			</summary>
			*/
			intrusive_ptr<HeaderFooter> GetEvenFooter();
			/*
			<summary>
				Gets odd footer ( This is also the default footer ).
			</summary>
			*/
			intrusive_ptr<HeaderFooter> GetOddFooter();
			/*
			<summary>
				Gets first page header.
			</summary>
			*/
			intrusive_ptr<HeaderFooter> GetFirstPageHeader();
			/*
			<summary>
				Gets first page footer.
			</summary>
			*/
			intrusive_ptr<HeaderFooter> GetFirstPageFooter();
			/*
			<summary>
				Detects whether all headers/footers are empty.
			</summary>
			*/
			bool GetIsEmpty();
			/*
			<summary>
				Gets TextBody at specified index.
			</summary>
			*/
			intrusive_ptr<HeaderFooter> GetItem(int index);
			/*
			<summary>
				Gets TextBody by specified HeaderFooter type.
			</summary>
			*/
			intrusive_ptr<HeaderFooter> GetItem(HeaderFooterType hfType);
			/*
			<summary>
				If set to True if this header or footer is linked in the previous section.
			</summary>
			*/
			bool GetLinkToPrevious();
			/*
			<summary>
				If set to True if this header or footer is linked in the previous section.
			</summary>
			*/
			void SetLinkToPrevious(bool value);
			/*

			*/
			//virtual System.Collections.IEnumerator GetEnumerator ();
		private:
		};
	}
}