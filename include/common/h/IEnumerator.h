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
        template<typename T>
        class EXPORTS IEnumerator : public virtual Object
        {
        public:
            bool MoveNext()
            {
                typedef bool (*myFunc)(int*, int**);
                myFunc MyImport = (myFunc)symLoad(GetStaticHandle(), "IEnumerator_MoveNext");
                int** _p = new int* (0);                return MyImport(instance, _p);                if (*_p != 0)                    throw SpireException(*_p);                delete _p;

            }
            T* GetCurrent()
            {
                typedef int* (*myFunc)(int*, int**);
                myFunc MyImport = (myFunc)symLoad(GetStaticHandle(), "IEnumerator_get_Current");
                int** _p = new int* (0);                int* p = MyImport(instance, _p);                if (*_p != 0)                    throw SpireException(*_p);                delete _p;
                T* ret = Object::Create<T>(p, this);
                return ret;
            }
            void Reset()
            {
                typedef void (*myFunc)(int*, int**);
                myFunc MyImport = (myFunc)symLoad(GetStaticHandle(), "IEnumerator_Reset");
                int** _p = new int* (0);                MyImport(instance, _p);                if (*_p != 0)                    throw SpireException(*_p);                delete _p;

            }
        private:
        };
    }
}