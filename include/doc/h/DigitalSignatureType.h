#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*

		*/
		enum class DigitalSignatureType : int
		{
			Unknown = 0,
			CryptoApi = 1,
			XmlDsig = 2,
		};
		using DigitalSignatureType_Type = std::underlying_type<DigitalSignatureType>::type;
	}
}