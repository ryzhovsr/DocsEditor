#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IDocumentObject.h"
#include "ICompositeObject.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS IStructureDocument : public virtual ICompositeObject, public virtual IDocumentObject
		{
		public:
			/*
			<summary>
				Get the Sdt properties.
			</summary>
			*/
			virtual intrusive_ptr<SDTProperties> GetSDTProperties() = 0;
			/*
			<summary>
				Get the character format of the break.
			</summary>
			*/
			virtual intrusive_ptr<CharacterFormat> GetBreakCharacterFormat() = 0;
			/*
			<summary>
				Updates stuctured documnet tag content with bound data.
			</summary>
			*/
			virtual void UpdateDataBinding() = 0;
		private:
		};
	}
}