#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "LayoutElement.h"
#include "FixedLayoutCell.h"
#include "LayoutFixedLCellCollection.h"
#pragma warning(pop)

namespace Spire {
    namespace  Doc {
        namespace Pages {
            /*
                <summary>
                    Represents a table row.
                </summary>
            */
            class EXPORTS FixedLayoutRow : public virtual LayoutElement
            {
            public:
                /*
                <summary>
                    Provides access to the cells of the table row.
                </summary>
                */
                //LayoutFixedLCellCollection<FixedLayoutCell> GetCells();
                intrusive_ptr<LayoutFixedLCellCollection> GetCells();
                /*
                <summary>
                    Returns the row that corresponds to the layout entity.
                </summary>
                */
                intrusive_ptr<TableRow> GetRow();
                /*
                <summary>
                    Returns the table that corresponds to the layout entity.
                </summary>
                */
                intrusive_ptr<Table> GetTable();
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