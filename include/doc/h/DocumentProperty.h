#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS DocumentProperty : public virtual Object
		{
		public:
			/*
			<summary>
			   Returns property name.
			</summary>
			*/
			LPCWSTR_S GetName();
			/*
			<summary>
				Gets the property value.
			</summary>
			*/
			intrusive_ptr<Object> GetValue();
			/*
			<summary>
				Sets the property value.
			</summary>
			*/
			void SetValue (intrusive_ptr<Object> value);
			/*
			<summary>
				Gets the type of the value.
			</summary>
			<value>The type of the value.</value>
			*/
			PropertyValueType GetValueType();
			/*
			<summary>
				Gets clipboard data value.
			</summary>
			*/
			intrusive_ptr<ClipboardData> GetClipboardData();
			/*
			<summary>
				Sets clipboard data value.
			</summary>
			*/
			void SetClipboardData(intrusive_ptr<ClipboardData> value);
			/*
			<summary>
				To the bool.
			</summary>
			<returns></returns>
			*/
			bool ToBool();
			/*
			<summary>
				Convert the object in DateTime.
			</summary>
			<returns></returns>
			*/
			intrusive_ptr<DateTime> ToDateTime();
			/*
			<summary>
				Convert the object in float value.
			</summary>
			<returns></returns>
			*/
			float ToFloat();
			/*
			<summary>
				Convert the object in double.
			</summary>
			<returns></returns>
			*/
			double ToDouble();
			/*
			<summary>
				Convert the object in Int value.
			</summary>
			<returns></returns>
			*/
			int ToInt();
			/*
			<summary>
				Returns a <see cref="T:System.String"/> that represents the current <see cref="T:System.Object"/>.
		   </summary>
		   <returns>
				A <see cref="T:System.String"/> that represents the current <see cref="T:System.Object"/>.
		   </returns>
			*/
			virtual LPCWSTR_S ToString();
			/*
			<summary>
				Convert the object as byte array.
			</summary>
			<returns></returns>
			*/
			//std::vector<System.Byte> ToByteArray ();
			/*
			<summary>
				 Creates a new object that is a copy of the current instance.
			</summary>
			<returns>A new object that is a copy of this instance.</returns>
			*/
			intrusive_ptr<DocumentProperty> Clone();
		private:
		};
	}
}