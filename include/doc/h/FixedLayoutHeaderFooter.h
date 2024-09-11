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
                    Represents the header/footer content on a page.
                </summary>
            */
            class EXPORTS FixedLayoutHeaderFooter : public virtual BodyLayoutElement
            {
            public:
                /*
                <summary>
                    Returns the type of the header or footer.
                </summary>
                */
                LPCWSTR_S GetKind();
            private:
            };
        }
    }
}