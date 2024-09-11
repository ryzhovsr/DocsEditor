#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "WordAttrCollection.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS FootEndnoteOptions : public virtual WordAttrCollection
		{
		public:
			/*
			<summary>
				Gets the numbering format.
			</summary>
			*/
			FootnoteNumberFormat GetNumberFormat();
			/*
			<summary>
				Sets the numbering format.
			</summary>
			*/
			void SetNumberFormat(FootnoteNumberFormat value);
			/*
			<summary>
				Gets the position in the document.
			</summary>
			*/
			FootnotePosition GetPosition();
			/*
			<summary>
				Sets the position in the document.
			</summary>
			*/
			void SetPosition(FootnotePosition value);
			/*
			<summary>
				Gets the restart rule.
			</summary>
			*/
			FootnoteRestartRule GetRestartRule();
			/*
			<summary>
				Sets the restart rule.
			</summary>
			*/
			void SetRestartRule(FootnoteRestartRule value);
			/*
			<summary>
				Gets the start number.
			</summary>
			*/
			int GetStartNumber();
			/*
			<summary>
				Sets the start number.
			</summary>
			*/
			void SetStartNumber(int value);
		private:
		};
	}
}