#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "WatermarkBase.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS PictureWatermark : public virtual WatermarkBase
		{
		public:
			PictureWatermark();

			/*
			<summary>
				Gets picture scaling in percents.
			</summary>
			*/
			float GetScaling();
			/*
			<summary>
				Sets picture scaling in percents.
			</summary>
			*/
			void SetScaling(float value);
			/*
			<summary>
				Gets washout property for Picture watermark.
			</summary>
			*/
			bool GetIsWashout();
			/*
			<summary>
				Sets washout property for Picture watermark.
			</summary>
			*/
			void SetIsWashout(bool value);
			/*
			<summary>
				Sets the picture.
			</summary>
			<param name="ImgFile">The image file.</param>
			*/
			void SetPicture(LPCWSTR_S ImgFile);
			/*
			<summary>
				Sets the picture.
			</summary>
			<param name="imgStream">The img stream.</param>
			*/
			void SetPicture(intrusive_ptr<Stream> imgStream);
		private:
		};
	}
}