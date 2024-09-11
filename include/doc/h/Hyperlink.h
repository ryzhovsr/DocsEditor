#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS Hyperlink : public virtual Object
		{
		public:
			/*
			<summary>
				Gets file path.
			</summary>
			*/
			LPCWSTR_S GetFilePath();
			/*
			<summary>
				Sets file path.
			</summary>
			*/
			void SetFilePath(LPCWSTR_S value);
			/*
			<summary>
				Returns url link.
			</summary>
			*/
			LPCWSTR_S GetUri();
			/*
			<summary>
				Sets url link.
			</summary>
			*/
			void SetUri(LPCWSTR_S value);
			/*
			<summary>
				Returns bookmark.
			</summary>
			*/
			LPCWSTR_S GetBookmarkName();
			/*
			<summary>
				Sets bookmark.
			</summary>
			*/
			void SetBookmarkName(LPCWSTR_S value);
			/*
			<summary>
				Returns a HyperlinkType object that indicates the link type.
			</summary>
			*/
			HyperlinkType GetType();
			/*
			<summary>
				Sets a HyperlinkType object that indicates the link type.
			</summary>
			*/
			void SetType(HyperlinkType value);
			/*
			<summary>
				Gets the specified hyperlink's visible text in a document.
			</summary>
		    <value>The text to display.</value>
			*/
			LPCWSTR_S GetTextToDisplay();
			/*
			<summary>
				Sets the specified hyperlink's visible text in a document.
			</summary>
			<value>The text to display.</value>
			*/
			void SetTextToDisplay(LPCWSTR_S value);
			/*
			<summary>
				Gets the image which will be displayed on the place of hyperlink.
			</summary>
			*/
			intrusive_ptr<ShapeObject> GetPictureToDisplay();
			/*
			<summary>
				Sets the image which will be displayed on the place of hyperlink.
			</summary>
			*/
			void SetPictureToDisplay(intrusive_ptr<ShapeObject> value);
			/*

			*/
			virtual void Dispose();
		private:
		};
	}
}