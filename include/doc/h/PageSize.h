#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*
		<summary>
	        Represents information about page size.
	    </summary>
		*/
		class EXPORTS PageSize : public virtual Object
		{
		public:
			/*
			<summary>
		        A3 format.
		    </summary>
			*/
			static intrusive_ptr<SizeF> A3();
			/*
			<summary>
		        A4 format.
		    </summary>
			*/
			static intrusive_ptr<SizeF> A4();
			/*
			<summary>
		        A5 format.
		    </summary>
			*/
			static intrusive_ptr<SizeF> A5();
			/*
			<summary>
		        A6 format.
		    </summary>
			*/
			static intrusive_ptr<SizeF> A6();
			/*
			<summary>
		        B4 format.
		    </summary>
			*/
			static intrusive_ptr<SizeF> B4();
			/*
			<summary>
		        B5 format.
		    </summary>
			*/
			static intrusive_ptr<SizeF> B5();
			/*
			<summary>
		        B6 format.
		    </summary>
			*/
			static intrusive_ptr<SizeF> B6();
			/*
			<summary>
		        Letter format.
		    </summary>
			*/
			static intrusive_ptr<SizeF> Letter();
			/*
			<summary>
		        HalfLetter format.
		    </summary>
			*/
			static intrusive_ptr<SizeF> HalfLetter();
			/*
		    <summary>
		        11x17 format.
		    </summary>
			*/
			static intrusive_ptr<SizeF> Letter11x17();
			/*
		    <summary>
		        EnvelopeDL format.
		    </summary>
			*/
			static intrusive_ptr<SizeF> EnvelopeDL();
			/*
			<summary>
		        Quarto format;.
		    </summary>
			*/
			static intrusive_ptr<SizeF> Quarto();
			/*
			<summary>
		        Statement format.
		    </summary>
			*/
			static intrusive_ptr<SizeF> Statement();
			/*
			<summary>
		        Ledger format.
		    </summary>
			*/
			static intrusive_ptr<SizeF> Ledger();
			/*
			<summary>
		        Tabloid format.
		    </summary>
			*/
			static intrusive_ptr<SizeF> Tabloid();
			/*
			<summary>
		        Note format.
		    </summary>
			*/
			static intrusive_ptr<SizeF> Note();
			/*
			<summary>
		        Legal format.
		    </summary>
			*/
			static intrusive_ptr<SizeF> Legal();
			/*
			<summary>
		        Flsa format.
		    </summary>
			*/
			static intrusive_ptr<SizeF> Flsa();
			/*
			<summary>
		        Executive format.
		    </summary>
			*/
			static intrusive_ptr<SizeF> Executive();
		private:
		};
	}
}