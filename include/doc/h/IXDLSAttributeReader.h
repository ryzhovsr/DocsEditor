#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Doc{
/*

*/
class EXPORTS IXDLSAttributeReader 
{
public:
    /*

    */
    virtual bool HasAttribute (LPCSTR name)=0;
    /*

    */
    virtual LPCWSTR_S ReadString (LPCSTR name)=0;
    /*

    */
    virtual int ReadInt (LPCSTR name)=0;
    /*

    */
    //virtual System.Int16 ReadShort (LPCSTR name)=0;
    /*

    */
    virtual float ReadFloat (LPCSTR name)=0;
    /*

    */
    virtual double ReadDouble (LPCSTR name)=0;
    /*

    */
    virtual bool ReadBoolean (LPCSTR name)=0;
    /*

    */
    virtual byte ReadByte (LPCSTR name)=0;
    /*

    */
    //virtual System.Enum ReadEnum (LPCSTR name,System.Type enumType)=0;
    /*

    */
    virtual intrusive_ptr<Color> ReadColor (LPCSTR name)=0;
    /*

    */
    virtual intrusive_ptr<DateTime> ReadDateTime (LPCSTR s)=0;
private:
};
}}