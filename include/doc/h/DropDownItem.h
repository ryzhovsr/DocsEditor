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
		class EXPORTS DropDownItem : public virtual DocumentSerializable
		{
		public:
			/*
			<summary>
				Gets text
			</summary>
			*/
			LPCWSTR_S GetText();
			/*
			<summary>
				Sets text
			</summary>
			*/
			void SetText(LPCWSTR_S value);
		private:
		};
	}
}