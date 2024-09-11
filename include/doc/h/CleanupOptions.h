#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS CleanupOptions : public virtual Object
		{
		public:
			/*

			*/
			bool GetUnusedStyles();
			/*

			*/
			void SetUnusedStyles(bool value);
			/*

			*/
			bool GetUnusedLists();
			/*

			*/
			void SetUnusedLists(bool value);
		private:
		};
	}
}