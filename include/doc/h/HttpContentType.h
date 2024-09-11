#pragma once
#include "pch.h"
namespace Spire{
namespace Doc{
/*
    <summary>
        Http content to browser.
    </summary>
*/
enum class HttpContentType : int
{
    InBrowser = 0,
    Attachment = 1,
};
using HttpContentType_Type = std::underlying_type<HttpContentType>::type;
}}