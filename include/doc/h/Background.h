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
		class EXPORTS Background : public virtual DocumentSerializable
		{
		public:
			/*
			<summary>
				Gets the type of background for document.
			</summary>
			*/
			BackgroundType GetType();
			/*
			<summary>
				Sets the type of background for document.
			</summary>
			*/
			void SetType(BackgroundType value);
			/*
			<summary>
				Gets background color.
			</summary>
			*/
			intrusive_ptr<Color> GetColor();
			/*
			<summary>
				Sets background color.
			</summary>
			*/
			void SetColor(intrusive_ptr<Color> value);
			/*
			<summary>
				Gets or sets background gradient.
			</summary>
			*/
			intrusive_ptr<BackgroundGradient> GetGradient();
			/*

			*/
			//virtual System.Object GetDirectShapeAttribute (int key);
			/*

			*/
			//virtual System.Object GetInheritedShapeAttribute (int key);
			/*

			*/
			//virtual System.Object GetShapeAttribute (int key);
			/*

			*/
			//virtual void SetShapeAttribute (int key,System.Object value);
			/*

			*/
			//void SetShapeAttr (int key,System.Object value);
			/*

			*/
			virtual void RemoveShapeAttribute(int key);
			/*

			*/
			virtual bool HasKey(int key);
			/*
			<summary>
				Sets the picture.
			</summary>
			<param name="imgFile">The image file.</param>
			*/
			void SetPicture(LPCWSTR_S imgFile);
			/*
			<summary>
				Sets the picture.
			</summary>
			<param name="imgStream">The image stream.</param>
			*/
			void SetPicture(intrusive_ptr<Stream> imgStream);
		private:
		};
	}
}