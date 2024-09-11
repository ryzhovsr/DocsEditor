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
                    Represents footnote/endnote separator.
                </summary>
            */
            class EXPORTS FixedLayoutNoteSeparator : public virtual BodyLayoutElement
            {
            public:
                /*
                <summary>
                    Returns the footnote/endnote that corresponds to the layout entity.
                </summary>
                */
                intrusive_ptr<Footnote> GetFootnote();
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