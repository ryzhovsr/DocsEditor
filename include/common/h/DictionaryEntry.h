#pragma once
#include "common.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire {
#ifdef _SPIRE_XLS
    namespace Xls {
#elif defined(_SPIRE_DOC)
    namespace Doc {
#elif defined(_SPIRE_PDF)
    namespace Pdf {
#elif defined(_SPIRE_PPT)
    namespace Presentation {
#else
    namespace Xls {
#endif
        /*

        */
        template<typename K, typename V>
        class EXPORTS DictionaryEntry : public virtual Object
        {
        public:
            /*

            */
            //template<typename K>
            K* GetKey()
            {
                typedef void* (*myFunc)(int*, int**);
                myFunc MyImport = (myFunc)symLoad(GetStaticHandle(), "DictionaryEntry_get_Key");
                int** _p = new int* (0);                void* p = MyImport(instance, _p);                if (*_p != 0)                    throw SpireException(*_p);                delete _p;
                K* ret = Object::Create<K>(p, this);
                return ret;
            }
            /*

            */
            //template<typename K>
            void SetKey(K* value)
            {
                typedef void (*myFunc)(int*, int*, int**);
                myFunc MyImport = (myFunc)symLoad(GetStaticHandle(), "DictionaryEntry_set_Key");
                int** _p = new int* (0);                MyImport(instance, value->GetIntPtr(), _p);                if (*_p != 0)                    throw SpireException(*_p);                delete _p;
            }
            /*

            */
            //template<typename V>
            V* GetValue()
            {
                typedef int* (*myFunc)(int*, int**);
                myFunc MyImport = (myFunc)symLoad(GetStaticHandle(), "DictionaryEntry_get_Value");
                int** _p = new int* (0);                int* p = MyImport(instance, _p);                if (*_p != 0)                    throw SpireException(*_p);                delete _p;
                V* ret = Object::Create<V>(p, this);
                return ret;
            }
            /*

            */
            //template<typename V>
            void SetValue(V* value)
            {
                typedef void (*myFunc)(int*, int*, int**);
                myFunc MyImport = (myFunc)symLoad(GetStaticHandle(), "DictionaryEntry_set_Value");
                int** _p = new int* (0);                MyImport(instance, value->GetIntPtr(), _p);                if (*_p != 0)                    throw SpireException(*_p);                delete _p;
            }
        private:
        };
    }
}