#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "DocumentSerializable.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS ViewSetup : public virtual DocumentSerializable
		{
		public:
			/*
			<summary>
				Returns zooming value in percents
			</summary>
		    <value>The zoom percent.</value>
			*/
			int GetZoomPercent();
			/*
			<summary>
				Sets zooming value in percents
			</summary>
			*/
			void SetZoomPercent(int value);
			/*
			<summary>
				Returns zooming type
			</summary>
		    <value>The type of the zoom.</value>
			*/
			ZoomType GetZoomType();
			/*
			<summary>
				Sets zooming type
			</summary>
			*/
			void SetZoomType(ZoomType value);
			/*
			<summary>
				Returns document view mode
			</summary>
		    <value>The type of the document view.</value>
			*/
			DocumentViewType GetDocumentViewType();
			/*
			<summary>
				Sets document view mode
			</summary>
			*/
			void SetDocumentViewType(DocumentViewType value);
			/*
			<summary>
				Constant value for Zoom.
			</summary>
			*/
			static int DEF_ZOOMING();
		private:
		};
	}
}