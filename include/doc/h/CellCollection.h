#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "DocumentObjectCollection.h"
#include "TableCell.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
			<summary>
				Represents a collection of <see cref="T:Spire.Doc.TableCell" /> objects.
			</summary>
		*/
		class EXPORTS CellCollection : public virtual DocumentObjectCollection
		{
		public:
			/*

			*/
			intrusive_ptr<TableCell> GetItemInCellCollection(int index);
			/*
			<summary>
				Adds the specified cell.
			</summary>
			<param name="cell">The cell.</param>
			<returns></returns>
			*/
			int Add(intrusive_ptr<TableCell> cell);
			/*
			<summary>
				Inserts a specified table cell into collection.
			</summary>
			<param name="index">The index.</param>
			<param name="cell">The cell.</param>
			*/
			void Insert(int index, intrusive_ptr<TableCell> cell);
			/*
			<summary>
				Returns index of a specified cell in collection.
			</summary>
			<param name="cell">The cell.</param>
			<returns></returns>
			*/
			int IndexOf(intrusive_ptr<TableCell> cell);
			/*
			<summary>
				Removes the specified cell.
			</summary>
			<param name="cell">The cell.</param>
			*/
			void Remove(intrusive_ptr<TableCell> cell);
			/*
			<summary>
				Removes the document object at the specified index from the collection.
			</summary>
			<param name="index">The index.</param>
			*/
			void RemoveAt(int index);
		private:
			intrusive_ptr<TableCell> CreateObjectByTypeName(IntPtrWithTypeName intPtrWithTypeName, Object* pParent);
		};
	}
}