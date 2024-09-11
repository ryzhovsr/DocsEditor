#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Doc{
/*

*/
class EXPORTS IXDLSFactory 
{
public:
    /*

    */
    virtual intrusive_ptr<IDocumentSerializable> Create (intrusive_ptr<IXDLSContentReader> reader)=0;
private:
};
}}