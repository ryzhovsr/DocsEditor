#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "SdtControlProperties.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
		<summary>
	        Common ancestor for <see cref="SdtDropDownList"/> and <see cref="SdtComboBox"/>
	    </summary>
		*/
		class EXPORTS SdtDropDownListBase : public virtual SdtControlProperties
		{
		public:
			/*
			<summary>
				Provides access to all list items <see cref="T:Spire.Doc.Documents.SdtListItem" /> of this <b>Sdt</b>
			</summary>
			*/
			intrusive_ptr<SdtListItemCollection> GetListItems();
			/*

			*/
			LPCWSTR_S GetLastValue();
			/*

			*/
			void SetLastValue(LPCWSTR_S value);
		private:
		};
	}
}