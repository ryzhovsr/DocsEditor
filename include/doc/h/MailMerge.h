#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS MailMerge : public virtual Object
		{
		public:
			/*
			<summary>
				Performs mail merge operation.
			</summary>
			<param name="datatable">MailMergeDataTable</param>
			*/
			void ExecuteGroup(intrusive_ptr<MailMergeDataTable> dataSource);
			/*
			<summary>
				Gets a value indicating whether [clear fields]. by default value is true.
			</summary>
		    <value>
		    <c>true</c> if it clears the fields, set to <c>true</c>.</value>
			*/
			bool GetClearFields();
			/*
			<summary>
				Sets a value indicating whether [clear fields]. by default value is true.
			</summary>
			<value>
			<c>true</c> if it clears the fields, set to <c>true</c>.</value>
			*/
			void SetClearFields(bool value);
			/*

			*/
			MailMergeMainDocumentType GetMailMergeMainDocumentType();
			/*

			*/
			void SetMailMergeMainDocumentType(MailMergeMainDocumentType value);
			/*
			<summary>
				Gets a value indicating whether [clear group tag]. by default value is false.
			</summary>
			*/
			bool GetClearGroupTag();
			/*
			<summary>
				Sets a value indicating whether [clear group tag]. by default value is false.
			</summary>
			*/
			void SetClearGroupTag(bool value);
			/*
			<summary>
				Gets a value indicating whether to remove paragraphs which contain empty merge fields
			</summary>
			*/
			bool GetHideEmptyParagraphs();
			/*
			<summary>
				Sets a value indicating whether to remove paragraphs which contain empty merge fields
			</summary>
			*/
			void SetHideEmptyParagraphs(bool value);
			/*
			<summary>
				Gets a value indicating whether to remove groups which contain empty merge fields
			</summary>
			*/
			bool GetHideEmptyGroup();
			/*
			<summary>
				Sets a value indicating whether to remove groups which contain empty merge fields
			</summary>
			*/
			void SetHideEmptyGroup(bool value);
			/*

			*/
			//System.Collections.Generic.Dictionary`2[[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089],[System.String, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] GetMappedFields ();
			/*

			*/
			void add_MergeField(intrusive_ptr<MergeFieldEventHandler> value);
			/*

			*/
			void remove_MergeField(intrusive_ptr<MergeFieldEventHandler> value);
			/*

			*/
			void add_MergeImageField(intrusive_ptr<MergeImageFieldEventHandler> value);
			/*

			*/
			void remove_MergeImageField(intrusive_ptr<MergeImageFieldEventHandler> value);
			/*

			*/
			void add_MergeGroup(intrusive_ptr<MergeGroupEventHandler> value);
			/*

			*/
			void remove_MergeGroup(intrusive_ptr<MergeGroupEventHandler> value);
			/*

			*/
			void Execute(std::vector<LPCWSTR_S> fieldNames, std::vector<LPCWSTR_S> fieldValues);
			/*
			<summary>
				Performs mail merge from a DataRow into the document
			</summary>
			<param name="row"></param>
			*/
			//void Execute (System.Data.DataRow row);
			/*
			<summary>
				Performs mail merge operation.
			</summary>
			<param name="dataSource">IEnumerable data source</param>
			*/
			//void Execute (System.Collections.IEnumerable dataSource);
			/*
			<summary>
				Performs mail merge from a DataTable
			</summary>
			<param name="table"></param>
			*/
			//void Execute (System.Data.DataTable table);
			/*
			<summary>
				 Performs mail merge from a DataView
			</summary>
			<param name="dataView"></param>
			*/
			//void Execute (System.Data.DataView dataView);
			/*
			<summary>
				Performs mail merge from
			</summary>
			<param name="dataReader"></param>
			*/
			//void Execute (System.Data.OleDb.OleDbDataReader dataReader);
			/*
			<summary>
				Performs mail merge from a DataView
			</summary>
			<param name="dataReader"></param>
			*/
			//void Execute (System.Data.IDataReader dataReader);
			/*
			<summary>
				Performs Mail Merge within a region from a DataTable.
			</summary>
			<param name="table"></param>
			*/
			//void ExecuteWidthRegion (System.Data.DataTable table);
			/*
			<summary>
				Performs Mail Merge within a region from a DataView.
			</summary>
			<param name="dataView"></param>
			*/
			//void ExecuteWidthRegion (System.Data.DataView dataView);
			/*
			<summary>
				Performs Mail Merge within a region from a DataReader.
			</summary>
			<param name="dataReader"></param>
			*/
			//void ExecuteWidthRegion (System.Data.IDataReader dataReader);
			/*
			<summary>
				Performs mail merge operation.
			</summary>
			<param name="dataSource">MailMergeDataSet</param>
			<param name="commands">Commands list</param>
			*/
			//void ExecuteWidthNestedRegion (MailMergeDataSet* dataSource,System.Collections.Generic.List`1[[System.Collections.DictionaryEntry, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] filters);
			/*
			<summary>
				Executes nested mailmerge within a region for the specified data.
			</summary>
			<param name="conn">The Connection.</param>
			<param name="commands">The commands.</param>
			*/
			//void ExecuteWidthNestedRegion (System.Data.Common.DbConnection conn,System.Collections.Generic.List`1[[System.Collections.DictionaryEntry, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] commands);
			/*
			<summary>
				Executes the nested region.
			</summary>
			<param name="conn">The connection.</param>
			<param name="commands">The commands.</param>
			<param name="isSqlConnection">Is sql connection</param>
			*/
			//void ExecuteWidthNestedRegion (System.Data.Common.DbConnection conn,System.Collections.Generic.List`1[[System.Collections.DictionaryEntry, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] commands,bool isSqlConnection);
			/*
			<summary>
				Executes the nested region.
			</summary>
			<param name="dataSet">The data set.</param>
			<param name="commands">The commands.</param>
			*/
			//void ExecuteWidthNestedRegion (System.Data.DataSet dataSet,System.Collections.Generic.List`1[[System.Collections.DictionaryEntry, mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089]] commands);
			/*
			<summary>
				Returns a collection of mergefield names found in the document.
			</summary>
			<returns></returns>
			*/
			std::vector<LPCWSTR_S> GetMergeFieldNames();
			/*
			<summary>
				Gets the merge field names.
			</summary>
			<param name="groupName">Name of the region.</param>
			<returns></returns>
			*/
			std::vector<LPCWSTR_S> GetMergeFieldNames(LPCWSTR_S groupName);
			/*
			<summary>
				Gets the merge field names.
			</summary>
			<param name="groupName">Name of the region.</param>
			<returns></returns>
			*/
			std::vector<LPCWSTR_S> GetMergeGroupNames();
		private:
		};
	}
}