#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IDocumentObject.h"
#include "TableCell.h"
#include "IStructureDocument.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
		<summary>
	        This element specifies the presence of a structured document tag around a single table cell. The two child
	        elements of this element shall be used to specify the properties and content of the current structured document
	        tag via the sdtPr and sdtContent elements, respectively.
	    </summary>
		*/
		class EXPORTS StructureDocumentTagCell : public virtual TableCell, public virtual IDocumentObject, public virtual IStructureDocument
		{
		public:
			/*
			<summary>
				Gets the type of the entity.
			</summary>
			*/
			virtual DocumentObjectType GetDocumentObjectType();
			/*
			<summary>
				Gets the structured document tag properties.
			</summary>
			*/
			virtual intrusive_ptr<SDTProperties> GetSDTProperties();
			/*
			<summary>
				Gets character format for the break symbol.
			</summary>
			*/
			virtual intrusive_ptr<CharacterFormat> GetBreakCharacterFormat();
			/*
			<summary>
		        Updates stuctured documnet tag content with bound data.
		    </summary>
			*/
			virtual void UpdateDataBinding();
		private:
		};
	}
}