#pragma once
#include "common.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IEnumerable.h"
#include "ICollection.h"
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
        class EXPORTS IList : public virtual Object, public virtual ICollection<T>
        {
        public:
            /*

            */
            virtual intrusive_ptr<T> GetItem(int index)
            {
                typedef int* (*myFunc)(int*, int, int**);
                myFunc MyImport = (myFunc)symLoad(GetStaticHandle(), "IListT_get_Item");
                int** _p = new int* (0);                int* p = MyImport(instance, index, _p);                if (*_p != 0)                    throw SpireException(*_p);                delete _p;
                intrusive_ptr<T> ret = Object::Create<T>(p, this);
                return ret;
            }
            /*

            */
            virtual void SetItem(int index, intrusive_ptr<T> value)
            {
                int* intPvalue = value->GetIntPtr();

                typedef void (*myFunc)(int*, int, int*, int**);
                myFunc MyImport = (myFunc)symLoad(GetStaticHandle(), "IListT_set_Item");
                int** _p = new int* (0);                MyImport(instance, index, intPvalue, _p);                if (*_p != 0)                    throw SpireException(*_p);                delete _p;

            }

            /*

            */
            virtual int IndexOf(intrusive_ptr<T> value)
            {
                int* intPvalue = value->GetIntPtr();

                typedef int (*myFunc)(int*, int*, int**);
                myFunc MyImport = (myFunc)symLoad(GetStaticHandle(), "IListT_IndexOf");
                int** _p = new int* (0);                return MyImport(instance, intPvalue, _p);                if (*_p != 0)                    throw SpireException(*_p);                delete _p;

            }
            /*

            */
            virtual void Insert(int index, intrusive_ptr<T> value)
            {
                int* intPvalue = value->GetIntPtr();

                typedef void (*myFunc)(int*, int, int*, int**);
                myFunc MyImport = (myFunc)symLoad(GetStaticHandle(), "IListT_Insert");
                int** _p = new int* (0);                MyImport(instance, index, intPvalue, _p);                if (*_p != 0)                    throw SpireException(*_p);                delete _p;

            }

            virtual void RemoveAt(int index)
            {
                typedef void (*myFunc)(int*, int, int**);
                myFunc MyImport = (myFunc)symLoad(GetStaticHandle(), "IListT_RemoveAt");
                int** _p = new int* (0);                MyImport(instance, index, _p);                if (*_p != 0)                    throw SpireException(*_p);                delete _p;

            }
        private:
        };
    }
}