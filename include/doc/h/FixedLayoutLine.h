#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "LayoutElement.h"
#include "FixedLayoutSpan.h"
#include "LayoutFixedLSpanCollection.h"
#pragma warning(pop)

namespace Spire {
    namespace  Doc {
        namespace Pages {
            /*
                <summary>
                    Represents line of characters of text and inline objects.
                </summary>
            */
            class EXPORTS FixedLayoutLine : public virtual LayoutElement
            {
            public:
                /*
                <summary>
                    Exports the contents of the entity into a string in plain text format.
                </summary>
                */
                virtual LPCWSTR_S GetText();
                /*
                <summary>
                    Returns the paragraph that corresponds to the layout entity.
                </summary>
                */
                intrusive_ptr<Paragraph> GetParagraph();
                /*
                <summary>
                    Provides access to the spans of the line.
                </summary>
                */
                //LayoutFixedLSpanCollection<FixedLayoutSpan> GetSpans();
                intrusive_ptr<LayoutFixedLSpanCollection> GetSpans();
            private:
            };
        }
    }
}