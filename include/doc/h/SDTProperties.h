#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "DocumentSerializable.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
		// <summary>
	// This element specifies the set of properties that shall be applied to the nearest ancestor structured document tag.
	// </summary>
		*/
		class EXPORTS SDTProperties : public virtual DocumentSerializable
		{
		public:
			/*
			<summary>
				Gets the id. specifes that the contents of this attribute contains a decimal number.
			</summary>
			*/
			double GetId ();
			/*
			<summary>
				Sets the id. specifes that the contents of this attribute contains a decimal number.
			</summary>
			*/
			void SetId (double value);
			/*
			<summary>
				Gets the an alias.
			</summary>
			*/
			LPCWSTR_S GetAlias();
			/*
			<summary>
				Sets the an alias.
			</summary>
			*/
			void SetAlias(LPCWSTR_S value);
			/*
			<summary>
				Gets the a value specifies that its contents contain a string.
			</summary>
			*/
			LPCWSTR_S GetTag();
			/*
			<summary>
				Sets the a value specifies that its contents contain a string.
			</summary>
			*/
			void SetTag(LPCWSTR_S value);
			/*
			<summary>
				Encapsulates all differences between different type of SDT-based content controls.
			</summary>
			*/
			intrusive_ptr<SdtControlProperties> GetControlProperties();
			/*

			*/
			void SetControlProperties(intrusive_ptr<SdtControlProperties> value);
			/*
			<summary>
				Gets the Sdt type.
			</summary>
			*/
			SdtType GetSDTType();
			/*
			<summary>
				Sets the Sdt type.
			</summary>
			*/
			void SetSDTType(SdtType value);
			/*
			<summary>
				Gets a value that specifies locking behaviors
			</summary>
			*/
			LockSettingsType GetLockSettings();
			/*
			<summary>
				Sets a value that specifies locking behaviors
			</summary>
			*/
			void SetLockSettings(LockSettingsType value);
			/*
			<summary>
				Gets a value indicating whether this instance is showing place holder.
			</summary>
			*/
			bool GetIsShowingPlaceHolder();
			/*
			<summary>
				Sets a value indicating whether this instance is showing place holder.
			</summary>
			*/
			void SetIsShowingPlaceHolder(bool value);
		private:
			intrusive_ptr<SdtControlProperties> CreateObjectByTypeName(IntPtrWithTypeName intPtrWithTypeName, Object* pParent);
		};
	}
}