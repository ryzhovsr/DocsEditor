#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS MailMergeDataSet : public virtual Object
		{
		public:
			/*

			*/
			//System.Collections.Generic.List`1[[System.Object, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] GetDataSet ();
			/*

			*/
			//void Add (System.Object dataTable);
			/*
			<summary>
				Cleans MailMergeDataSet of any data by removing all MaillMergeDataTable
			</summary>
			*/
			void Clear();
		private:
		};
	}
}