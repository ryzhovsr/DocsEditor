#pragma once
#include "pch.h"
#include "TextRange.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS TextSelection : public virtual Object
		{
		public:
			/*
			<summary>
		        Gets the selected text.
		    </summary>
		    <value>The selected text.</value>
			*/
			LPCWSTR_S GetSelectedText();
			/*
			<summary>
		        Gets the <see cref="System.String"/> at the specified index.
		    </summary>
		    <value></value>
			*/
			LPCWSTR_S GetItem(int index);
			/*
			<summary>
				Sets the <see cref="System.String"/> at the specified index.
			</summary>
			<value></value>
			*/
			void SetItem(int index, LPCWSTR_S value);
			/*
			<summary>
		        Gets the count of text chunks.
		    </summary>
		    <value>The count.</value>
			*/
			int GetCount();
			/*
		    <summary>
		        Gets the ranges in one paragraph.
		    </summary>
		    <returns></returns>
			*/
			std::vector<intrusive_ptr<TextRange>> GetRanges();
			/*
            <summary>
                Gets as range. more than one paragraph,every paragraph to one text range.
			</summary>
			*/
			std::vector<intrusive_ptr<TextRange>> GetAsRange();
			/*
			<summary>
				Gets as range. more than one paragraph,every paragraph to one text range.e
			</summary>
            <param name="IsCopyFormat">Is copy existing formats to textrange</param>
			*/
			std::vector<intrusive_ptr<TextRange>> GetAsRange(bool isCopyFormat);
			/*
			<summary>
	            Gets as one range.
	        </summary>
	        <returns></returns>
			*/
			intrusive_ptr<TextRange> GetAsOneRange();
			/*
			<summary>
		        Gets as one range.
		    </summary>
		    <param name="IsCopyFormat">Is copy existing formats to textrange</param>
		    <returns></returns>
			*/
			intrusive_ptr<TextRange> GetAsOneRange(bool IsCopyFormat);
			/*

			*/
			//virtual System.Collections.IEnumerator GetEnumerator ();
		private:
		};
	}
}