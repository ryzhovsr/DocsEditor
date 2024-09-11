#pragma once
#include "pch.h"
#include "LayoutCollection.h"
#include "FixedLayoutTextBox.h"

#pragma warning(push)
#pragma warning(disable:4250)


namespace Spire {
    namespace  Doc {
        namespace Pages {
            class EXPORTS LayoutFixedLTextBoxCollection : public LayoutCollection
            {
            public:
                /*
                <summary>
                    Returns the first entity in the collection.
                </summary>
                */
                intrusive_ptr<FixedLayoutTextBox> GetFirst();
                /*
                <summary>
                    Returns the last entity in the collection.
                </summary>
                */
                intrusive_ptr<FixedLayoutTextBox> GetLast();
                /*
                <summary>
                    Retrieves the entity at the given index.
                </summary>
                */
                intrusive_ptr<FixedLayoutTextBox> GetItem(int index);
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