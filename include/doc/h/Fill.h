#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS Fill : public virtual Object
		{
		public:
			/*
			<summary>
		        Defines the color of a fill.
		    </summary>
		    <remarks>
		    <p>The default value is
		    <ms><see cref="System.Drawing.Color.White"/>.</ms>
		    <java><see javaref="T:java.awt.Color.WHITE"/>.</java>
		    </p>
		    </remarks>
			*/
			intrusive_ptr<Color> GetColor();
			/*
			<summary>
				Sets the color of a fill.
			</summary>
			*/
			void SetColor(intrusive_ptr<Color> value);
			/*
			<summary>
		        Defines the transparency of a fill. Valid range from 0 to 1, where 0 is fully transparent and 1 is fully opaque.
		    </summary>
		    <remarks>
		    <p>The default value is 1.</p>
		    </remarks>
			*/
			double GetOpacity();
			/*
			<summary>
				Sets the transparency of a fill. Valid range from 0 to 1, where 0 is fully transparent and 1 is fully opaque.
			</summary>
			*/
			void SetOpacity(double value);
			/*
			<summary>
		        Determines whether the shape will be filled.
		    </summary>
		    <remarks>
		    <p>The default value is <b>true</b>.</p>
		    </remarks>
			*/
			bool GetOn();
			/*
			<summary>
				Sets the shape will be filled.
			</summary>
			*/
			void SetOn(bool value);
			/*

			*/
			std::vector<byte> GetImageBytes ();
		private:
		};
	}
}