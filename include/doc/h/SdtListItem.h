#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
		<summary>
		    Initializes a new instance of this class.
		</summary>
		*/
		class EXPORTS SdtListItem : public virtual Object
		{
			friend class Object;
		public:
			SdtListItem(LPCWSTR_S displayText, LPCWSTR_S value);

			SdtListItem(LPCWSTR_S value);
			/*
			<summary>
		        Gets the text to display in the run content in place of the <see cref="Value"/> attribute contents for this list item.
		    </summary>
		    <remarks>
		    <para>Cannot be null and cannot be an empty string.</para>
		    </remarks>
			*/
			LPCWSTR_S GetDisplayText();
			/*
			<summary>
				Sets the text to display in the run content in place of the <see cref="Value"/> attribute contents for this list item.
			</summary>
			<remarks>
			<para>Cannot be null and cannot be an empty string.</para>
			</remarks>
			*/
			void SetDisplayText(LPCWSTR_S value);
			/*
			<summary>
		        Gets the value of this list item.
		    </summary>
		    <remarks>
		    <para>Cannot be null and cannot be an empty string.</para>
		    </remarks>
			*/
			LPCWSTR_S GetValue();
			/*
			<summary>
				Sets the value of this list item.
			</summary>
			<remarks>
			<para>Cannot be null and cannot be an empty string.</para>
			</remarks>
			*/
			void SetValue(LPCWSTR_S value);
		protected:
			SdtListItem();
		private:
		};
	}
}