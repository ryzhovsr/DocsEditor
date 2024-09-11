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
		class EXPORTS CharacterFormat : public virtual WordAttrCollection
		{
			friend class Object;
		public:
			CharacterFormat(intrusive_ptr<IDocument> doc);
			/*
			<summary>
				Gets a value indicating whether to allow contextual alternates.
			</summary>
			*/
			bool GetAllowContextualAlternates();
			/*
			<summary>
				Sets a value indicating whether to allow contextual alternates.
			</summary>
			*/
			void SetAllowContextualAlternates(bool value);
			/*
			<summary>
				Gets the ligatures type.
			</summary>
			*/
			LigatureType GetLigaturesType();
			/*
			<summary>
				Sets the ligatures type.
			</summary>
			*/
			void SetLigaturesType(LigatureType value);
			/*
			<summary>
				Gets the number form type.
			</summary>
			<value>The number form.</value>
			*/
			NumberFormType GetNumberFormType();
			/*
			<summary>
				Sets the number form type.
			</summary>
			<value>The number form.</value>
			*/
			void SetNumberFormType(NumberFormType value);
			/*
			<summary>
				Gets the number space type.
			</summary>
			*/
			NumberSpaceType GetNumberSpaceType();
			/*
			<summary>
				Sets the number space type.
			</summary>
			*/
			void SetNumberSpaceType(NumberSpaceType value);
			/*
			<summary>
				Gets the stylistic set type.
			</summary>
			*/
			StylisticSetType GetStylisticSetType();
			/*
			<summary>
				Sets the stylistic set type.
			</summary>
			*/
			void SetStylisticSetType(StylisticSetType value);
			/*
			<summary>
				Clear the text background.
			</summary>
			*/
			virtual void ClearBackground();
			/*

			*/
			virtual void ClearFormatting();
			/*
			<summary>
				Returns font name
			</summary>
			*/
			LPCWSTR_S GetFontName();
			/*
			<summary>
				Sets font name
			</summary>
			*/
			void SetFontName(LPCWSTR_S value);
			/*
			<summary>
				Returns font size
			</summary>
			*/
			float GetFontSize();
			/*
			<summary>
				Sets font size
			</summary>
			*/
			void SetFontSize(float value);
			/*
			<summary>
				Returns bold style
			</summary>
			*/
			bool GetBold();
			/*
			<summary>
				Sets bold style
			</summary>
			*/
			void SetBold(bool value);
			/*
			<summary>
				Returns italic style
			</summary>
			*/
			bool GetItalic();
			/*
			<summary>
				Sets italic style
			</summary>
			*/
			void SetItalic(bool value);
			/*
			<summary>
				Returns strikeout style.
			</summary>
			*/
			bool GetIsStrikeout();
			/*
			<summary>
				Sets strikeout style.
			</summary>
			*/
			void SetIsStrikeout(bool value);
			/*
			<summary>
				Returns double strikeout style.
			</summary>
			*/
			bool GetDoubleStrike();
			/*
			<summary>
				Sets double strikeout style.
			</summary>
			*/
			void SetDoubleStrike(bool value);
			/*
			<summary>
				Returns underline style
			</summary>
			*/
			UnderlineStyle GetUnderlineStyle();
			/*
			<summary>
				Sets underline style
			</summary>
			*/
			void SetUnderlineStyle(UnderlineStyle value);
			/*
			<summary>
				Returns text emphasis mark
			</summary>
			*/
			Emphasis GetEmphasisMark();
			/*
			<summary>
				Sets text emphasis mark
			</summary>
			*/
			void SetEmphasisMark(Emphasis value);
			/*
			<summary>
				Returns text color
			</summary>
			*/
			intrusive_ptr<Color> GetTextColor();
			/*
			<summary>
				Sets text color
			</summary>
			*/
			void SetTextColor(intrusive_ptr<Color> value);
			/*
			<summary>
				Gets or sets a value specifies that the percentage by which the contents of a run shall be expanded or compressed
				with respect to its normal(100%) character width,with a minimun width of 1% and maximum width of 600%.
			</summary>
			*/
			short int GetTextScale();
			/*
			<summary>
				Sets or sets a value specifies that the percentage by which the contents of a run shall be expanded or compressed
				with respect to its normal(100%) character width,with a minimun width of 1% and maximum width of 600%.
			</summary>
			*/
			void SetTextScale(short int value);
			/*
			<summary>
				Gets text background color
			</summary>
			*/
			intrusive_ptr<Color> GetTextBackgroundColor();
			/*
			<summary>
				Sets text background color
			</summary>
			*/
			void SetTextBackgroundColor(intrusive_ptr<Color> value);
			/*
			<summary>
				Returns ssubscript/superscript mode
			</summary>
			*/
			SubSuperScript GetSubSuperScript();
			/*
			<summary>
				Sets ssubscript/superscript mode
			</summary>
			*/
			void SetSubSuperScript(SubSuperScript value);
			/*
			<summary>
				Returns space width between characters.
			</summary>
			*/
			float GetCharacterSpacing();
			/*
			<summary>
				Sets space width between characters.
			</summary>
			*/
			void SetCharacterSpacing(float value);
			/*
			<summary>
				Returns text vertical position.
			</summary>
			*/
			float GetPosition();
			/*
			<summary>
				Sets text vertical position.
			</summary>
			*/
			void SetPosition(float value);
			/*
			<summary>
				Gets shadow property of text.
			</summary>
			*/
			bool GetIsShadow();
			/*
			<summary>
				Sets shadow property of text.
			</summary>
			*/
			void SetIsShadow(bool value);
			/*
			<summary>
				Gets emboss property of text.
			</summary>
			*/
			bool GetEmboss();
			/*
			<summary>
				Sets emboss property of text.
			</summary>
			*/
			void SetEmboss(bool value);
			/*
			<summary>
				Gets Engrave property of text.
			</summary>
			*/
			bool GetEngrave();
			/*
			<summary>
				Sets Engrave property of text.
			</summary>
			*/
			void SetEngrave(bool value);
			/*
			<summary>
				Gets Hidden property of text.
			</summary>
			*/
			bool GetHidden();
			/*
			<summary>
				Sets Hidden property of text.
			</summary>
			*/
			void SetHidden(bool value);
			/*
			<summary>
				Gets AllCaps property of text.
			</summary>
			*/
			bool GetAllCaps();
			/*
			<summary>
				Sets AllCaps property of text.
			</summary>
			*/
			void SetAllCaps(bool value);
			/*
			<summary>
				Gets IsSmallCaps property of text.
			</summary>
			*/
			bool GetIsSmallCaps();
			/*
			<summary>
				Sets IsSmallCaps property of text.
			</summary>
			*/
			void SetIsSmallCaps(bool value);
			/*
			<summary>
				Returns right-to-left property of text.
			</summary>
			*/
			bool GetBidi();
			/*
			<summary>
				Sets right-to-left property of text.
			</summary>
			*/
			void SetBidi(bool value);
			/*
			<summary>
				Returns bold property for right-to-left text.
			</summary>
			*/
			bool GetBoldBidi();
			/*
			<summary>
				Sets bold property for right-to-left text.
			</summary>
			*/
			void SetBoldBidi(bool value);
			/*
			<summary>
				Returns italic property for right-to-left text.
			</summary>
			*/
			bool GetItalicBidi();
			/*
			<summary>
				Sets italic property for right-to-left text.
			</summary>
			*/
			void SetItalicBidi(bool value);
			/*
			<summary>
				Returns font size of the right-to-left text.
			</summary>
			*/
			float GetFontSizeBidi();
			/*
			<summary>
				Sets font size of the right-to-left text.
			</summary>
			*/
			void SetFontSizeBidi(float value);
			/*
			<summary>
				Gets highlight color of text.
			</summary>
			*/
			intrusive_ptr<Color> GetHighlightColor();
			/*
			<summary>
				Sets highlight color of text.
			</summary>
			*/
			void SetHighlightColor(intrusive_ptr<Color> value);
			/*
			<summary>
				Gets border.
			</summary>
			*/
			intrusive_ptr<Border> GetBorder();
			/*
			<summary>
				Gets the font used for Latin text (characters with character codes from 0 through 127).
			</summary>
			*/
			LPCWSTR_S GetFontNameAscii();
			/*
			<summary>
				Sets the font used for Latin text (characters with character codes from 0 through 127).
			</summary>
			*/
			void SetFontNameAscii(LPCWSTR_S value);
			/*
			<summary>
				Gets font name for right-to-left text.
			</summary>
			*/
			LPCWSTR_S GetFontNameBidi();
			/*
			<summary>
				Sets font name for right-to-left text.
			</summary>
			*/
			void SetFontNameBidi(LPCWSTR_S value);
			/*
			<summary>
				Gets East Asian font name.
			</summary>
			*/
			LPCWSTR_S GetFontNameFarEast();
			/*
			<summary>
				Sets East Asian font name.
			</summary>
			*/
			void SetFontNameFarEast(LPCWSTR_S value);
			/*
			<summary>
				Gets font used for characters with character codes from 128 through 255.
			</summary>
			*/
			LPCWSTR_S GetFontNameNonFarEast();
			/*
			<summary>
				Sets font used for characters with character codes from 128 through 255.
			</summary>
			*/
			void SetFontNameNonFarEast(LPCWSTR_S value);
			/*
			<summary>
				Gets the font type hint.
			</summary>
			*/
			FontTypeHint GetFontTypeHint();
			/*
			<summary>
				Sets the font type hint.
			</summary>
			*/
			void SetFontTypeHint(FontTypeHint value);
			/*
			<summary>
				Gets the ASCII locale id .
			</summary>
			<value>The ASCII locale id .</value>
			*/
			short int GetLocaleIdASCII();
			/*
			<summary>
				Sets the ASCII locale id .
			</summary>
			<value>The ASCII locale id .</value>
			*/
			void SetLocaleIdASCII(short int value);
			/*
			<summary>
				Gets the far east locale id .
			</summary>
			<value>The far east locale id .</value>
			*/
			short int GetLocaleIdFarEast();
			/*
			<summary>
				Sets the far east locale id .
			</summary>
			<value>The far east locale id .</value>
			*/
			void SetLocaleIdFarEast(short int value);
			/*
			<summary>
				Gets outline character property.
			</summary>
			*/
			bool GetIsOutLine();
			/*
			<summary>
				Sets outline character property.
			</summary>
			*/
			void SetIsOutLine(bool value);
		private:
			CharacterFormat();
		};
	}
}