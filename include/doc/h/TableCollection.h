#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "DocumentSubsetCollection.h"
#include "ITableCollection.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
			<summary>
				Represents a collection of <see cref="!:Spire.Doc.ITable" /> objects.
			</summary>
		*/
		class EXPORTS TableCollection : public virtual DocumentSubsetCollection, public virtual ITableCollection
		{
		public:
			/*

			*/
			virtual intrusive_ptr<ITable> GetItemInTableCollection(int index);
			/*
			<summary>
				Adds a table to end of text body.
			</summary>
			<param name="table">The table.</param>
			<returns></returns>
			*/
			virtual int Add(intrusive_ptr<ITable> table);
			/*
			<summary>
				Determines whether the <see cref="!:Spire.Doc.ITableCollection" /> contains a specific value.
			</summary>
			<param name="table">The table.</param>
			<returns>
				If table found, set to <c>true</c>.
			</returns>
			*/
			virtual bool Contains(intrusive_ptr<ITable> table);
			/*
			<summary>
				Determines the index of a specific item in the <see cref="!:Spire.Doc.ITableCollection" />.
			</summary>
			<param name="table">The table.</param>
			<returns></returns>
			*/
			virtual int IndexOf(intrusive_ptr<ITable> table);
			/*
			<summary>
				Inserts a table into collection at the specified index.
			</summary>
			<param name="index">The index.</param>
			<param name="table">The table.</param>
			<returns></returns>
			*/
			int Insert(int index, intrusive_ptr<ITable> table);
			/*
			<summary>
				Removes the specified table.
			</summary>
			<param name="table">The table.</param>
			*/
			void Remove(intrusive_ptr<ITable> table);
			/*
			<summary>
				Removes the table at the specified index from the collection.
			</summary>
			<param name="index">The index.</param>
			*/
			void RemoveAt(int index);
		private:
		};
	}
}