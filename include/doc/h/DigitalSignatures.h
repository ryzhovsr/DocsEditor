#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS DigitalSignatures : public virtual Object
		{
		public:
			/*
			<summary>
				Returns <c>true</c> if all digital signatures in this collection are valid and the document has not been tampered with
				Also returns <c>true</c> if there are no digital signatures.
				Returns <c>false</c> if at least one digital signature is invalid.
			</summary>
			*/
			bool GetIsValid();
			/*
			<summary>
				Gets the number of elements contained in the collection.
			</summary>
			*/
			int GetCount();
			/*
			<summary>
				Gets a document signature at the specified index.
			</summary>
			<param name="index">Zero-based index of the signature.</param>
			*/
			intrusive_ptr<DigitalSignature> GetItem(int index);
			/*

			*/
			//virtual System.Collections.IEnumerator GetEnumerator ();
		private:
		};
	}
}