#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Doc{
/*

*/
class EXPORTS IXDLSContentReader 
{
public:
    /*

    */
    virtual LPCWSTR_S GetTagName ()=0;
    /*

    */
    //virtual System.Xml.XmlNodeType GetNodeType ()=0;
    /*

    */
    virtual LPCWSTR_S GetAttributeValue (LPCSTR name)=0;
    /*

    */
    //virtual bool ParseElementType (System.Type enumType,System.Enum& elementType)=0;
    /*

    */
    //virtual bool ReadChildElement (System.Object value)=0;
    /*

    */
    //virtual System.Object ReadChildElement (System.Type type)=0;
    /*

    */
    virtual LPCWSTR_S ReadChildStringContent ()=0;
    /*

    */
    //virtual std::vector<System.Byte> ReadChildBinaryElement ()=0;
    /*

    */
    //virtual System.Xml.XmlReader GetInnerReader ()=0;
    /*

    */
    virtual intrusive_ptr<IXDLSAttributeReader> GetAttributeReader ()=0;
private:
};
}}