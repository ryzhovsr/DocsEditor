#pragma once
#include "common.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IEnumerable.h"
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
        class EXPORTS ICollection : public virtual Object, public virtual IEnumerable<T>
        {
        public:
            /*
             summary:
                 Gets the number of elements contained in the System.Collections.Generic.ICollection`1.

             result:
                 The number of elements contained in the System.Collections.Generic.ICollection`1.
            */
            virtual int GetCount()
            {
                typedef int (*myFunc)(int*, int**);
                myFunc MyImport = (myFunc)symLoad(GetStaticHandle(), "ICollectionT_get_Count");
                int** _p = new int* (0);                return MyImport(instance, _p);                if (*_p != 0)                    throw SpireException(*_p);                delete _p;
            }
            virtual bool Contains(T* value)
            {
                int* intPvalue = value->GetIntPtr();

                typedef bool (*myFunc)(int*, int*, int**);
                myFunc MyImport = (myFunc)symLoad(GetStaticHandle(), "ICollectionT_Contains");
                int** _p = new int* (0);                return MyImport(instance, intPvalue, _p);                if (*_p != 0)                    throw SpireException(*_p);                delete _p;

            }
            /*

            */
            virtual void Add(T* value)
            {
                int* intPvalue = value->GetIntPtr();

                typedef void (*myFunc)(int*, int*, int**);
                myFunc MyImport = (myFunc)symLoad(GetStaticHandle(), "ICollectionT_Add");
                int** _p = new int* (0);                MyImport(instance, intPvalue, _p);                if (*_p != 0)                    throw SpireException(*_p);                delete _p;

            }
            virtual void Clear()
            {
                typedef void (*myFunc)(int*, int**);
                myFunc MyImport = (myFunc)symLoad(GetStaticHandle(), "ICollectionT_Clear");
                int** _p = new int* (0);                MyImport(instance, _p);                if (*_p != 0)                    throw SpireException(*_p);                delete _p;

            }
            /*
             summary:
                 Gets a value indicating whether the System.Collections.Generic.ICollection`1
                 is read-only.

             result:
                 true if the System.Collections.Generic.ICollection`1 is read-only; otherwise,
                 false.
            */
            virtual bool GetIsReadOnly()
            {
                typedef bool (*myFunc)(int*, int**);
                myFunc MyImport = (myFunc)symLoad(GetStaticHandle(), "ICollectionT_get_IsReadOnly");
                int** _p = new int* (0);                return MyImport(instance, _p);                if (*_p != 0)                    throw SpireException(*_p);                delete _p;
            }
            virtual bool Remove(T* value)
            {
                int* intPvalue = value->GetIntPtr();

                typedef bool (*myFunc)(int*, int*, int**);
                myFunc MyImport = (myFunc)symLoad(GetStaticHandle(), "ICollectionT_Remove");
                int** _p = new int* (0);                return MyImport(instance, intPvalue, _p);                if (*_p != 0)                    throw SpireException(*_p);                delete _p;

            }
            virtual void CopyTo(std::vector<intrusive_ptr<T>> array, int arrayIndex)
            {
                int** intP = GetObjIntPtrArrayFromVector<T>(array);

                typedef void (*myFunc)(int*, int**, int, int, int**);
                myFunc MyImport = (myFunc)symLoad(GetStaticHandle(), "ICollectionT_CopyTo");
                int** _p = new int* (0);                MyImport(instance, intP, (int)array.size(), arrayIndex, _p);                if (*_p != 0)                    throw SpireException(*_p);                delete _p;

            }

        private:
        };
    }
}