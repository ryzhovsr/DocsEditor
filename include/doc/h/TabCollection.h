#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "DocumentSerializableCollection.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
			<summary>
				Represents a collection of <see cref="T:Spire.Doc.Tab" /> objects
				for paragraph or paragraph format.
			</summary>
		*/
		class EXPORTS TabCollection : public virtual DocumentSerializableCollection
		{
		public:
			/*
			<summary>
				Gets the <see cref="T:Spire.Doc.Tab" /> at the specified index.
			</summary>
		    <value></value>
			*/
			intrusive_ptr<Tab> GetItem(int index);
			/*
			<summary>
		        Adds the tab.
		    </summary>
		    <returns></returns>
			*/
			intrusive_ptr<Tab> AddTab();
			/*
			<summary>
		        Adds the tab.
		    </summary>
		    <param name="position">The position.</param>
		    <param name="justification">The justification.</param>
		    <param name="leader">The leader.</param>
		    <returns></returns>
			*/
			intrusive_ptr<Tab> AddTab(float position, TabJustification justification, TabLeader leader);
			/*
			<summary>
				Adds the tab.
			</summary>
			<param name="position">The position.</param>
			<returns></returns>
			*/
			intrusive_ptr<Tab> AddTab(float position);
			/*
			<summary>
				Removes all the tabs from the tab collection.
			</summary>
			*/
			void Clear();
			/*
			<summary>
				Removes the tab at the specified index from the tab collection
			</summary>
			<param name="index"></param>
			*/
			void RemoveAt(int index);
			/*

			*/
			//virtual bool Equals (System.Object obj);
			/*

			*/
			bool Equals(intrusive_ptr<TabCollection> other);
		private:
		};
	}
}