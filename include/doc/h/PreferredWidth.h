#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
			<summary>
				An PreferredWidth class that specifies the preferred total width of the table
			    of which this row is a part.
			</summary>
		*/
		class EXPORTS PreferredWidth : public virtual Object
		{
			friend class Object;
		public:
			PreferredWidth(WidthType type, short int value);
			/*
			<summary>
				An double value that specifies the preferred width
			</summary>
			*/
			float GetValue();
			/*
			<summary>
				A enum element from WidthType that specifies the units of measurement for the Value.
			</summary>
			*/
			WidthType GetType();
			/*
			<summary>
				Get an instance of PreferredWidth, this instance indicates
				thie preferred width is auto.
			</summary>
			*/
			static intrusive_ptr<PreferredWidth> GetAuto();
			/*
			<summary>
				Get an instance of PreferredWidth, this instance indicates
				thie preferred width is not specified.
			</summary>
			*/
			static intrusive_ptr<PreferredWidth> GetNone();
			/*

			*/
			//virtual bool Equals (System.Object obj);
			/*

			*/
			virtual int GetHashCode();
		protected:
			PreferredWidth();
		private:
		};
	}
}