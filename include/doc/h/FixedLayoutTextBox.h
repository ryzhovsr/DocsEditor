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
                    Represents text area inside of a shape.
                </summary>
            */
            class EXPORTS FixedLayoutTextBox : public virtual BodyLayoutElement
            {
            public:
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