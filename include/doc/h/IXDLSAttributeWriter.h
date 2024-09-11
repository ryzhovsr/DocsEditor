#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire{
namespace Doc{
/*

*/
class EXPORTS IXDLSAttributeWriter 
{
public:
    /*

    */
    virtual void WriteValue (LPCSTR name,float value)=0;
    /*

    */
    virtual void WriteValue (LPCSTR name,double value)=0;
    /*

    */
    virtual void WriteValue (LPCSTR name,int value)=0;
    /*

    */
    virtual void WriteValue (LPCSTR name,LPCSTR value)=0;
    /*

    */
    //virtual void WriteValue (LPCSTR name,System.Enum value)=0;
    /*

    */
    virtual void WriteValue (LPCSTR name,bool value)=0;
    /*

    */
    virtual void WriteValue (LPCSTR name, intrusive_ptr<Color> value)=0;
    /*

    */
    virtual void WriteValue (LPCSTR name,intrusive_ptr<DateTime> value)=0;
private:
};
}}