#pragma once
#include "pch.h"
namespace Spire{
namespace Doc{
/*

*/
enum class FontPitch : int
{
    Default = 0,
    Fixed = 1,
    Variable = 2,
};
using FontPitch_Type = std::underlying_type<FontPitch>::type;
}}