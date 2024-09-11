#pragma once
#include "pch.h"

#pragma warning(push)
#pragma warning(disable:4250)
#include "IDocumentObject.h"
#include "ShapeObject.h"
#pragma warning(pop)

namespace Spire {
	namespace Doc {
		/*

		*/
		class EXPORTS DocOleObject : public virtual ShapeObject, public virtual IDocumentObject
		{
		public:
			/*
			<summary>
				Gets whether the OLEObject is displayed as an Icon or Content. If True, the OLEObject is displayed as an icon
			</summary>
			<value>bool</value>
			*/
			virtual bool GetDisplayAsIcon();
			/*
			<summary>
				Sets whether the OLEObject is displayed as an Icon or Content. If True, the OLEObject is displayed as an icon
			</summary>
			<value>bool</value>
			*/
			virtual void SetDisplayAsIcon(bool value);
			/*
			<summary>
				Gets the OLE picture.
			</summary>
			<value>The OLE picture.</value>
			*/
			virtual intrusive_ptr<DocPicture> GetOlePicture();
			/*
			<summary>
				Gets the type of the document object.
			</summary>
			<value>The type of the document object.</value>
			*/
			virtual DocumentObjectType GetDocumentObjectType();
			/*
			<summary>
				Gets the OLE container.
			</summary>
			<value>The container.</value>
			*/
			virtual intrusive_ptr<Stream> GetContainer();
			/*

			*/
			virtual intrusive_ptr<CharacterFormat> GetCharacterFormat();
			/*
			<summary>
				Gets the name of the OLE Object storage.
			</summary>
			<value>The name of the OLE storage.</value>
			*/
			virtual LPCWSTR_S GetOleStorageName();
			/*
			<summary>
				Sets the name of the OLE Object storage.
			</summary>
			<value>The name of the OLE storage.</value>
			*/
			virtual void SetOleStorageName(LPCWSTR_S value);
			/*
			<summary>
				Gets the link path.
			</summary>
			<value>The link address.</value>
			*/
			virtual LPCWSTR_S GetLinkPath();
			/*
			<summary>
				Sets the link path.
			</summary>
			<value>The link address.</value>
			*/
			virtual void SetLinkPath(LPCWSTR_S value);
			/*
			<summary>
				Gets the type of the OLE object.
			</summary>
			<value>The type of the OLE obj.</value>
			*/
			virtual OleLinkType GetLinkType();
			/*
			<summary>
				Gets the programmatic identifier of the OLE object of an undefined type.
			</summary>
			*/
			LPCWSTR_S GetProgId();
			/*
			<summary>
				Gets the type of the OLE object.
			</summary>
			<value>The type of the object.</value>
			*/
			virtual LPCWSTR_S GetObjectType();
			/*
			<summary>
			     Sets the type of the OLE object.
			</summary>
			<value>The type of the object.</value>
			*/
			virtual void SetObjectType(LPCWSTR_S value);
			/*
			<summary>
				Gets the native data of embedded OLE object.
			</summary>
			<value>The native data.</value>
			*/
			//virtual std::vector<System.Byte> GetNativeData ();
			virtual std::vector<byte> GetNativeData();
			/*
			<summary>
				Gets the name of file embedded in the package (only if OleType is "Package").
			</summary>
			*/
			virtual LPCWSTR_S GetPackageFileName();
			/*
			<summary>
				Sets the native data.
			</summary>
			<param name="nativeData">The native data.</param>
			*/
			//virtual void SetNativeData(std::vector<System.Byte> nativeData);
			virtual void SetNativeData(std::vector<byte> nativeData);
			/*
			<summary>
				Sets the OLE picture.
			</summary>
			<param name="picture">The picture.</param>
			*/
			virtual void SetOlePicture(intrusive_ptr<DocPicture> picture);
		private:
		};
	}
}