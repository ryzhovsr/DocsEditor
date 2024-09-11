#pragma once
#include "pch.h"
namespace Spire{
namespace Doc{
/*
    <summary>
        Endnote position of the Document.
    </summary>
*/
enum class EndnotePosition : int
{
    DisplayEndOfSection = 0,
    DisplayEndOfDocument = 3,
};
using EndnotePosition_Type = std::underlying_type<EndnotePosition>::type;
}}