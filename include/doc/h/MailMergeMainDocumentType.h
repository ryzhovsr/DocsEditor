#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*

		*/
		enum class MailMergeMainDocumentType : int
		{
			NotAMergeDocument = 0,
			FormLetters = 1,
			MailingLabels = 2,
			Envelopes = 4,
			Catalog = 8,
			Email = 16,
			Fax = 32,
			Default = 0,
		};
		using MailMergeMainDocumentType_Type = std::underlying_type<MailMergeMainDocumentType>::type;
	}
}