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
	        Office2010 SDT checkbox control properties.
	    </summary>
		*/
		class EXPORTS SdtCheckBox : public virtual SdtControlProperties
		{
		public:
			SdtCheckBox();
			/*
			<summary>
				Indicates if checkbox is in checked state.
			</summary>
			*/
			bool GetChecked();
			/*
			<summary>
				Indicates if checkbox is in checked state.
			</summary>
			*/
			void SetChecked(bool value);
			/*
			<summary>
				Font name used for checked state.
			</summary>
			*/
			LPCWSTR_S GetCheckedStateFontName();
			/*
			<summary>
				Font name used for checked state.
			</summary>
			*/
			void SetCheckedStateFontName(LPCWSTR_S value);
			/*
			<summary>
				Character code used for checked state.
			</summary>
			*/
			int GetCheckedStateCharacterCode();
			/*
			<summary>
				Character code used for checked state.
			</summary>
			*/
			void SetCheckedStateCharacterCode(int value);
			/*
			<summary>
				Font name used for unchecked state.
			</summary>
			*/
			LPCWSTR_S GetUnCheckedStateFontName();
			/*
			<summary>
				Font name used for unchecked state.
			</summary>
			*/
			void SetUnCheckedStateFontName(LPCWSTR_S value);
			/*
			<summary>
				Character code used for unchecked state.
			</summary>
			*/
			int GetUnCheckedStateCharacterCode();
			/*
			<summary>
				Character code used for unchecked state.
			</summary>
			*/
			void SetUnCheckedStateCharacterCode(int value);
			/*

			*/
			//static System.Char DefaultCheckedState ();
			/*

			*/
			//static System.Char DefaultUncheckedState ();
			/*

			*/
			static LPCWSTR_S DefaultFontName();
		private:
		};
	}
}