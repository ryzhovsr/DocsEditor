#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "LayoutElement.h"
//#include "LayoutCollection.h"
//#include "LayoutFixedLRowCollection.h"
#include "LayoutFixedLLineCollection.h"

#pragma warning(pop)

namespace Spire {
    namespace  Doc {
        namespace Pages {
            /*
                <summary>
                    Describes an object that includes both lines and rows.
                </summary>
            */
            class EXPORTS BodyLayoutElement : public virtual LayoutElement
            {
            public:
                /*
                <summary>
                    Gives the ability to retrieve the individual lines comprising a body.
                </summary>
                */
                //LayoutCollection<FixedLayoutLine> GetLines();
                intrusive_ptr<LayoutFixedLLineCollection> GetLines();
                /*
                <summary>
                    Gives the capability to access the rows contained within a table.
                </summary>
                */
                //LayoutCollection<FixedLayoutRow> GetRows();
                intrusive_ptr<LayoutFixedLRowCollection> GetRows();
            private:
            };
        }
    }
}