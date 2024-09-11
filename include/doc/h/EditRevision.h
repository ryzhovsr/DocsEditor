#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "RevisionBase.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS EditRevision : public virtual RevisionBase
		{
		public:
			/*
			<summary>
		        Indicates whether the run is inserted or deleted during the revision.
		    </summary>
			*/
			EditRevisionType GetType();
		private:
		};
	}
}