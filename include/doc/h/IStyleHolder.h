#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
		 <summary>
			 Interface publishes base functionality for style holders
		</summary>
		*/
		class EXPORTS IStyleHolder
		{
		public:
			/*
			<summary>
				Gets style name.
			</summary>
			*/
			virtual LPCWSTR_S GetStyleName() = 0;
			/*
			<summary>
			    Applies a new style.
			</summary>
			<param name="styleName"></param>
			*/
			virtual void ApplyStyle(LPCWSTR_S styleName) = 0;
			/*
			<summary>
				Applies the style.
			</summary>
		    <param name="builtinStyle">The built-in style.</param>
			*/
			virtual void ApplyStyle(BuiltinStyle builtinStyle) = 0;
		private:
		};
	}
}