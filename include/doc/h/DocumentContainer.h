#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "DocumentBase.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS DocumentContainer : public virtual DocumentBase
		{
		public:
			/*
			<summary>
				Gets count of child object.
			</summary>
			<value></value>
			*/
			virtual int GetCount();
			/*
			<summary>
		        Returns the zero-based index of the specified entity.
		    </summary>
		    <param name="entity">the document object.</param>
		    <returns></returns>
			*/
			virtual int GetIndex(intrusive_ptr<IDocumentObject> entity);
		private:
		};
	}
}