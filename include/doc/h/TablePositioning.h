#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "AttrCollection.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
			<summary>
				Table Positioning
			</summary>
		*/
		class EXPORTS TablePositioning : public virtual AttrCollection
		{
		public:
			/*
			<summary>
				Gets the absolute horizontal position for table.
			</summary>
		    <value>The horiz position abs.</value>
			*/
			HorizontalPosition GetHorizPositionAbs();
			/*
			<summary>
				Sets the absolute horizontal position for table.
			</summary>
			*/
			void SetHorizPositionAbs(HorizontalPosition value);
			/*
			<summary>
				Gets the absolute vertical position for table.
			</summary>
		    <value>The horiz position abs.</value>
			*/
			VerticalPosition GetVertPositionAbs();
			/*
			<summary>
				Sets the absolute vertical position for table.
			</summary>
			*/
			void SetVertPositionAbs(VerticalPosition value);
			/*
			<summary>
				Gets the horizontal position for table.
			</summary>
		    <value>The vertical position.</value>
			*/
			float GetHorizPosition();
			/*
			<summary>
				Sets the horizontal position for table.
			</summary>
			*/
			void SetHorizPosition(float value);
			/*
			<summary>
				Gets the vertical position for table.
			</summary>
		    <value>The vertical position.</value>
			*/
			float GetVertPosition();
			/*
			<summary>
				Sets the vertical position for table.
			</summary>
			*/
			void SetVertPosition(float value);
			/*
			<summary>
				Gets the horizontal relation of the table.
			</summary>
		    <value>The horiz relation to.</value>
			*/
			HorizontalRelation GetHorizRelationTo();
			/*
			<summary>
				Sets the horizontal relation of the table.
			</summary>
			*/
			void SetHorizRelationTo(HorizontalRelation value);
			/*
			<summary>
				Gets the horizontal relation of the table.
			</summary>
		    <value>The horiz relation to.</value>
			*/
			VerticalRelation GetVertRelationTo();
			/*
			<summary>
				Sets the horizontal relation of the table.
			</summary>
			*/
			void SetVertRelationTo(VerticalRelation value);
			/*
			<summary>
				Gets the distance from top.
			</summary>
		    <value>The distance from top.</value>
			*/
			float GetDistanceFromTop();
			/*
			<summary>
				Sets the distance from top.
			</summary>
			*/
			void SetDistanceFromTop(float value);
			/*
			<summary>
				Gets the distance from bottom.
			</summary>
		    <value>The distance from bottom.</value>
			*/
			float GetDistanceFromBottom();
			/*
			<summary>
				Sets the distance from bottom.
			</summary>
			*/
			void SetDistanceFromBottom(float value);
			/*
			<summary>
				Gets the distance from left.
			</summary>
		    <value>The distance from left.</value>
			*/
			float GetDistanceFromLeft();
			/*
			<summary>
				Sets the distance from left.
			</summary>
			*/
			void SetDistanceFromLeft(float value);
			/*
			<summary>
				Gets the distance from right.
			</summary>
		    <value>The distance from right.</value>
			*/
			float GetDistanceFromRight();
			/*
			<summary>
				Sets the distance from right.
			</summary>
			*/
			void SetDistanceFromRight(float value);
			/*
			<summary>
				Clears the table positioning.
			</summary>
			*/
			virtual void ClearFormatting();
			/*

			*/
			//virtual bool Equals (System.Object obj);
			/*

			*/
			bool Equals(intrusive_ptr<TablePositioning> other);
		private:
		};
	}
}