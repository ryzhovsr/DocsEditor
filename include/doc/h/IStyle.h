#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
		<summary>
			Publishes the DLS style base functionality.
		</summary>
		*/
		class EXPORTS IStyle : public virtual Object
		{
		public:
			/*
			<summary>
				Gets the style name.
			</summary>
			*/
			virtual LPCWSTR_S GetName() = 0;
			/*
			<summary>
				Sets the style name.
			</summary>
			*/
			virtual void SetName(LPCWSTR_S value) = 0;
			/*
			<summary>
				Gets the style id.
			</summary>
			*/
			virtual LPCWSTR_S GetStyleId() = 0;
			/*
			<summary>
				Gets the type of the style.
			</summary>
			<value>The type of the style.</value>
			*/
			virtual StyleType GetStyleType() = 0;
			/*
			<summary>
				Clones itself.
			</summary>
			<returns></returns>
			*/
			virtual intrusive_ptr<IStyle> Clone() = 0;
		private:
		};
	}
}