#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "BodyLayoutElement.h"
#include "TableCell.h"
#include "DocumentObject.h"
#pragma warning(pop)

namespace Spire {
    namespace  Doc {
        namespace Pages {
            /*
                <summary>
                    Describes the cell within a table.
                </summary>
            */
            class EXPORTS FixedLayoutCell : public virtual BodyLayoutElement
            {
            public:
                /*
                <summary>
                    Returns the cell that corresponds to the layout entity.
                </summary>
                */
                intrusive_ptr<TableCell> GetCell();
                /*
                <summary>
                    Provides the layout node that pertains to this particular entity.
                </summary>
                */
                virtual intrusive_ptr<DocumentObject> GetParentNode();
            private:
            };
        }
    }
}