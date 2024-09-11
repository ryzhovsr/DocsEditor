#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "BodyLayoutElement.h"
#pragma warning(pop)

namespace Spire {
    namespace  Doc {
        namespace Pages {
            /*
                <summary>
                    Represents placeholder for endnote content.
                </summary>
            */
            class EXPORTS FixedLayoutEndnote : public virtual BodyLayoutElement
            {
            public:
                /*
                <summary>
                    Returns the endnote that corresponds to the layout entity.
                </summary>
                */
                intrusive_ptr<Footnote> GetEndnote();
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