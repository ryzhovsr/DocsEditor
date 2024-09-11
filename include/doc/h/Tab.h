#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "DocumentSerializable.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS Tab : public virtual DocumentSerializable
		{
		public:
			/*
			<summary>
				Gets the justification.
			</summary>
		    <value>The justification.</value>
			*/
			TabJustification GetJustification();
			/*
			<summary>
				Sets the justification.
			</summary>
			<value>The justification.</value>
			*/
			void SetJustification(TabJustification value);
			/*
			<summary>
				Gets the tab leader.
			</summary>
		    <value>The tab leader.</value>
			*/
			TabLeader GetTabLeader();
			/*
			<summary>
				Sets the tab leader.
			</summary>
			<value>The tab leader.</value>
			*/
			void SetTabLeader(TabLeader value);
			/*
			<summary>
				Gets the position.
			</summary>
		    <value>The position.</value>
			*/
			float GetPosition();
			/*
			<summary>
				Sets the position.
			</summary>
			<value>The position.</value>
			*/
			void SetPosition(float value);
			/*

			*/
			bool Equals(intrusive_ptr<Tab> tab);
		private:
		};
	}
}