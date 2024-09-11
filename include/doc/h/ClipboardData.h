#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS ClipboardData : public virtual Object
		{
		public:
			/*
			<summary>
				Createas copy of the current object.
			</summary>
			<returns>A copy of the current object.</returns>
			*/
			//virtual System.Object Clone ();
			/*

			*/
			int Serialize(intrusive_ptr<Stream> stream);
			/*

			*/
			void Parse(intrusive_ptr<Stream> stream);
			/*
			<summary>
				Clipboard format.
			</summary>
			*/
			int Format();
			/*
			<summary>
				Clipboard data.
			</summary>
			*/
			//std::vector<System.Byte> Data ();
		private:
		};
	}
}