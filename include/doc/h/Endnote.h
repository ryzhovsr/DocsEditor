#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS Endnote : public virtual Object
		{
		public:
			/*
			<summary>
				Gets the separator.
			</summary>
			<value>The separator.</value>
			*/
			intrusive_ptr<Body> GetSeparator();
			/*
			<summary>
				Sets the separator.
			</summary>
			<value>The separator.</value>
			*/
			void SetSeparator(intrusive_ptr<Body> value);
			/*
			<summary>
				Gets the continuation separator.
			</summary>
			<value>The continuation separator.</value>
			*/
			intrusive_ptr<Body> GetContinuationSeparator();
			/*
			<summary>
				Sets the continuation separator.
			</summary>
			<value>The continuation separator.</value>
			*/
			void SetContinuationSeparator(intrusive_ptr<Body> value);
			/*
			<summary>
				Gets the continuation notice.
			</summary>
			<value>The continuation notice.</value>
			*/
			intrusive_ptr<Body> GetContinuationNotice();
			/*
			<summary>
				Sets the continuation notice.
			</summary>
			<value>The continuation notice.</value>
			*/
			void SetContinuationNotice(intrusive_ptr<Body> value);
			/*
			<summary>
				Clones this instance.
			</summary>
			<returns>Endnote.</returns>
			*/
			intrusive_ptr<Endnote> Clone();
		private:
		};
	}
}