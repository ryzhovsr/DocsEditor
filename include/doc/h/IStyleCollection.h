#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "ICollectionBase.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
		<summary>
			Represents a collection of <see cref="Spire.Doc.IStyle"/> objects.
		</summary>
		*/
		class EXPORTS IStyleCollection : public virtual ICollectionBase
		{
		public:
			/*
			<summary>
				Gets the <see cref="Spire.Doc.IStyle"/> at the specified index.
			</summary>
			<value></value>
			*/
			virtual intrusive_ptr<IStyle> GetItem(int index) = 0;
			/*
			<summary>
				Adds the specified style.
			</summary>
			<param name="style">The style.</param>
			<returns></returns>
			*/
			virtual int Add(intrusive_ptr<IStyle> style) = 0;
			/*
			<summary>
				Finds a first style with specified style name
			</summary>
			<param name="name">The name.</param>
			<returns></returns>
			*/
			virtual intrusive_ptr<Style> FindByName(LPCWSTR_S name) = 0;
			/*
			<summary>
				Finds a style by style name and style type
			</summary>
			<param name="name">The name.</param>
			<param name="styleType">Type of the style.</param>
			<returns></returns>
			*/
			virtual intrusive_ptr<IStyle> FindByName(LPCWSTR_S name, StyleType styleType) = 0;
		private:
		};
	}
}