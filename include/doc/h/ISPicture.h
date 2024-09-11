#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IDocumentObject.h"
#include "IParagraphBase.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
		<summary>
	        Represents a picture in a word document.
	    </summary>
		*/
		class EXPORTS ISPicture : public virtual IParagraphBase, public virtual IDocumentObject
		{
		public:
			/*
			<summary>
				Returns picture height.
			</summary>
			<remarks>
				The value is measured in points.
			</remarks>
			*/
			virtual float GetHeight() = 0;
			/*
			<summary>
				Sets picture height.
			</summary>
			<remarks>
				The value is measured in points.
			</remarks>
			*/
			virtual void SetHeight(float value) = 0;
			/*
			<summary>
				Returns picture width.
			</summary>
			<remarks>
				The value is measured in points.
			</remarks>
			*/
			virtual float GetWidth() = 0;
			/*
			<summary>
				Sets picture width.
			</summary>
			<remarks>
				The value is measured in points.
			</remarks>
			*/
			virtual void SetWidth(float value) = 0;
			/*
			<summary>
				Returns picture height scale factor in percent.
			</summary>
			*/
			virtual float GetHeightScale() = 0;
			/*
			<summary>
				Sets picture height scale factor in percent.
			</summary>
			*/
			virtual void SetHeightScale(float value) = 0;
			/*
			<summary>
				Returns picture width scale factor in percent.
			</summary>
			*/
			virtual float GetWidthScale() = 0;
			/*
			<summary>
				Sets picture width scale factor in percent.
			</summary>
			*/
			virtual void SetWidthScale(float value) = 0;
			/*
			<summary>
				Loads Image object.
			</summary>
			<param name="image"></param>
			*/
			/*virtual void LoadImage(intrusive_ptr<Image> imageStream) = 0;*/
			/*
			<summary>
				Gets internal Image object.
			</summary>
			*/
			//virtual intrusive_ptr<Image> GetImage() = 0;
			/*
			<summary>
				Loads Image as byte array.
			</summary>
			<param name="imageBytes"></param>
			*/
			//virtual void LoadImage (std::vector<System.Byte> imageBytes)=0;
			/*
			<summary>
				Gets image byte array.
			</summary>
			*/
			//virtual std::vector<System.Byte> GetImageBytes ()=0;
			/*
			<summary>
				Add Caption for current Picture
			</summary>
			<param name="captionPosition"></param>
			<param name="name"></param>
			<param name="format"></param>
			<returns></returns>
			*/
			virtual intrusive_ptr<IParagraph> AddCaption(LPCWSTR_S name, CaptionNumberingFormat format, CaptionPosition captionPosition) = 0;
			/*
			<summary>
				Gets horizontal origin of the picture.
			</summary>
			*/
			virtual HorizontalOrigin GetHorizontalOrigin() = 0;
			/*
			<summary>
				Sets horizontal origin of the picture.
			</summary>
			*/
			virtual void SetHorizontalOrigin(HorizontalOrigin value) = 0;
			/*
			<summary>
				Gets vertical origin of the picture.
			</summary>
			*/
			virtual VerticalOrigin GetVerticalOrigin() = 0;
			/*
			<summary>
				Sets vertical origin of the picture.
			</summary>
			*/
			virtual void SetVerticalOrigin(VerticalOrigin value) = 0;
			/*
			<summary>
				Gets absolute horizontal position of the picture.
			</summary>
			<remarks>
				The value is measured in points and the position is relative to HorizontalOrigin.
			</remarks>
			*/
			virtual float GetHorizontalPosition() = 0;
			/*
			<summary>
				Sets absolute horizontal position of the picture.
			</summary>
			<remarks>
				The value is measured in points and the position is relative to HorizontalOrigin.
			</remarks>
			*/
			virtual void SetHorizontalPosition(float value) = 0;
			/*
			<summary>
				Gets absolute vertical position of the picture.
			 </summary>
			<remarks>
				The value is measured in points and the position is relative to VerticalOrigin.
			</remarks>
			*/
			virtual float GetVerticalPosition() = 0;
			/*
			<summary>
				Sets absolute vertical position of the picture.
			</summary>
			<remarks>
				The value is measured in points and the position is relative to VerticalOrigin.
			</remarks>
			*/
			virtual void SetVerticalPosition(float value) = 0;
			/*
			<summary>
				Gets text wrapping style of the picture.
			</summary>
			*/
			virtual TextWrappingStyle GetTextWrappingStyle() = 0;
			/*
			<summary>
				Sets text wrapping style of the picture.
			</summary>
			*/
			virtual void SetTextWrappingStyle(TextWrappingStyle value) = 0;
			/*
			<summary>
				Gets text wrapping type of the picture.
			</summary>
			*/
			virtual TextWrappingType GetTextWrappingType() = 0;
			/*
			<summary>
				Sets text wrapping type of the picture.
			</summary>
			*/
			virtual void SetTextWrappingType(TextWrappingType value) = 0;
			/*
			<summary>
				Returns picture horizontal alignment.
			</summary>
			<remarks>
				If it is set as None, then the object is explicitly positioned using position properties. Otherwise it is positioned according to the alignment specified. The position of the object is relative to HorizontalOrigin.
			</remarks>
			*/
			virtual ShapeHorizontalAlignment GetHorizontalAlignment() = 0;
			/*
			<summary>
				Sets picture horizontal alignment.
			</summary>
			<remarks>
				If it is set as None, then the object is explicitly positioned using position properties. Otherwise it is positioned according to the alignment specified. The position of the object is relative to HorizontalOrigin.
			</remarks>
			*/
			virtual void SetHorizontalAlignment(ShapeHorizontalAlignment value) = 0;
			/*
			<summary>
				Returns picture vertical alignment.
			</summary>
			<remarks>
				If it is set as None, then the object is explicitly positioned using position properties. Otherwise it is positioned according to the alignment specified. The position of the object is relative to VerticalOrigin.
			</remarks>
			*/
			virtual ShapeVerticalAlignment GetVerticalAlignment() = 0;
			/*
			<summary>
				Sets picture vertical alignment.
			</summary>
			<remarks>
				If it is set as None, then the object is explicitly positioned using position properties. Otherwise it is positioned according to the alignment specified. The position of the object is relative to VerticalOrigin.
			</remarks>
			*/
			virtual void SetVerticalAlignment(ShapeVerticalAlignment value) = 0;
			/*
			<summary>
				Gets the picture's alternative text.
			</summary>
			<value>The alternative text.</value>
			*/
			virtual LPCWSTR_S GetAlternativeText() = 0;
			/*
			<summary>
				Sets the picture's alternative text.
			</summary>
			<value>The alternative text.</value>
			*/
			virtual void SetAlternativeText(LPCWSTR_S value) = 0;
			/*
			<summary>
				Gets the picture's title
			</summary>
			<value>The title text</value>
			*/
			virtual LPCWSTR_S GetTitle() = 0;
			/*
			<summary>
				Sets the picture's title
			</summary>
			<value>The title text</value>
			*/
			virtual void SetTitle(LPCWSTR_S value) = 0;
			/*

			*/
			virtual bool GetIsUnderText() = 0;
			/*

			*/
			virtual void SetIsUnderText(bool value) = 0;
		private:
		};
	}
}