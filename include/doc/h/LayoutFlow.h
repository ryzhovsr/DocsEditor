#pragma once
#include "pch.h"
namespace Spire{
namespace Doc{
/*

*/
enum class LayoutFlow : int
{
    Horizontal = 0,
    Vertical = 3,
    TopToBottom = 5,
    BottomToTop = 2,
    HorizontalIdeographic = 4,
    TopToBottomIdeographic = 1,
};
using LayoutFlow_Type = std::underlying_type<LayoutFlow>::type;
}}