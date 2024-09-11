#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "DocumentObjectCollection.h"
#include "TableRow.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS RowCollection : public virtual DocumentObjectCollection
		{
		public:
			/*
			<summary>
		        Gets the <see cref="Spire.Doc.TableRow"/> at the specified index.
		    </summary>
		    <value></value>
		    <returns></returns>
			*/
			intrusive_ptr<TableRow> GetItemInRowCollection(int index);
			/*
			<summary>
				Adds a table row to collection.
			</summary>
			<param name="row">The row.</param>
			<returns></returns>
			*/
			int Add(intrusive_ptr<TableRow> row);
			/*
			<summary>
				Inserts a table row into collection.
			</summary>
			<param name="index">The index.</param>
			<param name="row">The row.</param>
			*/
			void Insert(int index, intrusive_ptr<TableRow> row);
			/*
			<summary>
				Returns index of a specified row in collection.
			</summary>
			<param name="row">The row.</param>
			<returns></returns>
			*/
			int IndexOf(intrusive_ptr<TableRow> row);
			/*
			<summary>
				Removes a specified row.
			</summary>
			<param name="row">The row.</param>
			*/
			void Remove(intrusive_ptr<TableRow> row);
		private:
		};
	}
}