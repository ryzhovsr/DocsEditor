#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specifies the ligature type.
			</summary>
		*/
		enum class LigatureType : int
		{
			None = 0,
			Standard = 1,
			Contextual = 2,
			DefaultContextual = 3,
			Historical = 4,
			DefaultHistorical = 5,
			ContextualHistorical = 6,
			DefaultContextualHistorical = 7,
			Discretional = 8,
			DefaultDiscretional = 9,
			ContextualDiscretional = 10,
			DefaultContextualDiscretional = 11,
			HistoricalDiscretional = 12,
			DefaultHistoricalDiscretional = 13,
			ContextualHistoricalDiscretional = 14,
			All = 15,
		};
		using LigatureType_Type = std::underlying_type<LigatureType>::type;
	}
}