#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "WordAttrCollection.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
		<summary>
			Class allows to store Page Margins (float values).
		</summary>
		*/
		class EXPORTS MarginsF : public virtual WordAttrCollection
		{
			friend class Object;
		public:
			MarginsF(float left, float top, float right, float bottom);
			/*
			<summary>
				Allow to Get value of all Margins on one call
			</summary>
			*/
			float GetAll();
			/*
			<summary>
				Allow to Set value of all Margins on one call
			</summary>
			*/
			void SetAll(float value);
			/*
			<summary>
				Gets the left margin
			</summary>
			*/
			float GetLeft();
			/*
			<summary>
				Sets the left margin
			</summary>
			*/
			void SetLeft(float value);
			/*
			<summary>
				Gets the right margin
			</summary>
			*/
			float GetRight();
			/*
			<summary>
				Sets the right margin
			</summary>
			*/
			void SetRight(float value);
			/*
			<summary>
				Gets the top margin
			</summary>
			*/
			float GetTop();
			/*
			<summary>
				Sets the top margin
			</summary>
			*/
			void SetTop(float value);
			/*
			<summary>
				Gets the bottom margin
			</summary>
			*/
			float GetBottom();
			/*
			<summary>
				Sets the bottom margin
			</summary>
			*/
			void SetBottom(float value);
			/*
			<summary>
				Clones this instance.
			</summary>
			<returns></returns>
			*/
			intrusive_ptr<MarginsF> Clone();
		protected:
			MarginsF();
		private:
		};
	}
}