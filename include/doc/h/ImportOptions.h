#pragma once
#include "pch.h"
namespace Spire{
namespace Doc{
/*

*/
enum class ImportOptions : int
{
    KeepSourceFormatting = 0,
    MergeFormatting = 1,
    KeepTextOnly = 2,
    UseDestinationStyles = 3,
};
using ImportOptions_Type = std::underlying_type<ImportOptions>::type;
}}