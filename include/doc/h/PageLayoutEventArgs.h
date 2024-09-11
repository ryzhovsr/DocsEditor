#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
			<summary>
				Spire.Doc.Documents.Rendering.DocumentLayouter.PageLayoutEventArgs is the class containg event data
			 </summary>
		*/
		class EXPORTS PageLayoutEventArgs : public virtual Object
		{
		public:
			/*
			<summary>
				Gets the page number of documents.
			</summary>
			*/
			int GetPageIndex();
			/*
			<summary>
				Sets the page number of documents.
			</summary>
			*/
			void SetPageIndex(int value);
			/*
			<summary>
				Gets the document page informations.
			</summary>
			*/
			intrusive_ptr<PageSetup> GetPageSetup();
			/*
			<summary>
				Sets the document page informations.
			</summary>
			*/
			void SetPageSetup(intrusive_ptr<PageSetup> value);
		private:
		};
	}
}