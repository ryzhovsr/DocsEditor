#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Doc{
/*

*/
class EXPORTS IXDLSContentWriter 
{
public:
    /*

    */
    //virtual void WriteChildBinaryElement (LPCSTR name,std::vector<System.Byte> value)=0;
    /*

    */
    virtual void WriteChildStringElement (LPCSTR name,LPCSTR value)=0;
    /*

    */
    //virtual void WriteChildElement (LPCSTR name,System.Object value)=0;
    /*

    */
    virtual void WriteChildRefElement (LPCSTR name,int refToElement)=0;
    /*

    */
    //virtual System.Xml.XmlWriter GetInnerWriter ()=0;
private:
};
}}