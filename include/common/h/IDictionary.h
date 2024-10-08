#pragma once
#include "common.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IEnumerable.h"
#include "ICollection.h"
#include "IDictionaryEnumerator.h"
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
        class EXPORTS IDictionary : public virtual Object, public virtual ICollection<K>, public virtual ICollection<V>
        {
        public:
            /*

            */
            //virtual System.Object GetItem (System.Object key)=0;
            /*

            */
            //virtual void SetItem (System.Object key,System.Object value)=0;
            /*

            */
            //template<typename K>
            ICollection<K>* GetKeys()
            {
                typedef int* (*myFunc)(int*, int**);
                myFunc MyImport = (myFunc)symLoad(GetStaticHandle(), "IDictionary_get_Keys");
                int** _p = new int* (0);                int* p = MyImport(instance, _p);                if (*_p != 0)                    throw SpireException(*_p);                delete _p;
                ICollection<K>* ret = Object::Create<ICollection<K>>(p, this);
                return ret;
            }
            /*

            */
            //template<typename V>
            ICollection<V>* GetValues()
            {
                typedef int* (*myFunc)(int*, int**);
                myFunc MyImport = (myFunc)symLoad(GetStaticHandle(), "IDictionary_get_Values");
                int** _p = new int* (0);                int* p = MyImport(instance, _p);                if (*_p != 0)                    throw SpireException(*_p);                delete _p;
                ICollection<V>* ret = Object::Create<ICollection<V>>(p, this);
                return ret;
            }
            /*

            */
            //virtual bool Contains (System.Object key)=0;
            /*

            */
            //virtual void Add (System.Object key,System.Object value)=0;
            /*

            */
            virtual void Clear()
            {
                typedef void (*myFunc)(int*, int**);
                myFunc MyImport = (myFunc)symLoad(GetStaticHandle(), "IDictionary_Clear");
                int** _p = new int* (0);                MyImport(instance, _p);                if (*_p != 0)                    throw SpireException(*_p);                delete _p;

            }
            /*

            */
            virtual bool GetIsReadOnly()
            {
                typedef bool (*myFunc)(int*, int**);
                myFunc MyImport = (myFunc)symLoad(GetStaticHandle(), "IDictionary_get_IsReadOnly");
                int** _p = new int* (0);                return MyImport(instance, _p);                if (*_p != 0)                    throw SpireException(*_p);                delete _p;
            }
            /*

            */
            virtual bool GetIsFixedSize()
            {
                typedef bool (*myFunc)(int*, int**);
                myFunc MyImport = (myFunc)symLoad(GetStaticHandle(), "IDictionary_get_IsFixedSize");
                int** _p = new int* (0);                return MyImport(instance, _p);                if (*_p != 0)                    throw SpireException(*_p);                delete _p;
            }
            /*

            */
            //template<typename K, typename V>
            IDictionaryEnumerator<K, V>* GetEnumerator()
            {
                typedef int* (*myFunc)(int*, int**);
                myFunc MyImport = (myFunc)symLoad(GetStaticHandle(), "IDictionary_GetEnumerator");
                int** _p = new int* (0);                int* p = MyImport(instance, _p);                if (*_p != 0)                    throw SpireException(*_p);                delete _p;
                IDictionaryEnumerator<K, V>* ret = Object::Create<IDictionaryEnumerator<K, V>>(p, this);
                return ret;

            }
            /*

            */
            //virtual void Remove (System.Object key)=0;
        private:
        };
    }
}