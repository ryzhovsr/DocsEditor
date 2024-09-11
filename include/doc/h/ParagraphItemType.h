#pragma once
#include "pch.h"
namespace Spire {
	namespace Doc {
		/*
			<summary>
				Specifies type of the ParagraphBase.
			</summary>
		*/
		enum class ParagraphItemType : int
		{
			TextRange = 0,
			Picture = 1,
			Field = 2,
			FieldMark = 3,
			MergeField = 4,
			FormField = 5,
			CheckBox = 6,
			TextFormField = 7,
			DropDownFormField = 8,
			SeqField = 9,
			EmbedField = 10,
			ControlField = 11,
			BookmarkStart = 12,
			BookmarkEnd = 13,
			PermissionStart = 14,
			PermissionEnd = 15,
			ShapeObject = 16,
			ShapeGroup = 17,
			Comment = 18,
			CommentMark = 19,
			Footnote = 20,
			TextBox = 21,
			Break = 22,
			Symbol = 23,
			TOC = 24,
			OleObject = 25,
		};
		using ParagraphItemType_Type = std::underlying_type<ParagraphItemType>::type;
	}
}