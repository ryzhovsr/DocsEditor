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
				Represents Frame object used in framed document.
			</summary>
		*/
		class EXPORTS Frame : public virtual WordAttrCollection
		{
		public:
			/*
			<summary>
				Gets whether lock the anchor of Frame or not.
			</summary>
			*/
			bool GetFrameAnchorLock();
			/*
			<summary>
				Sets whether lock the anchor of Frame or not.
			</summary>
			*/
			void SetFrameAnchorLock(bool value);
			/*
			<summary>
				Gets Sets Horizontal Position of Frame.
			</summary>
			*/
			HorizontalPosition GetFrameHorizontalPosition();
			/*
			<summary>
				Sets Horizontal Position of Frame.
			</summary>
			*/
			void SetFrameHorizontalPosition(HorizontalPosition value);
			/*
			<summary>
				Gets Vertical Position of Frame.
			</summary>
			*/
			VerticalPosition GetFrameVerticalPosition();
			/*
			<summary>
				Sets Vertical Position of Frame.
			</summary>
			*/
			void SetFrameVerticalPosition(VerticalPosition value);
			/*
			<summary>
				Gets Width Rule of Frame.
			</summary>
			*/
			FrameSizeRule GetFrameWidthRule();
			/*
			<summary>
				Sets Width Rule of Frame.
			</summary>
			*/
			void SetFrameWidthRule(FrameSizeRule value);
			/*
			<summary>
				Gets Height Rule of Frame.
			</summary>
			*/
			FrameSizeRule GetFrameHeightRule();
			/*
			<summary>
				Sets Height Rule of Frame.
			</summary>
			*/
			void SetFrameHeightRule(FrameSizeRule value);
			/*
			<summary>
				Gets wrap type of Frame.
			</summary>
			*/
			bool GetWrapFrameAround();
			/*
			<summary>
				Sets wrap type of Frame.
			</summary>
			*/
			void SetWrapFrameAround(bool value);
			/*
			<summary>
				Gets relative to what the frame is positioned horizontally.
			</summary>
			*/
			FrameHorzAnchor GetFrameHorizontalOrigin();
			/*
			<summary>
				Sets relative to what the frame is positioned horizontally.
			</summary>
			*/
			void SetFrameHorizontalOrigin(FrameHorzAnchor value);
			/*
			<summary>
				Gets relative to what the frame is positioned vertically.
			</summary>
			*/
			FrameVertAnchor GetFrameVerticalOrigin();
			/*
			<summary>
				Sets relative to what the frame is positioned vertically.
			</summary>
			*/
			void SetFrameVerticalOrigin(FrameVertAnchor value);
			/*
			<summary>
				Gets width of this frame
			</summary>
			<returns></returns>
			*/
			float GetWidth();
			/*
			<summary>
				Sets width of this frame
			</summary>
			<param name="value"></param>
			*/
			void SetWidth(float value);
			/*
			<summary>
				Gets height of this frame
			</summary>
			<returns></returns>
			*/
			float GetHeight();
			/*
			<summary>
				Sets height of this frame
			</summary>
			<param name="value"></param>
			*/
			void SetHeight(float value);
			/*
			<summary>
				Gets the position of the left edge of the frame
			</summary>
			<returns></returns>
			*/
			float GetHorizontalPosition();
			/*
			<summary>
				Sets the position of the left edge of the frame
			</summary>
			<param name="value"></param>
			*/
			void SetHorizontalPosition(float value);
			/*
			<summary>
				Gets the distance between the document text and left or right edge of the frame.
			</summary>
			<returns></returns>
			*/
			float GetHorizontalDistanceFromText();
			/*
			<summary>
				Sets the distance between the document text and left or right edge of the frame.
			</summary>
			<param name="value"></param>
			*/
			void SetHorizontalDistanceFromText(float value);
			/*
			<summary>
				Gets the position of the top edge of the frame
			</summary>
			<returns></returns>
			*/
			float GetVerticalPosition();
			/*
			<summary>
				Sets the position of the top edge of the frame
			</summary>
			<param name="value"></param>
			*/
			void SetVerticalPosition(float value);
			/*
			<summary>
				Gets the distance between the document text and top or bottom edge of the frame.
			</summary>
			<returns></returns>
			*/
			float GetVerticalDistanceFromText();
			/*
			<summary>
				Sets the distance between the document text and top or bottom edge of the frame.
			</summary>
			<param name="value"></param>
			*/
			void SetVerticalDistanceFromText(float value);
		private:
		};
	}
}