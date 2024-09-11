#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "DocumentSerializable.h"
#include "IStyle.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS Style : public virtual DocumentSerializable, public virtual IStyle
		{
		public:
			/*
			<summary>
				Gets the character format.
			</summary>
			<value>The character format.</value>
			*/
			virtual intrusive_ptr<CharacterFormat> GetCharacterFormat();
			/*
			<summary>
				Returns style name.
			</summary>
			<value></value>
			*/
			virtual LPCWSTR_S GetName();
			/*
			<summary>
				Sets style name.
			</summary>
			<value></value>
			*/
			virtual void SetName(LPCWSTR_S value);
			/*
			<summary>
				Gets the style id.
			</summary>
			*/
			virtual LPCWSTR_S GetStyleId();
			/*
			<summary>
				Gets the style type.
			</summary>
			*/
			virtual StyleType GetStyleType();
			/*
			<summary>
				Built-in Word style.
			</summary>
			<value>The built in style identifier.</value>
			*/
			//BuiltinStyle GetDefaultStyleType();
			/*
			<summary>
				Gets a value indicating whether this instance is custom style.
			</summary>
			<value>if this instance is custom, set to <c>true</c>.</value>
			*/
			bool GetIsCustomStyle();
			/*
			<summary>
				Sets a value indicating whether this instance is custom style.
			</summary>
			<value>if this instance is custom, set to <c>true</c>.</value>
			*/
			void SetIsCustomStyle(bool value);
			/*

			*/
			bool GetIsHeading();
			/*
			<summary>
				Apply base style for current style.
			</summary>
			<param name="styleName"></param>
			*/
			virtual void ApplyBaseStyle(LPCWSTR_S styleName);
			/*
			<summary>
				Applies the base style.
			</summary>
			<param name="bStyle">The built-in style.</param>
			*/
			void ApplyBaseStyle(BuiltinStyle bStyle);
			/*
			<summary>
				Clones itself
			</summary>
			<returns></returns>
			*/
			virtual intrusive_ptr<IStyle> Clone();
			/*
			<summary>
				Creates the built-in paragraph style.
			</summary>
			<param name="bstyle">The built in style.</param>
			<param name="doc">The document.</param>
			<returns></returns>
			*/
			static intrusive_ptr<Style> CreateBuiltinStyle(BuiltinStyle bStyle, intrusive_ptr<Document> doc);
			/*
			<summary>
				Creates the built-in style.
			</summary>
			<param name="bStyle">The built-in style.</param>
			<param name="type">The type.</param>
			<param name="doc">The document.</param>
			<returns></returns>
			*/
			static intrusive_ptr<IStyle> CreateBuiltinStyle(BuiltinStyle bStyle, StyleType type, intrusive_ptr<Document> doc);
			/*
			<summary>
				Converts string style names to BuiltinStyle.
			</summary>
			<param name="styleName">Name of the style.</param>
			<returns></returns>
			*/
			static BuiltinStyle NameToBuiltIn(LPCWSTR_S styleName);
		private:
			static intrusive_ptr<Style> CreateObjectByTypeName(IntPtrWithTypeName intPtrWithTypeName, Object* pParent);
		};
	}
}