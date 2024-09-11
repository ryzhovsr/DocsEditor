#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS TextBodyPart : public virtual Object
		{
		public:
			TextBodyPart();

			TextBodyPart(intrusive_ptr<TextBodySelection> textBodySelection);

			TextBodyPart(intrusive_ptr<TextSelection> textSelection);

			TextBodyPart(intrusive_ptr<Document> doc);
			/*
			<summary>
		        Gets the body items.
		    </summary>
		    <value>The body items.</value>
			*/
			intrusive_ptr<BodyRegionCollection> GetBodyItems();
			/*
			<summary>
		        Clears this instance.
		    </summary>
			*/
			void Clear();
			/*
            <summary>
		        Copies text from selection.
		    </summary>
		    <param name="textSel">The text selection.</param>
			*/
			void Copy(intrusive_ptr<TextSelection> textSel);
			/*
			<summary>
		        Copies text from selection.
		    </summary>
		    <param name="textSel">The text selection.</param>
			*/
			void Copy(intrusive_ptr<TextBodySelection> textSel);
			/*
			<summary>
		        Copies the specified body item.
		    </summary>
		    <param name="bodyItem">The body item.</param>
		    <param name="clone">if it is to clone, set to <c>true</c>.</param>
			*/
			void Copy(intrusive_ptr<BodyRegion> bodyItem, bool clone);
			/*
			<summary>
		        Copies the specified p item.
		    </summary>
		    <param name="pItem">The p item.</param>
		    <param name="clone">if it is to clone, set to <c>true</c>.</param>
			*/
			void Copy(intrusive_ptr<ParagraphBase> pItem, bool clone);
			/*
			<summary>
		        Pastes after specified item.
		   </summary>
		   <param name="bodyItem">The body item.</param>
			*/
			void PasteAfter(intrusive_ptr<BodyRegion> bodyItem);
			/*
			<summary>
		        Pastes after specified paragraph item.
		    </summary>
		    <param name="paragraphItem">The paragraph item.</param>
			*/
			void PasteAfter(intrusive_ptr<ParagraphBase> paragraphItem);
			/*
			<summary>
		        Pastes at specified position.
		    </summary>
		    <param name="textBody">The text body.</param>
		    <param name="itemIndex">Index of the item.</param>
			*/
			void PasteAt(intrusive_ptr<IBody> textBody, int itemIndex);
			/*
            <summary>
		        Pastes at specified position.
		    </summary>
		    <param name="textBody">The text body.</param>
		    <param name="itemIndex">Index of the item.</param>
		    <param name="pItemIndex">Index of the p item.</param>
			*/
			void PasteAt(intrusive_ptr<IBody> textBody, int itemIndex, int pItemIndex);
			/*
			<summary>
		        Pastes at end of textbody.
		    </summary>
		    <param name="textBody">The text body.</param>
			*/
			void PasteAtEnd(intrusive_ptr<IBody> textBody);
		private:
		};
	}
}