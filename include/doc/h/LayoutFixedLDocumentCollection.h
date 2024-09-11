#pragma once
#include "pch.h"
#include "LayoutCollection.h"
#include "FixedLayoutDocument.h"

#pragma warning(push)
#pragma warning(disable:4250)


namespace Spire {
    namespace  Doc {
        namespace Pages {
            class EXPORTS LayoutFixedLDocumentCollection : public LayoutCollection
            {
            public:
                /*
                <summary>
                    Returns the first entity in the collection.
                </summary>
                */
                intrusive_ptr<FixedLayoutDocument> GetFirst();
                /*
                <summary>
                    Returns the last entity in the collection.
                </summary>
                */
                intrusive_ptr<FixedLayoutDocument> GetLast();
                /*
                <summary>
                    Retrieves the entity at the given index.
                </summary>
                */
                intrusive_ptr<FixedLayoutDocument> GetItem(int index);
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