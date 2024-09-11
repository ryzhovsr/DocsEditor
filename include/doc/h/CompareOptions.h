#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
			<summary>
				Document comparison parameter settings.
			</summary>
		*/
		class EXPORTS CompareOptions : public virtual Object
		{
		public:
			CompareOptions();
			/*
			<summary>
				Gets a value indicating whether to ignore format comparisons when comparing documents.
				The default is false.
			</summary>
			*/
			bool GetIgnoreFormatting();
			/*
			<summary>
				Sets a value indicating whether to ignore format comparisons when comparing documents.
				The default is false.
			</summary>
			*/
			void SetIgnoreFormatting(bool value);
		private:
		};
	}
}