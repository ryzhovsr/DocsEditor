#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "LayoutElement.h"
#include "FixedLayoutColumn.h"
#include "FixedLayoutHeaderFooter.h"
#include "FixedLayoutComment.h"
#include "LayoutCollection.h"
#include "LayoutFixedLColumnCollection.h"
#include "LayoutFixedLHeaderFooterCollection.h"
#include "LayoutFixedLCommentCollection.h"
#pragma warning(pop)

namespace Spire {
    namespace  Doc {
        namespace Pages {
            /*
                <summary>
                    Represents page of a document.
                </summary>
            */
            class EXPORTS FixedLayoutPage : public virtual LayoutElement
            {
            public:
                /*
                <summary>
                    Provides access to the columns of the page.
                </summary>
                */
                //LayoutCollection<FixedLayoutColumn> GetColumns();
                intrusive_ptr<LayoutFixedLColumnCollection> GetColumns();
                /*
                <summary>
                    Provides access to the header and footers of the page.
                </summary>
                */
                //LayoutCollection<FixedLayoutHeaderFooter> GetHeaderFooters();
                intrusive_ptr<LayoutFixedLHeaderFooterCollection> GetHeaderFooters();
                /*
                <summary>
                    Provides access to the comments of the page.
                </summary>
                */
                intrusive_ptr<LayoutFixedLCommentCollection> GetComments();
                /*
                <summary>
                    Returns the section that corresponds to the layout entity.
                </summary>
                */
                intrusive_ptr<Section> GetSection();
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