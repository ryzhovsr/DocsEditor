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
		class EXPORTS ListFormat : public virtual WordAttrCollection
		{
		public:
			/*
			<summary>
				Returns list nesting level.
			</summary>
			*/
			int GetListLevelNumber();
			/*
			<summary>
				Sets list nesting level.
			</summary>
			*/
			void SetListLevelNumber(int value);
			/*
			<summary>
				Gets type of the list.
			</summary>
			*/
			ListType GetListType();
			/*
			<summary>
				Returns whether numbering of the list must restart from previous list.
			</summary>
			*/
			bool GetIsRestartNumbering();
			/*
			<summary>
				Sets whether numbering of the list must restart from previous list.
			</summary>
			*/
			void SetIsRestartNumbering(bool value);
			/*
			<summary>
				Gets the name of custom style.
			</summary>
			*/
			LPCWSTR_S GetCustomStyleName();
			/*
			<summary>
				Gets paragraph's list style.
			</summary>
			*/
			intrusive_ptr<ListStyle> GetCurrentListStyle();
			/*
			<summary>
				Gets paragraph's ListLevel.
			</summary>
			*/
			intrusive_ptr<ListLevel> GetCurrentListLevel();
			/*
			<summary>
				Increase level indent.
			</summary>
			*/
			void IncreaseIndentLevel();
			/*
			<summary>
				Decrease level indent.
			</summary>
			*/
			void DecreaseIndentLevel();
			/*
			<summary>
				Continue last list.
			</summary>
			*/
			void ContinueListNumbering();
			/*
			<summary>
				Apply list style.
			</summary>
			<param name="styleName">The list style name.</param>
			*/
			void ApplyStyle(LPCWSTR_S styleName);
			/*
			<summary>
				Apply default bullet style for current paragraph.
			</summary>
			*/
			void ApplyBulletStyle();
			/*
			<summary>
				Apply default numbered style for current paragraph.
			</summary>
			*/
			void ApplyNumberedStyle();
			/*
			<summary>
				Removes the list from current paragraph.
			</summary>
			*/
			void RemoveList();
		private:
		};
	}
}