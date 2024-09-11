#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "LayoutElement.h"
#pragma warning(pop)

namespace Spire {
    namespace  Doc {
        namespace Pages {
            /*
                <summary>
                    Represents one or more characters in a line.
                </summary>
            */
            class EXPORTS FixedLayoutSpan : public virtual LayoutElement
            {
            public:
                /*
                <summary>
                    Gets kind of the span. This cannot be null.
                </summary>
                */
                LPCWSTR_S GetKind();
                /*
                <summary>
                    Exports the contents of the entity into a string in plain text format.
                </summary>
                */
                virtual LPCWSTR_S GetText();
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