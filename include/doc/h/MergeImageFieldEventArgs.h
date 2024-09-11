#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "MergeFieldEventArgs.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
			<summary>
				Represents data during MergeImageField event.
			</summary>
		*/
		class EXPORTS MergeImageFieldEventArgs : public virtual MergeFieldEventArgs
		{
		public:
			/*
			<summary>
				Setting to specify if Text should be used.
			</summary>
			*/
			bool GetUseText();
			/*
			<summary>
				Returns Image File Name.
			</summary>
			*/
			LPCWSTR_S GetImageFileName();
			/*
			<summary>
				Sets Image File Name.
			</summary>
			*/
			void SetImageFileName(LPCWSTR_S value);
			/*
			<summary>
				Returns Image Stream.
			</summary>
			*/
			intrusive_ptr<Stream> GetImageStream();
			/*
			<summary>
				Sets Image Stream.
			</summary>
			*/
			void SetImageStream(intrusive_ptr<Stream> value);
			/*
			<summary>
				Gets the size of the picture.
			</summary>
			<value>The size of the picture.</value>
			*/
			intrusive_ptr<SizeF> GetPictureSize();
			/*
			<summary>
				Sets the size of the picture.
			</summary>
			<value>The size of the picture.</value>
			*/
			void SetPictureSize(intrusive_ptr<SizeF> value);
			/*
			<summary>
				Gets a value indicating whether this <see cref="MergeImageFieldEventArgs"/> is skip.
			</summary>
			<value><c>true</c> if skip; otherwise, <c>false</c>.</value>
			*/
			bool GetSkip();
			/*
			<summary>
				Sets a value indicating whether this <see cref="MergeImageFieldEventArgs"/> is skip.
			</summary>
			<value><c>true</c> if skip; otherwise, <c>false</c>.</value>
			*/
			void SetSkip(bool value);
			/*
			<summary>
				Sets the image.
			</summary>
			<param name="imgFile">The image file.</param>
			*/
			void SetImage(LPCWSTR_S imgFile);
			/*
			<summary>
				Sets the image.
			</summary>
			<param name="imgStream">The image stream.</param>
			*/
			void SetImage(intrusive_ptr<Stream> imgStream);
		private:
		};
	}
}