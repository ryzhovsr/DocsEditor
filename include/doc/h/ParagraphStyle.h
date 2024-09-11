#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IStyle.h"
#include "Style.h"
#include "IParagraphStyle.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
		<summary>
			Represents a style of paragraph.
		</summary>
		*/
		class EXPORTS ParagraphStyle : public virtual Style, public virtual IStyle, public virtual IParagraphStyle
		{
			friend class Object;
		public:
			using Style::ApplyBaseStyle;
			ParagraphStyle(intrusive_ptr<IDocument> doc);
			virtual intrusive_ptr<CharacterFormat> GetCharacterFormat();
			/*
			<summary>
				Gets formatting of paragraph.
			</summary>
			<value></value>
			*/
			virtual intrusive_ptr<ParagraphFormat> GetParagraphFormat();
			/*
			<summary>
				Gets a base style of paragraph.
			</summary>
			*/
			intrusive_ptr<ParagraphStyle> GetBaseStyle();
			/*
			<summary>
				Gets the type of the style.
			</summary>
			<value>The type of the style.</value>
			*/
			virtual StyleType GetStyleType();
			/*
			<summary>
				Gets format of the list for the paragraph.
			</summary>
			*/
			intrusive_ptr<ListFormat> GetListFormat();
			/*
			<summary>
				Applies the base style.
			</summary>
			<param name="bStyle">The built-in style.</param>
			*/
			virtual void ApplyBaseStyle(LPCWSTR_S styleName);
			/*
			<summary>
				Clones itself
			</summary>
			<returns></returns>
			*/
			virtual intrusive_ptr<IStyle> Clone();
		protected:
			ParagraphStyle();
		private:
		};
	}
}