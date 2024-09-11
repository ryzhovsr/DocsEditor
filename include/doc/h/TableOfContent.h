#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IDocumentObject.h"
#include "ParagraphBase.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS TableOfContent : public virtual ParagraphBase, public virtual IDocumentObject
		{
			friend class Object;
		public:
			TableOfContent(intrusive_ptr<IDocument> doc);

			TableOfContent(intrusive_ptr<IDocument> doc, LPCWSTR_S switches);
			/*

			*/
			bool GetUseAbsolutePos();
			/*

			*/
			void SetUseAbsolutePos(bool value);
			/*
			<summary>
				Gets a value indicating whether to use default heading styles.
			</summary>
			<value>if it uses heading styles, set to <c>true</c>.</value>
			*/
			bool GetUseHeadingStyles();
			/*
			<summary>
				Sets a value indicating whether to use default heading styles.
			</summary>
			*/
			void SetUseHeadingStyles(bool value);
			/*
			<summary>
				Gets the ending heading level of the table of content. Default value is 3.
			</summary>
			<value>The upper heading level.</value>
			*/
			int GetUpperHeadingLevel();
			/*
			<summary>
				Sets the ending heading level of the table of content. Default value is 3.
			</summary>
			*/
			void SetUpperHeadingLevel(int value);
			/*
			<summary>
				Gets the starting heading level of the table of content. Default value is 1
			</summary>
			<value>The starting heading level.</value>
			*/
			int GetLowerHeadingLevel();
			/*
			<summary>
				Sets the starting heading level of the table of content. Default value is 1
			</summary>
			*/
			void SetLowerHeadingLevel(int value);
			/*
			<summary>
				Gets a value indicating whether to use table entry fields.Default value is false.
			</summary>
			<value>
				if it uses table entry fields, set to <c>true</c>.
			</value>
			*/
			bool GetUseTableEntryFields();
			/*
			<summary>
				Sets a value indicating whether to use table entry fields.Default value is false.
			</summary>
			*/
			void SetUseTableEntryFields(bool value);
			/*
			<summary>
				Gets the table ID.
			</summary>
			<value>The table ID.</value>
			*/
			LPCWSTR_S GetTableID();
			/*
			<summary>
				Sets the table ID.
			</summary>
			*/
			void SetTableID(LPCWSTR_S value);
			/*
			<summary>
				Gets a value indicating whether to show page numbers from right side. Default value is true.
			</summary>
			<value>
				if right align of page numbers, set to <c>true</c>.
			</value>
			*/
			bool GetRightAlignPageNumbers();
			/*
			<summary>
				Sets a value indicating whether to show page numbers from right side. Default value is true.
			</summary>
			*/
			void SetRightAlignPageNumbers(bool value);
			/*
			<summary>
				Gets a value indicating whether to show page numbers. Default value is true.
			</summary>
			<value>if it includes page numbers, set to <c>true</c>.</value>
			*/
			bool GetIncludePageNumbers();
			/*
			<summary>
				Sets a value indicating whether to show page numbers. Default value is true.
			</summary>
			*/
			void SetIncludePageNumbers(bool value);
			/*
			<summary>
				Gets a value indicating whether to use hyperlinks.Default value is true.
			</summary>
			<value>if it uses hyperlinks, set to <c>true</c>.</value>
			*/
			bool GetUseHyperlinks();
			/*
			<summary>
				Sets a value indicating whether to use hyperlinks.Default value is true.
			</summary>
			*/
			void SetUseHyperlinks(bool value);
			/*
			<summary>
				Gets a value indicating whether use outline levels.Default value is false.
			</summary>
			<value>if it uses outline levels, set to <c>true</c>.</value>
			*/
			bool GetUseOutlineLevels();
			/*
			<summary>
				Sets a value indicating whether use outline levels.Default value is false.
			</summary>
			*/
			void SetUseOutlineLevels(bool value);
			/*
			<summary>
				Gets the type of the document object.
			</summary>
			<value>The type of the document object.</value>
			*/
			virtual DocumentObjectType GetDocumentObjectType();
			/*
			<summary>
				Sets the style for TOC level.
			</summary>
			<param name="levelNumber">The level number.</param>
			<param name="styleName">Name of the style.</param>
			*/
			void SetTOCLevelStyle(int levelNumber, LPCWSTR_S styleName);
			/*
			<summary>
				Gets the style name for TOC level.
			</summary>
			<param name="levelNumber">The level number.</param>
			<returns></returns>
			*/
			LPCWSTR_S GetTOCLevelStyle(int levelNumber);
		protected:
			TableOfContent();
		private:
		};
	}
}