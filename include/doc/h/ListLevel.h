#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "DocumentSerializable.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
		<summary>
			Summary description for WListLevel.
		</summary>
		*/
		class EXPORTS ListLevel : public virtual DocumentSerializable
		{
		public:
			/*
			<summary>
				Gets alignment (left, right, or centered) of the paragraph number.
			</summary>
			*/
			ListNumberAlignment GetNumberAlignment();
			/*
			<summary>
				Sets alignment (left, right, or centered) of the paragraph number.
			</summary>
			*/
			void SetNumberAlignment(ListNumberAlignment value);
			/*
			<summary>
				Gets start at value.
			</summary>
			*/
			int GetStartAt();
			/*
			<summary>
				Sets start at value.
			</summary>
			*/
			void SetStartAt(int value);
			/*
			<summary>
				Gets spacing after list level's number or bullet
				( tab position if follow character is tab ).
			</summary>
			*/
			float GetTabSpaceAfter();
			/*
			<summary>
				Sets spacing after list level's number or bullet
				( tab position if follow character is tab ).
			</summary>
			*/
			void SetTabSpaceAfter(float value);
			/*
			<summary>
				Returns left listlevel indent
			</summary>
			*/
			float GetTextPosition();
			/*
			<summary>
				Sets left listlevel indent
			</summary>
			*/
			void SetTextPosition(float value);
			/*
			<summary>
				Gets prefix pattern for numbered level.
			</summary>
			*/
			LPCWSTR_S GetNumberPrefix();
			/*
			<summary>
				Sets prefix pattern for numbered level.
			</summary>
			*/
			void SetNumberPrefix(LPCWSTR_S value);
			/*
			<summary>
				Gets suffix pattern for numbered level.
			</summary>
			*/
			LPCWSTR_S GetNumberSufix();
			/*
			<summary>
				Sets suffix pattern for numbered level.
			</summary>
			*/
			void SetNumberSufix(LPCWSTR_S value);
			/*
			<summary>
				Get bullet pattern
			</summary>
			*/
			LPCWSTR_S GetBulletCharacter();
			/*
			<summary>
				Set bullet pattern
			</summary>
			*/
			void SetBulletCharacter(LPCWSTR_S value);
			/*
			<summary>
				Gets list numbering type.
			</summary>
			*/
			ListPatternType GetPatternType();
			/*
			<summary>
				Sets list numbering type.
			</summary>
			*/
			void SetPatternType(ListPatternType value);
			/*
			<summary>
				True if the level's number sequence is not restarted by higher
				(more significant) levels in the list.
			</summary>
			*/
			bool GetNoRestartByHigher();
			/*
			<summary>
				True if the level's number sequence is not restarted by higher
				(more significant) levels in the list.
			</summary>
			*/
			void SetNoRestartByHigher(bool value);
			/*
			<summary>
				Gets character format of list symbol.
			</summary>
			*/
			intrusive_ptr<CharacterFormat> GetCharacterFormat();
			/*
			<summary>
				Gets paragraph format of list level.
			</summary>
			*/
			intrusive_ptr<ParagraphFormat> GetParagraphFormat();
			/*
			<summary>
				Gets the type of character following the number text for the paragraph.
			</summary>
			*/
			FollowCharacterType GetFollowCharacter();
			/*
			<summary>
				Sets the type of character following the number text for the paragraph.
			</summary>
			*/
			void SetFollowCharacter(FollowCharacterType value);
			/*
			<summary>
				Get ArabaicNumberFormat property
				( true if the level turns all inherited numbers to arabic,
				false if it preserves their number format code ).
			</summary>
			*/
			bool GetIsLegalStyleNumbering();
			/*
			<summary>
				Set ArabaicNumberFormat property
				( true if the level turns all inherited numbers to arabic,
				false if it preserves their number format code ).
			</summary>
			*/
			void SetIsLegalStyleNumbering(bool value);
			/*
			<summary>
				Get number/bullet position for current listlevel.
			</summary>
			*/
			float GetNumberPosition();
			/*
			<summary>
				Set number/bullet position for current listlevel.
			</summary>
			*/
			void SetNumberPosition(float value);
			/*
			<summary>
				When true, number generated will include previous
				levels (used for legal numbering).
			</summary>
			*/
			bool GetUsePrevLevelPattern();
			/*
			<summary>
				When true, number generated will include previous
				levels (used for legal numbering).
			</summary>
			*/
			void SetUsePrevLevelPattern(bool value);
			/*
			<summary>
				Gets list symbol for specified item index
			</summary>
			<param name="listItemIndex"></param>
			<returns></returns>
			*/
			LPCWSTR_S GetListItemText(int listItemIndex, ListType listType);
			/*
			<summary>
				Clones this instance.
			</summary>
			<returns></returns>
			*/
			intrusive_ptr<ListLevel> Clone();
		private:
		};
	}
}