#pragma once
#include "pch.h"
namespace Spire{
namespace Doc{
/*

*/
enum class RtfTokenType : int
{
    GroupStart = 0,
    GroupEnd = 1,
    ControlWord = 2,
    Text = 3,
    TableEntry = 4,
    Unknown = 5,
};
using RtfTokenType_Type = std::underlying_type<RtfTokenType>::type;
}}