#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "DocumentSerializable.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS FormatBase : public virtual DocumentSerializable
		{
		public:
			/*
			<summary>
				Gets a value indicating whether format is default.
			</summary>
		    <value>
		    <c>true</c> if format is default; otherwise,<c>false</c>.</value>
			*/
			virtual bool GetIsDefault();
			/*
			<summary>
				Checks if Key exists.
			</summary>
			<param name="key">The key.</param>
			<returns>
				if the specified key has key, set to <c>true</c>.
			</returns>
			*/
			bool HasKey(int key);
			/*

			*/
			//bool CheckAllHasDefineKey(int key);
			/*
			<summary>
				Clears the formatting.
			</summary>
			*/
			virtual void ClearFormatting();
			/*

			*/
			virtual void ClearBackground();
		private:
		};
	}
}