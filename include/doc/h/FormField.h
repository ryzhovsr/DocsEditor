#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "Field.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS FormField : public virtual Field
		{
		public:
			/*
			<summary>
				Gets type of this form field.
			</summary>
			*/
			FormFieldType GetFormFieldType();
			/*
			<summary>
				Gets form field title name (bookmark name).
				The name is unique in the document.
			</summary>
			*/
			LPCWSTR_S GetName();
			/*
			<summary>
				Sets form field title name (bookmark name).
				The name is unique in the document.
			</summary>
			*/
			void SetName(LPCWSTR_S value);
			/*
			<summary>
				Gets form field help.
			</summary>
			*/
			LPCWSTR_S GetHelp();
			/*
			<summary>
				Sets form field help.
			</summary>
			*/
			void SetHelp(LPCWSTR_S value);
			/*
			<summary>
				Gets the status bar help.
			</summary>
			<value>The status bar help.</value>
			*/
			LPCWSTR_S GetStatusBarHelp();
			/*
			<summary>
				Sets the status bar help.
			</summary>
			<value>The status bar help.</value>
			*/
			void SetStatusBarHelp(LPCWSTR_S value);
			/*
			<summary>
				Returns the name of macros on start
			</summary>
			*/
			LPCWSTR_S GetMacroOnStart();
			/*
			<summary>
				Sets sthe name of macros on start
			</summary>
			*/
			void SetMacroOnStart(LPCWSTR_S value);
			/*
			<summary>
				Returns the name of macros on end
			</summary>
			*/
			LPCWSTR_S GetMacroOnEnd();
			/*
			<summary>
				Sets the name of macros on end
			</summary>
			*/
			void SetMacroOnEnd(LPCWSTR_S value);
			/*
			<summary>
				Gets Enabled property (true if form field enabled).
			</summary>
			*/
			bool GetEnabled();
			/*
			<summary>
				Sets Enabled property (true if form field enabled).
			</summary>
			*/
			void SetEnabled(bool value);
			/*
			<summary>
				Gets calculate on exit property.
			</summary>
			*/
			bool GetCalculateOnExit();
			/*
			<summary>
				Sets calculate on exit property.
			</summary>
			*/
			void SetCalculateOnExit(bool value);
		private:
		};
	}
}