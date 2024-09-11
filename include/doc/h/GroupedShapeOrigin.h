#pragma once
#include "pch.h"
namespace Spire{
namespace Doc{
/*
    <summary>
          Specify vertical/horizontal origin the object in the GroupedShape.
    </summary>
*/
enum class GroupedShapeOrigin : int
{
    UpperLeftCorner = 0,
    Center = 1,
};
using GroupedShapeOrigin_Type = std::underlying_type<GroupedShapeOrigin>::type;
}}