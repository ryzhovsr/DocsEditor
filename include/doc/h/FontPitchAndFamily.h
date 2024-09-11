#pragma once
#include "pch.h"
namespace Spire{
namespace Doc{
/*

*/
enum class FontPitchAndFamily : int
{
    DefaultPitch = 0,
    Fixed_Pitch = 1,
    VariablePitch = 2,
    FFDontCare = 0,
    FFRoman = 16,
    FFSwiss = 32,
    FFModern = 48,
    FFScript = 64,
    FFDecorative = 80,
};
using FontPitchAndFamily_Type = std::underlying_type<FontPitchAndFamily>::type;
}}