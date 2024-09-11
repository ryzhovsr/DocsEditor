#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS WordArt : public virtual Object
		{
		public:
			/*
			<summary>
		        Defines the family of the textpath font.
		    </summary>
		    <remarks>
		    <p>The default value is Arial.</p>
		    </remarks>
			*/
			LPCWSTR_S GetFontFamily();
			/*
			<summary>
				Sets the family of the textpath font.
			</summary>
			*/
			void SetFontFamily(LPCWSTR_S value);
			/*
			<summary>
		        Defines the size of the font in points.
		    </summary>
		    <remarks>
		    <p>The default value is 36.</p>
		    </remarks>
			*/
			double GetSize();
			/*
			<summary>
				Sets the size of the font in points.
			</summary>
			*/
			void SetSize(double value);
			/*
			<summary>
		        True if the font is formatted as bold.
		    </summary>
		    <remarks>
		    <p>The default value is <b>false</b>.</p>
		    </remarks>
			*/
			bool GetBold();
			/*
			<summary>
				Sets the font is formatted as bold.
			</summary>
			*/
			void SetBold(bool value);
			/*
			<summary>
		        True if the font is formatted as italic.
		    </summary>
		    <remarks>
		    <p>The default value is <b>false</b>.</p>
		    </remarks>
			*/
			bool GetItalic();
			/*
			<summary>
				Sets the font is formatted as italic.
			</summary>
			*/
			void SetItalic(bool value);
			/*
			<summary>
		        True if the font is formatted as small capital letters.
		    </summary>
		    <remarks>
		    <p>The default value is <b>false</b>.</p>
		    </remarks>
			*/
			bool GetSmallCaps();
			/*
			<summary>
				Sets the font is formatted as small capital letters.
			</summary>
			*/
			void SetSmallCaps(bool value);
			/*
			<summary>
		        Defines the text of the text path.
		    </summary>
		    <remarks>
		    <p>The default value is an empty string.</p>
		    </remarks>
			*/
			LPCWSTR_S GetText();
			/*
			<summary>
				Gets the text of the text path.
			</summary>
			*/
			void SetText(LPCWSTR_S value);
		private:
		};
	}
}