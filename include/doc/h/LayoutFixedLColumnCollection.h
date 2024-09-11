#pragma once
#include "pch.h"
#include "FixedLayoutColumn.h"

#pragma warning(push)
#pragma warning(disable:4250)


namespace Spire {
    namespace  Doc {
        namespace Pages {
            class EXPORTS LayoutFixedLColumnCollection : public LayoutCollection
            {
            public:
                /*
                <summary>
                    Returns the first entity in the collection.
                </summary>
                */
                intrusive_ptr<FixedLayoutColumn> GetFirst();
                /*
                <summary>
                    Returns the last entity in the collection.
                </summary>
                */
                intrusive_ptr<FixedLayoutColumn> GetLast();
                /*
                <summary>
                    Retrieves the entity at the given index.
                </summary>
                */
                intrusive_ptr<FixedLayoutColumn> GetItem(int index);
                /*
                <summary>
                    Gets the number of entities in the collection.
                </summary>
                */
                int GetCount();
            };
        }
    }
}