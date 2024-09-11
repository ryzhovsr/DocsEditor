#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
		<summary>
			Initialize a new instance of <see cref="Margins">Margins</see> class with 0 margins.
		</summary>
		*/
		class EXPORTS Margins : public virtual Object
		{
		public:
			/*

			*/
			int GetAll();
			/*
			<summary>
				Sets the specified margin for all sides.
			</summary>
			<param name="margin">The margin for all sides.</param>
			*/
			void SetAll(int value);
			/*
			<summary>
				Gets or sets the <b>left</b> margin.
			</summary>
			<exception cref="System.ArgumentException">
			<p>The <b>Left</b> parameter value is less than 0.</p>
			</exception>
			*/
			int GetLeft();
			/*
			<summary>
				Sets the <b>left</b> margin.
			</summary>
			<exception cref="System.ArgumentException">
			<p>The <b>Left</b> parameter value is less than 0.</p>
			</exception>
			*/
			void SetLeft(int value);
			/*
			<summary>
				Gets the <b>right</b> margin.
			</summary>
			<exception cref="System.ArgumentException">
			<p>The <b>Right</b> parameter value is less than 0.</p>
			</exception>
			*/
			int GetRight();
			/*
			<summary>
				Sets the <b>right</b> margin.
			</summary>
			<exception cref="System.ArgumentException">
			<p>The <b>Right</b> parameter value is less than 0.</p>
			</exception>
			*/
			void SetRight(int value);
			/*
			<summary>
				Gets the <b>top</b> marign.
			</summary>
			<exception cref="System.ArgumentException">
			<p>The <b>Top</b> parameter value is less than 0.</p>
			</exception>
			*/
			int GetTop();
			/*
			<summary>
				Sets the <b>top</b> marign.
			</summary>
			<exception cref="System.ArgumentException">
			<p>The <b>Top</b> parameter value is less than 0.</p>
			</exception>
			*/
			void SetTop(int value);
			/*
			<summary>
				Gets the <b>bottom</b> marign.
			</summary>
			<exception cref="System.ArgumentException">
			<p>The <b>bottom</b> parameter value is less than 0.</p>
			</exception>
			*/
			int GetBottom();
			/*
			<summary>
				Sets the <b>bottom</b> marign.
			</summary>
			<exception cref="System.ArgumentException">
			<p>The <b>bottom</b> parameter value is less than 0.</p>
			</exception>
			*/
			void SetBottom(int value);
		private:
		};
	}
}