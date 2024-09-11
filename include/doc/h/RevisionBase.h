#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS RevisionBase : public virtual Object
		{
		public:
			/*
			<summary>
				Gets the author.
				Specifies the author for an annotation within a Word document.
			</summary>
			*/
			LPCWSTR_S GetAuthor();
			/*
			<summary>
				Gets the date time.
				Specifies the date information for an annotation within a Word document.
			</summary>
			*/
			intrusive_ptr<DateTime> GetDateTime();
		private:
		};
	}
}