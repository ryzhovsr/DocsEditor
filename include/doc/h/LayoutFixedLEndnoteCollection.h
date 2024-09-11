#pragma once
#include "pch.h"
#include "LayoutCollection.h"
#include "FixedLayoutEndnote.h"

#pragma warning(push)
#pragma warning(disable:4250)


namespace Spire {
    namespace  Doc {
        namespace Pages {
            class EXPORTS LayoutFixedLEndnoteCollection : public LayoutCollection
            {
            public:
                /*
                <summary>
                    Returns the first entity in the collection.
                </summary>
                */
                intrusive_ptr<FixedLayoutEndnote> GetFirst();
                /*
                <summary>
                    Returns the last entity in the collection.
                </summary>
                */
                intrusive_ptr<FixedLayoutEndnote> GetLast();
                /*
                <summary>
                    Retrieves the entity at the given index.
                </summary>
                */
                intrusive_ptr<FixedLayoutEndnote> GetItem(int index);
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