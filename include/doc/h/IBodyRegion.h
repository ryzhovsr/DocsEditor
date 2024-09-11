#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IDocumentObject.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS IBodyRegion : public virtual IDocumentObject
		{
		public:
			/*
			<summary>
				Replaces all entries of matchString regular expression with newValue string.
			</summary>
			<param name="pattern"></param>
			<param name="newValue"></param>
			*/
			//virtual int Replace (System.Text.RegularExpressions.Regex pattern,LPCWSTR_S replace)=0;
			/*
			<summary>
				Replaces by specified matchString string.
			</summary>
			<param name="matchString">The matchString.</param>
			<param name="newValue">The newValue.</param>
			<param name="caseSensitive">if it specifies case sensitive, set to <c>true</c>.</param>
			<param name="wholeWord">if it specifies to search a whole word, set to <c>true</c>.</param>
			<returns></returns>
			*/
			virtual int Replace(LPCWSTR_S given, LPCWSTR_S replace, bool caseSensitive, bool wholeWord) = 0;
			/*
			<summary>
				Replaces by specified pattern.
			</summary>
			<param name="pattern">The pattern.</param>
			<param name="textSelection">The text selection.</param>
			<returns></returns>
			*/
			//virtual int Replace (System.Text.RegularExpressions.Regex pattern,TextSelection* textSelection)=0;
		private:
		};
	}
}