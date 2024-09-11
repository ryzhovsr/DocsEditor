#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS DigitalSignature : public virtual Object
		{
		public:
			/*
			<summary>
		        Gets the type of the digital signature.
		    </summary>
			*/
			DigitalSignatureType GetType();
			/*
			<summary>
		        Gets the time the document was signed.
		    </summary>
			*/
			intrusive_ptr<DateTime> GetDateTime();
			/*
			<summary>
		        Gets the signing purpose comment.
		    </summary>
			*/
			LPCWSTR_S GetComments();
			/*
			<summary>
		        Returns true if this digital signature is valid and the document has not been tampered with.
		    </summary>
			*/
			bool GetIsValid();
			/*

			*/
			//System.Security.Cryptography.X509Certificates.X509Certificate2 GetCertificate ();
		private:
		};
	}
}