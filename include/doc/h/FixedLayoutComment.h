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
                    Represents placeholder for comment content.
                </summary>
            */
            class EXPORTS FixedLayoutComment : public virtual BodyLayoutElement
            {
            public:
                /*
                <summary>
                    Returns the comment that corresponds to the layout entity.
                </summary>
                */
                intrusive_ptr<Comment> GetComment();
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