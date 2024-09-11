#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IStyle.h"
#include "Style.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
		<summary>
			Represents a ListStyle.
		</summary>
		*/
		class EXPORTS ListStyle : public virtual Style, public virtual IStyle
		{
			friend class Object;
		public:
			ListStyle(intrusive_ptr<IDocument> doc, ListType listType);
			/*
			<summary>
				Returns list type
			</summary>
			*/
			ListType GetListType();
			/*
			<summary>
				Sets list type
			</summary>
			*/
			void SetListType(ListType value);
			/*
			<summary>
				Gets list levels collection
			</summary>
			*/
			intrusive_ptr<ListLevelCollection> GetLevels();
			/*
			<summary>
				Gets the type of the style.
			</summary>
			<value>The type of the style.</value>
			*/
			virtual StyleType GetStyleType();
			/*
			<summary>

			</summary>
			<param name="doc"></param>
			<param name="listType">List type(bulleted or numbered)</param>
			<param name="isOneLevelList"> Is it list that consist of 1 level only.</param>
			<returns></returns>
			*/
			static intrusive_ptr<ListStyle> CreateEmptyListStyle(intrusive_ptr<IDocument> doc, ListType listType, bool isOneLevelList);
			/*
			<summary>
				Clones itself
			</summary>
			<returns></returns>
			*/
			virtual intrusive_ptr<IStyle> Clone();
			/*
			<summary>

			</summary>
			<param name="levelNumber"></param>
			<returns></returns>
			*/
			intrusive_ptr<ListLevel> GetNearLevel(int levelNumber);
		protected:
			ListStyle();
		private:
		};
	}
}