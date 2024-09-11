#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS InternalMargin : public virtual Object
		{
		public:
			/*
			<summary>
				Sets all internal margin.
			</summary>
			*/
			void SetAll(float value);
			/*
			<summary>
				Gets the internal left margin (in points).
			</summary>
			<value>The internal left margin.</value>
			*/
			float GetLeft();
			/*
			<summary>
				Sets the internal left margin (in points).
			</summary>
			<value>The internal left margin.</value>
			*/
			void SetLeft(float value);
			/*
			<summary>
				Gets the internal right margin (in points).
			</summary>
			<value>The internal right margin.</value>
			*/
			float GetRight();
			/*
			<summary>
				Sets the internal right margin (in points).
			</summary>
			<value>The internal right margin.</value>
			*/
			void SetRight(float value);
			/*
			<summary>
				Gets the internal top margin (in points).
			</summary>
			<value>The internal top margin.</value>
			*/
			float GetTop();
			/*
			<summary>
				Sets the internal top margin (in points).
			</summary>
			<value>The internal top margin.</value>
			*/
			void SetTop(float value);
			/*
			<summary>
				Gets the internal bottom margin (in points).
			</summary>
			<value>The internal bottom margin.</value>
			*/
			float GetBottom();
			/*
			<summary>
				Sets the internal bottom margin (in points).
			</summary>
			<value>The internal bottom margin.</value>
			*/
			void SetBottom(float value);
		private:
		};
	}
}