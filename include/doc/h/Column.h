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
		class EXPORTS Column : public virtual DocumentSerializable
		{
			friend class Object;
		public:
			Column(intrusive_ptr<IDocument> doc);
			/*
			<summary>
				Returns column width.
			</summary>
			*/
			float GetWidth();
			/*
			<summary>
				Sets column width.
			</summary>
			*/
			void SetWidth(float value);
			/*
			<summary>
				Gets pacing between current and next column.
			</summary>
			*/
			float GetSpace();
			/*
			<summary>
				Sets pacing between current and next column.
			</summary>
			*/
			void SetSpace(float value);
		private:
			Column();
		};
	}
}