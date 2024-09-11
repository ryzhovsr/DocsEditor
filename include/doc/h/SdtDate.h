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
			Specifies that the Sdt shall be a date picker when displayed in the document.
		</summary>
		*/
		class EXPORTS SdtDate : public virtual SdtControlProperties
		{
		public:
			SdtDate();
			/*
			<summary>
				<para>
				  This element specifies the language ID which shall be used for displaying a calendar for the current date picker
				  structured document tag, if a user interface is present for the sdt.
				</para>
				<para>
				  If this element is omitted, then the language ID shall be the language ID of the run contents of the parent
				  structured document tag.
				</para>
			</summary>
			*/
			int GetLid();
			/*

			*/
			void SetLid(int value);
			/*
			<summary>
				The element specifies the display format which shall be used to format any date entered into the parent
				structured document tag in full DateTime format [Example: Through a user interface (a date picker), or through
				custom XML data associated with this structured document tag via the <see cref="SdtDataBinding"/> element  end
				example] before displaying it in the structured document tag's run content.
			</summary>
			<remarks>
				If this element is omitted, then the date shall be formatted using the standard date display mask for the
				language ID specified on the <see cref="Lid"/> element if present, or the language ID of the run contents
				otherwise.
			</remarks>
			*/
			LPCWSTR_S GetDateFormatSpire();
			/*

			*/
			void SetDateFormatSpire(LPCWSTR_S value);
			/*
			<summary>
				Date Picker Calendar Type, specifies the calendar which shall be displayed for the current date picker structured document
				tag, if a user interface is present for the structured document tag.
			</summary>
			*/
			CalendarType GetCalendarType();
			/*

			*/
			void SetCalendarType(CalendarType value);
			/*
			<summary>
				Specifies the full date and time last entered into the parent structured document tag
				using the standard XML Schema DateTime syntax.
			</summary>
			*/
			intrusive_ptr<DateTime> GetFullDate();
			/*

			*/
			void SetFullDate(intrusive_ptr<DateTime> value);
		private:
		};
	}
}