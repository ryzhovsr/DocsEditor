#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specifies FootnoteRestartIndex.
			</summary>
		*/
		enum class FootnoteRestartRule : int
		{
			DoNotRestart = 0,
			RestartSection = 1,
			RestartPage = 2,
			Default = 0,
		};
		using FootnoteRestartRule_Type = std::underlying_type<FootnoteRestartRule>::type;
	}
}