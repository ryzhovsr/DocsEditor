#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "CollectionEx.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
			<summary>
				Summary description for TextBoxCollection.
			</summary>
		*/
		class EXPORTS TextBoxCollection : public virtual CollectionEx
		{
		public:
			/*
			<summary>
				Gets the textbox at the specified index.
			</summary>
		    <value></value>
			*/
			intrusive_ptr<TextBox> GetItem(int index);
			/*
			<summary>
				Removes a textbox at the specified index.
			</summary>
			<param name="index">The index.</param>
			*/
			void RemoveAt(int index);
			/*
			<summary>
				Removes all textboxes from the document.
			</summary>
			*/
			void Clear();
		private:
		};
	}
}