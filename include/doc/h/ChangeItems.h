#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
			<summary>
				Eventhandler for DocumentObjectCollection class.
			</summary>
			<param name="type">DocumentObject type.</param>
			<param name="entity">The DocumentObject.</param>
		*/
		class EXPORTS ChangeItems : public virtual Object
		{
		public:
			/*

			*/
			virtual void Invoke(ChangeItemsType type, intrusive_ptr<DocumentObject> entity);
			/*

			*/
			//virtual System.IAsyncResult BeginInvoke (ChangeItemsType type,intrusive_ptr<DocumentObject> entity,System.AsyncCallback callback,System.Object object);
			/*

			*/
			//virtual void EndInvoke (System.IAsyncResult result);
		private:
		};
	}
}