#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "LayoutElement.h"
#include "FixedLayoutPage.h"
//#include "LayoutCollection.h"
#include "LayoutFixedLPagesCollection.h"
#pragma warning(pop)

namespace Spire {
    namespace  Doc {
        namespace Pages {
            /*

            */
            class EXPORTS FixedLayoutDocument : public virtual LayoutElement
            {
                friend class Object;
            public:
                FixedLayoutDocument(intrusive_ptr<Document> doc);
                /*
                <summary>
                    Provides access to the pages of a document.
                </summary>
                */
                intrusive_ptr<Spire::Doc::Pages::LayoutFixedLPagesCollection> GetPages();
                /*
                <summary>
                    Provides the layout node that pertains to this particular entity.
                </summary>
                */
                virtual intrusive_ptr<DocumentObject> GetParentNode();
                /*
                <summary>
                    Returns all the layout entities of the specified node.
                </summary>
                */
                //LayoutCollection<LayoutElement> GetLayoutEntitiesOfNode(intrusive_ptr<DocumentObject> node);
                intrusive_ptr<LayoutCollection> GetLayoutEntitiesOfNode(intrusive_ptr<DocumentObject> node);
            protected:
                FixedLayoutDocument();
            private:
            };
        }
    }
}