#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "SdtControlProperties.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
		<summary>
			This element specifies that the parent sdt shall be a picture when displayed in the document.
		</summary>
		*/
		class EXPORTS SdtPicture : public virtual SdtControlProperties
		{
		public:
			/*
			<summary>
				Replaces the image.
			</summary>
			<param name="image">The image.</param>
			*/
			void ReplaceImage(std::vector<byte> imageBytes);
		private:
		};
	}
}