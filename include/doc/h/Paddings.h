#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "WordAttrCollection.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS Paddings : public virtual WordAttrCollection
		{
		public:
			/*
			<summary>
				Gets left padding.
			</summary>
			*/
			float GetLeft();
			/*
			<summary>
				Sets left padding.
			</summary>
			*/
			void SetLeft(float value);
			/*
			<summary>
				Gets top padding.
			</summary>
			*/
			float GetTop();
			/*
			<summary>
				Sets top padding.
			</summary>
			*/
			void SetTop(float value);
			/*
			<summary>
				Gets right padding.
			</summary>
			*/
			float GetRight();
			/*
			<summary>
				Sets right padding.
			</summary>
			*/
			void SetRight(float value);
			/*
			<summary>
				Gets bottom padding.
			</summary>
			*/
			float GetBottom();
			/*
			<summary>
				Sets bottom padding.
			</summary>
			*/
			void SetBottom(float value);
			/*
			 <summary>
		         Sets all paddings.
		    </summary>
			*/
			void SetAll(float value);
			/*

			*/
			//virtual bool Equals (System.Object obj);
			/*

			*/
			bool Equals(intrusive_ptr<Paddings> other);
			/*
			<summary>
				Constant value for left key.
			</summary>
			*/
			static int LeftKey();
			/*
			<summary>
				Constant value for top key.
			</summary>
			*/
			static int TopKey();
			/*
			<summary>
				Constant value for bottom key.
			</summary>
			*/
			static int BottomKey();
			/*
			<summary>
				Constant value for right key.
			</summary>
			*/
			static int RightKey();
		private:
		};
	}
}