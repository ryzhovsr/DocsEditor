#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS TextBodySelection : public virtual Object
		{
		public:
			TextBodySelection(intrusive_ptr<ParagraphBase> itemStart, intrusive_ptr<ParagraphBase> itemEnd);
			TextBodySelection(intrusive_ptr<IBody> textBody, int itemStartIndex, int itemEndIndex, int pItemStartIndex, int pItemEndIndex);
			/*
			<summary>
		        Gets the text body.
		    </summary>
		    <value>The text body.</value>
			*/
			intrusive_ptr<Body> GetTextBody();
			/*
			<summary>
		        Gets the start index of the text body item.
		    </summary>
		    <value>The start index of the item.</value>
			*/
			int GetItemStartIndex();
			/*
			<summary>
				Sets the start index of the text body item.
			</summary>
			*/
			void SetItemStartIndex(int value);
			/*
			<summary>
		        Gets the end index of the text body item.
		    </summary>
		    <value>The end index of the item.</value>
			*/
			int GetItemEndIndex();
			/*
			<summary>
				Sets the end index of the text body item.
			</summary>
			*/
			void SetItemEndIndex(int value);
			/*
			<summary>
		        Gets the start index of the paragraph item.
		    </summary>
		    <value>The start index of the item.</value>
			*/
			int GetParagraphItemStartIndex();
			/*
			<summary>
				Sets the start index of the paragraph item.
			</summary>
			*/
			void SetParagraphItemStartIndex(int value);
			/*
			<summary>
		        Gets the end index of the paragraph item.
		    </summary>
		    <value>The end index of the item.</value>
			*/
			int GetParagraphItemEndIndex();
			/*
			<summary>
				Sets the end index of the paragraph item.
			</summary>
			*/
			void SetParagraphItemEndIndex(int value);
		protected:
			TextBodySelection();
		private:
		};
	}
}