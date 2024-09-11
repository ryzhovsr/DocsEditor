#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IDocumentObject.h"
#include "ShapeObject.h"
#include "ISPicture.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS DocPicture : public virtual ShapeObject, public virtual IDocumentObject, public virtual ISPicture
		{
			friend class Object;
		public:
			DocPicture(intrusive_ptr<IDocument> doc);

			virtual LPCWSTR_S GetAlternativeText();
			/*

			*/
			virtual void SetAlternativeText(LPCWSTR_S value);

			/*
			<summary>
				Gets the rotation of DocPicture.Specifies the rotation of the graphic frame.
			</summary>
			*/
			float GetRotation();
			/*
			<summary>
				Sets the rotation of DocPicture.Specifies the rotation of the graphic frame.
			</summary>
			*/
			void SetRotation(float value);
			/*
			<summary>
				Gets the type of the document object.
			</summary>
			<value>The type of the document object.</value>
			*/
			virtual DocumentObjectType GetDocumentObjectType();
			/*
			<summary>
				Returns picture height.
			</summary>
			*/
			virtual float GetHeight();
			/*
			<summary>
				Sets picture height.
			</summary>
			*/
			virtual void SetHeight(float value);
			/*
			<summary>
				Returns picture width.
			</summary>
			*/
			virtual float GetWidth();
			/*
			<summary>
				Sets picture width.
			</summary>
			*/
			virtual void SetWidth(float value);
			/*
			<summary>
				Returns picture height scale factor in percent.
			</summary>
			*/
			virtual float GetHeightScale();
			/*
			<summary>
				Sets picture height scale factor in percent.
			</summary>
			*/
			virtual void SetHeightScale(float value);
			/*
			<summary>
				Returns picture width scale factor in percent.
			</summary>
			*/
			virtual float GetWidthScale();
			/*
			<summary>
				Sets picture width scale factor in percent.
			</summary>
			*/
			virtual void SetWidthScale(float value);
			/*
			<summary>
				Scale the image by scale factor.
			</summary>
			*/
			void SetScale(float scaleFactor);
			/*
			<summary>
				Scale the image by scale factor.
			</summary>
			*/
			void SetScale(float heightFactor, float widthFactor);
			/*
			<summary>
				Gets image byte array.
			</summary>
			*/
			std::vector<byte> GetImageBytes();
			/*

			*/
			bool GetGrayScale();
			/*

			*/
			void SetGrayScale(bool value);
			/*

			*/
			bool GetBiLevel();
			/*

			*/
			void SetBiLevel(bool value);
			/*

			*/
			float GetBrightness();
			/*

			*/
			void SetBrightness(float value);
			/*

			*/
			float GetContrast();
			/*

			*/
			void SetContrast(float value);
			/*
			<summary>
				Gets or sets picture color.
			</summary>
			*/
			PictureColor GetColor();
			/*

			*/
			void SetColor(PictureColor value);
			/*
			<summary>
				Gets or sets transparent color
			</summary>
			*/
			intrusive_ptr<Color> GetTransparentColor();
			/*

			*/
			void SetTransparentColor(intrusive_ptr<Color> value);
			/*
			<summary>
				Gets whether the picture object is cropped.
			</summary>
			*/
			bool GetIsCrop();
			/*
			<summary>
				Gets or sets horizontal origin of the picture.
			</summary>
			*/
			virtual HorizontalOrigin GetHorizontalOrigin();
			/*

			*/
			virtual void SetHorizontalOrigin(HorizontalOrigin value);
			/*
			<summary>
				Gets or sets absolute horizontal position of the picture.
			</summary>
			*/
			virtual VerticalOrigin GetVerticalOrigin();
			/*

			*/
			virtual void SetVerticalOrigin(VerticalOrigin value);
			/*
			<summary>
				Gets or sets absolute horizontal position of the picture.
			</summary>
			<remarks>
				The value is measured in points and the position is relative to HorizontalOrigin.
			</remarks>
			*/
			virtual float GetHorizontalPosition();
			/*

			*/
			virtual void SetHorizontalPosition(float value);
			/*
			<summary>
				Gets or sets absolute vertical position of the picture.
			</summary>
			<remarks>
				The value is measured in points and the position is relative to VerticalOrigin.
			</remarks>
			*/
			virtual float GetVerticalPosition();
			/*

			*/
			virtual void SetVerticalPosition(float value);
			/*
			<summary>
				Gets or sets text wrapping style of the picture.
			</summary>
			*/
			virtual TextWrappingStyle GetTextWrappingStyle();
			/*

			*/
			virtual void SetTextWrappingStyle(TextWrappingStyle value);
			/*
			<summary>
				Gets or sets text wrapping type of the picture.
			</summary>
			*/
			virtual TextWrappingType GetTextWrappingType();
			/*

			*/
			virtual void SetTextWrappingType(TextWrappingType value);
			/*
			<summary>
				Returns or setspicture horizontal alignment.
			</summary>
			<remarks>
				If it is set as None, then the picture is explicitly positioned using position properties. Otherwise it is positioned according to the alignment specified. The position of the object is relative to HorizontalOrigin.
			</remarks>
			*/
			virtual ShapeHorizontalAlignment GetHorizontalAlignment();
			/*

			*/
			virtual void SetHorizontalAlignment(ShapeHorizontalAlignment value);
			/*
			<summary>
				Returns or setspicture vertical alignment.
			</summary>
			<remarks>
				If it is set as None, then the picture is explicitly positioned using position properties. Otherwise it is positioned according to the alignment specified. The position of the object is relative to VerticalOrigin.
			</remarks>
			*/
			virtual ShapeVerticalAlignment GetVerticalAlignment();
			/*

			*/
			virtual void SetVerticalAlignment(ShapeVerticalAlignment value);
			/*
			<summary>
				Gets or sets whether picture is below image.
			</summary>
			*/
			virtual bool GetIsUnderText();
			/*

			*/
			virtual void SetIsUnderText(bool value);
			/*
			<summary>
				Gets shape object's character format.
			</summary>
			*/
			virtual intrusive_ptr<CharacterFormat> GetCharacterFormat();
			/*
			<summary>
				Gets the picture title.
			</summary>
			<value>The title.</value>
			*/
			virtual LPCWSTR_S GetTitle();
			/*

			*/
			virtual void SetTitle(LPCWSTR_S value);
			/*
			<summary>
				Gets or sets the boolean value that represents whether a picture in a table is displayed inside or outside the table.
			</summary>
			*/
			bool GetLayoutInCell();
			/*

			*/
			void SetLayoutInCell(bool value);
			/*
			<summary>
				Loads the image.
			</summary>
			<param name="imgFile">The img file.</param>
			*/
			void LoadImageSpire(LPCWSTR_S imgFile);
			/*
			<summary>
				Loads the image.
			</summary>
			<param name="imgStream">The img stream.</param>
			*/
			void LoadImageSpire(intrusive_ptr<Stream> imgStream);
			/*
			<summary>
				Loads image as bytes array.
			</summary>
			<param name="imageBytes"></param>
			*/
			virtual void LoadImageSpire(std::vector<byte> imageBytes);
			/*
			<summary>
				Replaces the image.
			</summary>
			<param name="imageBytes">The image bytes.</param>
			<param name="bIsKeepRation"></param>
			*/
			void ReplaceImage (std::vector<byte> imageBytes,bool bIsKeepRation);
			/*
			<summary>
				Add Caption for current Picture
			</summary>
			<param name="captionPosition"></param>
			<param name="name"></param>
			<param name="format"></param>
			<returns></returns>
			*/
			virtual intrusive_ptr<IParagraph> AddCaption(LPCWSTR_S name, CaptionNumberingFormat format, CaptionPosition captionPosition);
		protected:
			DocPicture();
		private:
		};
	}
}