#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
//#include "IEnumerable.h"
#include "LayoutElement.h"
#pragma warning(pop)

namespace Spire {
    namespace  Doc {
        namespace Pages {
            /*
                <summary>
                    Represents a generic collection of layout entity types.
                </summary>
            */
            //template<typename T>
            //class EXPORTS LayoutCollection : public virtual IEnumerable
            class EXPORTS LayoutCollection : public virtual Object
            {
            public:
                /*
                <summary>
                    Returns the first entity in the collection.
                </summary>
                */
                intrusive_ptr<LayoutElement> GetFirst();
                /*
                <summary>
                    Returns the last entity in the collection.
                </summary>
                */
                intrusive_ptr<LayoutElement> GetLast();
                /*
                <summary>
                    Retrieves the entity at the given index.
                </summary>
                */
                intrusive_ptr<LayoutElement> GetItem(int index);
                /*
                <summary>
                    Gets the number of entities in the collection.
                </summary>
                */
                int GetCount();
            private:
                intrusive_ptr<LayoutElement> CreateObjectByTypeName(IntPtrWithTypeName intPtrWithTypeName, Object* pParent);
            };
        }
    }
}