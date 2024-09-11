#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "BodyLayoutElement.h"
#include "LayoutFixedLFootnoteCollection.h"
#pragma warning(pop)

namespace Spire {
    namespace  Doc {
        namespace Pages {
            /*
                <summary>
                    Represents a column of text on a page.
                </summary>
            */
            class EXPORTS FixedLayoutColumn : public virtual BodyLayoutElement
            {
            public:
                /*
                <summary>
                    Provides access to the footnotes of the page.
                </summary>
                */
                //LayoutFixedLFootnoteCollection<FixedLayoutFootnote> GetFootnotes();
                intrusive_ptr<LayoutFixedLFootnoteCollection> GetFootnotes();
                /*
                <summary>
                    Provides access to the endnotes of the page.
                </summary>
                */
                //LayoutFixedLFootnoteCollection<FixedLayoutEndnote> GetEndnotes();
                intrusive_ptr<LayoutFixedLEndnoteCollection> GetEndnotes();
                /*
                <summary>
                    Provides access to the note separators of the page.
                </summary>
                */
                //LayoutFixedLFootnoteCollection<FixedLayoutNoteSeparator> GetNoteSeparators();
                intrusive_ptr<LayoutFixedLNoteSeparatorCollection> GetNoteSeparators();
                /*
                <summary>
                    Returns the body that corresponds to the layout entity.
                </summary>
                */
                intrusive_ptr<Body> GetBody();
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