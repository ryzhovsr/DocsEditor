#pragma once
#include "pch.h"
#include "LayoutElementType.h"
#include "LayoutCollection.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire {
    namespace  Doc {
        namespace Pages {
            /*
                <summary>
                    The class serves as the foundation for elements in a document that have been rendered.
                </summary>
            */
            class EXPORTS LayoutElement : public virtual Object
            {
            public:
                /*
                <summary>
                    Gets the index of a page in which rendered object. starting from 1.
                </summary>
                */
                int GetPageIndex();
                /*
                <summary>
                    Returns bounding rectangle of the entity relative to the page top left corner (in points).
                </summary>
                */
                intrusive_ptr<RectangleF> GetRectangle();
                /*
                <summary>
                    Gets the type of this layout entity.
                </summary>
                */
                LayoutElementType GetType();
                /*
                <summary>
                    Outputs the entity's contents as a plain text string.
                </summary>
                */
                virtual LPCWSTR_S GetText();
                /*
                <summary>
                    Gets the parent of this entity.
                </summary>
                */
                //intrusive_ptr<LayoutElement> GetParent();
                /*
                <summary>
                    Provides the layout node that pertains to this particular entity.
                </summary>
                */
                virtual intrusive_ptr<DocumentObject> GetParentNode();
                /*
                <summary>
                    Obtains a group of child entities that are of a specific type.
                </summary>
                <param name="type">Specifies the type of entities to select.</param>
                <param name="isDeep">True to select from all child entities recursively.
                        False to select only among immediate children</param>
                */
                //LayoutCollection<LayoutElement> GetChildEntities(LayoutElementType type, bool isDeep);
                intrusive_ptr<LayoutCollection> GetChildEntities(LayoutElementType type, bool isDeep);
            private:
            };
        }
    }
}