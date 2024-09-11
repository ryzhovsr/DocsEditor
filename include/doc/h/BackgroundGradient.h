#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "Fill.h"
#include "GradientShadingStyle.h"
#include "GradientShadingVariant.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS BackgroundGradient : public virtual Fill
		{
		public:
			/*
			<summary>
				Gets first color for gradient.
			</summary>
			*/
			intrusive_ptr<Color> GetColor1();
			/*
			<summary>
				Sets first color for gradient.
			</summary>
			*/
			void SetColor1(intrusive_ptr<Color> value);
			/*
			<summary>
				Gets second color for gradient
				(used when TwoColors set to true).
			</summary>
			*/
			intrusive_ptr<Color> GetColor2();
			/*
			<summary>
				Sets second color for gradient
				(used when TwoColors set to true).
			</summary>
			*/
			void SetColor2(intrusive_ptr<Color> value);
			/*
			<summary>
				Gets shading style for gradient.
			</summary>
			*/
			GradientShadingStyle GetShadingStyle();
			/*
			<summary>
				Sets shading style for gradient.
			</summary>
			*/
			void SetShadingStyle(GradientShadingStyle value);
			/*
			<summary>
				Gets shading variants.
			</summary>
			*/
			GradientShadingVariant GetShadingVariant();
			/*
			<summary>
				Sets shading variants.
			</summary>
			*/
			void SetShadingVariant(GradientShadingVariant value);
		private:
		};
	}
}