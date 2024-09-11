#pragma once
#define FOR_OUT
#define _SPIRE_DOC
#undef _SPIRE_PDF
#undef _SPIRE_PPT
#undef _SPIRE_XLS
#undef REFERENCE_COUNTER_H

#include "doc/h/pch.h"
#include "common/h/Object.h"
#include "common/h/common.h"
#include "common/h/license.h"

#include "common/h/Stream.h"
#include "common/h/EmfType.h"
#include "common/h/FontStyle.h"
#include "common/h/GraphicsUnit.h"
#include "common/h/Point.h"
#include "common/h/PointF.h"
#include "common/h/Size.h"
#include "common/h/SizeF.h"
#include "common/h/Rectangle.h"
#include "common/h/RectangleF.h"
#include "common/h/Encoding.h"
#include "common/h/Color.h"
#include "common/h/CultureInfo.h"
#include "common/h/DateTime.h"
#include "common/h/TimeSpan.h"
#include "common/h/TimeZone.h"
#include "common/h/IEnumerator.h"
#include "common/h/IEnumerable.h"
#include "common/h/IList.h"
#include "common/h/ICollection.h"
#include "common/h/IDictionary.h"
#include "common/h/IDictionaryEnumerator.h"
#include "common/h/Single.h"
#include "common/h/Int16.h"
#include "common/h/Int32.h"
#include "common/h/Int64.h"
#include "common/h/UInt16.h"
#include "common/h/UInt32.h"
#include "common/h/UInt64.h"
#include "common/h/Double.h"
#include "common/h/SpireString.h"
#include "common/h/Boolean.h"
#include "common/h/Byte.h"
#include "common/h/Char.h"
#include "common/h/Regex.h"
#include "common/h/RegexOptions.h"
#include "common/h/ReferenceCounter.h"

namespace Spire {
	namespace Doc {
		enum class EmfType;
		enum class FontStyle;
		enum class GraphicsUnit;
		enum class PixelFormat;
		enum class RegexOptions;
		class CultureInfo;
		class Color;
		class Stream;
		class Encoding;
		class Point;
		class PointF;
		class Size;
		class SizeF;
		class Rectangle;
		class RectangleF;
		class DateTime;
		class TimeSpan;
		class Int16;
		class Int32;
		class Int64;
		class UInt16;
		class UInt32;
		class UInt64;
		class Single;
		class Double;
		class Char;
		class SpireString;
		class Byte;
		class Regex;
        class TimeZone;
		template<typename T> class IEnumerator;
		template<typename T> class IEnumerable;
		template<typename T> class IList;
		template<typename T> class ICollection;
		template<typename K, typename V> class IDictionary;
		template<typename K, typename V> class IDictionaryEnumerator;

		class ReferenceCounter;
		//class IRef;
		//template <typename T> void intrusive_ptr_add_ref(T* t);
		//template <typename T> void intrusive_ptr_release(T* t);


		enum class EmfType;
		enum class FontStyle;
		enum class GraphicsUnit;
		enum class PixelFormat;
		enum class RegexOptions;
		class CultureInfo;
		class Color;
		class Stream;
		class Encoding;
		class Point;
		class PointF;
		class Size;
		class SizeF;
		class Rectangle;
		class RectangleF;
		class DateTime;
		class TimeSpan;
		class Int16;
		class Int32;
		class Int64;
		class UInt16;
		class UInt32;
		class UInt64;
		class Single;
		class Double;
		class Char;
		class SpireString;
		class Byte;
		class Regex;
		template<typename T> class IEnumerator;
		template<typename T> class IEnumerable;
		template<typename T> class IList;
		template<typename T> class ICollection;
		template<typename K, typename V> class IDictionary;
		template<typename K, typename V> class IDictionaryEnumerator;
		class ReferenceCounter;
		//class IRef;
		//template <typename T> void intrusive_ptr_add_ref(T*);
		//template <typename T> void intrusive_ptr_release(T*);
		
		enum class BackgroundType;
		enum class BookmarkTextStyle;
		enum class BorderStyle;
		enum class BreakType;
		enum class BuiltInProperty;
		enum class BuiltinStyle;
		enum class CalendarType;
		enum class CaptionNumberingFormat;
		enum class CaptionPosition;
		enum class CellMerge;
		enum class CellWidthType;
		enum class ChangeItemsType;
		enum class CharacterSpacing;
		enum class CheckBoxSizeType;
		enum class CommentMarkType;
		enum class CssStyleSheetType;
		enum class DefaultTableStyle;
		enum class DigitalSignatureType;
		enum class DocumentObjectType;
		enum class DocumentSecurity;
		enum class DocumentVersion;
		enum class DocumentViewType;
		enum class Doc_PropertyType;
		enum class EditingGroup;
		enum class EditRevisionType;
		enum class Emphasis;
		enum class EndnotePosition;
		enum class FieldCharType;
		enum class FieldMarkType;
		enum class FieldType;
		enum class FileFormat;
		enum class FollowCharacterType;
		enum class FontCharSet;
		enum class FontClipPrecision;
		enum class FontPitch;
		enum class FontPitchAndFamily;
		enum class FontPrecision;
		enum class FontQuality;
		enum class FontTypeHint;
		enum class FontWeight;
		enum class FootnoteNumberFormat;
		enum class FootnotePosition;
		enum class FootnoteRestartRule;
		enum class FootnoteType;
		enum class FormFieldType;
		enum class FrameHorzAnchor;
		enum class FrameSizeRule;
		enum class FrameVertAnchor;
		enum class GradientShadingStyle;
		enum class GradientShadingVariant;
		enum class GridPitchType;
		enum class GroupedShapeOrigin;
		enum class GroupEventType;
		enum class HeaderFooterType;
		enum class HeaderType;
		enum class HorizontalAlignment;
		enum class HorizontalOrigin;
		enum class HorizontalPosition;
		enum class HorizontalRelation;
		enum class HttpContentType;
		enum class HyperlinkType;
		enum class ImageType;
		enum class ImportOptions;
		enum class LayoutFlow;
		enum class LayoutType;
		enum class LigatureType;
		enum class LineDashing;
		enum class LineNumberingRestartMode;
		enum class LineSpacingRule;
		enum class ListNumberAlignment;
		enum class ListPatternType;
		enum class ListType;
		enum class LocaleIDs;
		enum class LockSettingsType;
		enum class MailMergeMainDocumentType;
		enum class NumberFormat;
		enum class NumberFormType;
		enum class NumberSpaceType;
		enum class OleLinkType;
		enum class OleObjectType;
		enum class OutlineLevel;
		enum class PageAlignment;
		enum class PageBorderOffsetFrom;
		enum class PageBordersApplyType;
		enum class PageNumberAlignment;
		enum class PageNumberStyle;
		enum class PageOrientation;
		enum class ParagraphItemType;
		enum class PictureColor;
		enum class PixelFormat;
		enum class PropertyType;
		enum class PropertyValueType;
		enum class ProtectionType;
		enum class RelativeHorizontalPosition;
		enum class RelativeVerticalPosition;
		enum class RowAlignment;
		enum class RtfTokenType;
		enum class SdtType;
		enum class SectionBreakType;
		enum class ShapeHorizontalAlignment;
		enum class ShapeLineStyle;
		enum class ShapeVerticalAlignment;
		enum class StyleType;
		enum class StylisticSetType;
		enum class SubSuperScript;
		enum class TabJustification;
		enum class TabLeader;
		enum class TableRowHeightType;
		enum class TextAlignment;
		enum class TextAnchor;
		enum class TextBoxLineStyle;
		enum class TextDirection;
		enum class TextEffect;
		enum class TextFormat;
		enum class TextFormFieldType;
		enum class TextureStyle;
		enum class TextWrappingStyle;
		enum class TextWrappingType;
		enum class UnderlineStyle;
		enum class VerticalAlignment;
		enum class VerticalOrigin;
		enum class VerticalPosition;
		enum class VerticalRelation;
		enum class WatermarkLayout;
		enum class WatermarkType;
		enum class WidthType;
		enum class WrapMode;
		enum class XHTMLValidationType;
		enum class ZoomType;
		enum class PdfConformanceLevel;

		class AskFieldEventArgs;
		class Background;
		class BackgroundGradient;
		class Body;
		class BodyRegion;
		class BodyRegionCollection;
		class Bookmark;
		class BookmarkCollection;
		class BookmarkEnd;
		class BookmarkLevel;
		class BookmarkLevelEventArgs;
		class BookmarkLevelHandler;
		class BookmarksNavigator;
		class BookmarkStart;
		class Border;
		class Borders;
		class Break;
		class BuiltinDocumentProperties;
		class CellCollection;
		class CellFormat;
		class ChangeItems;
		class CharacterFormat;
		class CheckBoxFormField;
		class ClipboardData;
		class CollectionEx;
		class Column;
		class ColumnCollection;
		class Comment;
		class CommentFormat;
		class CommentMark;
		class CommentsCollection;
		class CompareOptions;
		class ControlField;
		class CustomDocumentProperties;
		class DifferRevisions;
		class DigitalSignature;
		class DigitalSignatures;
		class DocOleObject;
		class DocPicture;
		class Document;
		class DocumentBase;
		class DocumentContainer;
		class DocumentObject;
		class DocumentObjectCollection;
		class DocumentProperty;
		class DocumentSerializable;
		class DocumentSerializableCollection;
		class DocumentSubsetCollection;
		class DropDownCollection;
		class DropDownFormField;
		class DropDownItem;
		class EditRevision;
		class Endnote;
		class Field;
		class FieldCollection;
		class FieldMark;
		class FootEndnoteOptions;
		class Footnote;
		class FootnoteBody;
		class FormatBase;
		class FormField;
		class FormFieldCollection;
		class Frame;
		class HeaderFooter;
		class HeadersFooters;
		class HtmlExportOptions;
		class Hyperlink;
		class IBody;
		class IBodyRegion;
		class ICollectionBase;
		class IDocument;
		class IDocumentObject;
		class ICompositeObject;
		class IDocumentObjectCollection;
		class IfField;
		class IField;
		class IFieldsEventArgs;
		class IMergeField;
		class InternalMargin;
		class IParagraph;
		class IParagraphBase;
		class IParagraphCollection;
		class IParagraphStyle;
		class ISPicture;
		class ISection;
		class IStructureDocument;
		class IStyle;
		class IStyleCollection;
		class IStyleHolder;
		class ITable;
		class ITableCollection;
		class ITextBox;
		class ITextBoxItemCollection;
		class ITextRange;
		class IWSectionCollection;
		class IXDLSAttributeReader;
		class IXDLSAttributeWriter;
		class IXDLSContentReader;
		class IXDLSContentWriter;
		class IXDLSFactory;
		class IXDLSSerializableCollection;
		class ListFormat;
		class ListLevel;
		class ListLevelCollection;
		class ListStyle;
		class ListStyleCollection;
		class MailMerge;
		class MailMergeDataSet;
		class MailMergeDataTable;
		class Margins;
		class MarginsF;
		class MathObject;
		class MergeField;
		class MergeFieldEventArgs;
		class MergeFieldEventHandler;
		class MergeGroupEventArgs;
		class MergeGroupEventHandler;
		class MergeImageFieldEventArgs;
		class MergeImageFieldEventHandler;
		class OfficeMath;
		class OwnerHolder;
		class Paddings;
		class PageLayoutEventArgs;
		class PageLayoutHandler;
		class PageSetup;
		class PageSize;
		class Paragraph;
		class ParagraphBase;
		class ParagraphCollection;
		class ParagraphFormat;
		class ParagraphItemCollection;
		class ParagraphStyle;
		class Permission;
		class PermissionCollection;
		class PermissionEnd;
		class PermissionStart;
		class PictureWatermark;
		class PreferredWidth;
		class PrivateFontPath;
		class RevisionBase;
		class RowCollection;
		class RowFormat;
		class SdtCheckBox;
		class SdtComboBox;
		class SDTContent;
		class SdtControlProperties;
		class SdtDate;
		class SdtDropDownList;
		class SdtDropDownListBase;
		class SDTInlineContent;
		class SdtListItem;
		class SdtListItemCollection;
		class SdtPicture;
		class SDTProperties;
		class SdtText;
		class Section;
		class SectionCollection;
		class SequenceField;
		class ShapeBase;
		class ShapeGroup;
		class ShapeItemCollection;
		class ShapeObject;
		class ShapeObjectTextCollection;
		class SpireDocEvalInfo;
		class StructureDocumentTag;
		class StructureDocumentTagCell;
		class StructureDocumentTagInline;
		class StructureDocumentTagRow;
		class Style;
		class StyleCollection;
		class SummaryDocumentProperties;
		class Symbol;
		class Tab;
		class Table;
		class TableCell;
		class TableCollection;
		class TableOfContent;
		class TablePositioning;
		class TabCollection;
		class TableRow;
		class Template;
		class TextBodyPart;
		class TextBodySelection;
		class TextBox;
		class TextBoxCollection;
		class TextBoxFormat;
		class TextBoxItemCollection;
		class TextFormField;
		class TextRange;
		class TextSelection;
		class TextWatermark;
		class ToImageOption;
		class ToPdfParameterList;
		class UpdateFieldsHandler;
		class VariableCollection;
		class ViewSetup;
		class Fill;
		class WatermarkBase;
		class WordArt;
		class WordAttrCollection;
		class XDLSHolder;
		class XDLSReader;
		class XmlTableFormat;
        namespace Pages {
			class LayoutElement;
			class BodyLayoutElement;
			class FixedLayoutCell;
			class FixedLayoutColumn;
			class FixedLayoutComment;
			class FixedLayoutDocument;
			class FixedLayoutEndnote;
			class FixedLayoutFootnote;
			class FixedLayoutHeaderFooter;
			class FixedLayoutLine;
			class FixedLayoutNoteSeparator;
			class FixedLayoutPage;
			class FixedLayoutRow;
			class FixedLayoutSpan;
			class FixedLayoutTextBox;
			class LayoutCollection;
			class LayoutFixedLPagesCollection;
			class LayoutFixedLColumnCollection;
			class LayoutFixedLCommentCollection;
			class LayoutFixedLHeaderFooterCollection;
			class LayoutFixedLLineCollection;
			class LayoutFixedLRowCollection;
			class LayoutFixedLCellCollection;
			class LayoutFixedLDocumentCollection;
			class LayoutFixedLEndnoteCollection;
			class LayoutFixedLFootnoteCollection;
			class LayoutFixedLNoteSeparatorCollection;
			class LayoutFixedLSpanCollection;
			class LayoutFixedLTextBoxCollection;
		}
	}
}
#pragma warning(push)
#pragma warning(disable:4250)

#include "doc/h/BackgroundType.h"
#include "doc/h/BookmarkTextStyle.h"
#include "doc/h/BorderStyle.h"
#include "doc/h/BreakType.h"
#include "doc/h/BuiltInProperty.h"
#include "doc/h/BuiltinStyle.h"
#include "doc/h/CalendarType.h"
#include "doc/h/CaptionNumberingFormat.h"
#include "doc/h/CaptionPosition.h"
#include "doc/h/CellMerge.h"
#include "doc/h/CellWidthType.h"
#include "doc/h/ChangeItemsType.h"
#include "doc/h/CharacterSpacing.h"
#include "doc/h/CheckBoxSizeType.h"
#include "doc/h/CommentMarkType.h"
#include "doc/h/CssStyleSheetType.h"
#include "doc/h/DefaultTableStyle.h"
#include "doc/h/DigitalSignatureType.h"
#include "doc/h/DocumentObjectType.h"
#include "doc/h/DocumentSecurity.h"
#include "doc/h/DocumentVersion.h"
#include "doc/h/DocumentViewType.h"
#include "doc/h/Doc_PropertyType.h"
#include "doc/h/EditingGroup.h"
#include "doc/h/EditRevisionType.h"
#include "doc/h/Emphasis.h"
#include "doc/h/EndnotePosition.h"
#include "doc/h/FieldCharType.h"
#include "doc/h/FieldMarkType.h"
#include "doc/h/FieldType.h"
#include "doc/h/FileFormat.h"
#include "doc/h/FollowCharacterType.h"
#include "doc/h/FontCharSet.h"
#include "doc/h/FontClipPrecision.h"
#include "doc/h/FontPitch.h"
#include "doc/h/FontPitchAndFamily.h"
#include "doc/h/FontPrecision.h"
#include "doc/h/FontQuality.h"
#include "doc/h/FontTypeHint.h"
#include "doc/h/FontWeight.h"
#include "doc/h/FootnoteNumberFormat.h"
#include "doc/h/FootnotePosition.h"
#include "doc/h/FootnoteRestartRule.h"
#include "doc/h/FootnoteType.h"
#include "doc/h/FormFieldType.h"
#include "doc/h/FrameHorzAnchor.h"
#include "doc/h/FrameSizeRule.h"
#include "doc/h/FrameVertAnchor.h"
#include "doc/h/GradientShadingStyle.h"
#include "doc/h/GradientShadingVariant.h"
#include "doc/h/GridPitchType.h"
#include "doc/h/GroupedShapeOrigin.h"
#include "doc/h/GroupEventType.h"
#include "doc/h/HeaderFooterType.h"
#include "doc/h/HeaderType.h"
#include "doc/h/HorizontalAlignment.h"
#include "doc/h/HorizontalOrigin.h"
#include "doc/h/HorizontalPosition.h"
#include "doc/h/HorizontalRelation.h"
#include "doc/h/HttpContentType.h"
#include "doc/h/HyperlinkType.h"
#include "doc/h/ImageType.h"
#include "doc/h/ImportOptions.h"
#include "doc/h/LayoutFlow.h"
#include "doc/h/LayoutType.h"
#include "doc/h/LigatureType.h"
#include "doc/h/LineDashing.h"
#include "doc/h/LineNumberingRestartMode.h"
#include "doc/h/LineSpacingRule.h"
#include "doc/h/ListNumberAlignment.h"
#include "doc/h/ListPatternType.h"
#include "doc/h/ListType.h"
#include "doc/h/LocaleIDs.h"
#include "doc/h/LockSettingsType.h"
#include "doc/h/MailMergeMainDocumentType.h"
#include "doc/h/NumberFormat.h"
#include "doc/h/NumberFormType.h"
#include "doc/h/NumberSpaceType.h"
#include "doc/h/OleLinkType.h"
#include "doc/h/OleObjectType.h"
#include "doc/h/OutlineLevel.h"
#include "doc/h/PageAlignment.h"
#include "doc/h/PageBorderOffsetFrom.h"
#include "doc/h/PageBordersApplyType.h"
#include "doc/h/PageNumberAlignment.h"
#include "doc/h/PageNumberStyle.h"
#include "doc/h/PageOrientation.h"
#include "doc/h/ParagraphItemType.h"
#include "doc/h/PictureColor.h"
#include "doc/h/PixelFormat.h"
#include "doc/h/PropertyType.h"
#include "doc/h/PropertyValueType.h"
#include "doc/h/ProtectionType.h"
#include "doc/h/PdfConformanceLevel.h"
#include "doc/h/RelativeHorizontalPosition.h"
#include "doc/h/RelativeVerticalPosition.h"
#include "doc/h/RowAlignment.h"
#include "doc/h/RtfTokenType.h"
#include "doc/h/SdtType.h"
#include "doc/h/SectionBreakType.h"
#include "doc/h/ShapeHorizontalAlignment.h"
#include "doc/h/ShapeLineStyle.h"
#include "doc/h/ShapeVerticalAlignment.h"
#include "doc/h/StyleType.h"
#include "doc/h/StylisticSetType.h"
#include "doc/h/SubSuperScript.h"
#include "doc/h/TabJustification.h"
#include "doc/h/TabLeader.h"
#include "doc/h/TableRowHeightType.h"
#include "doc/h/TextAlignment.h"
#include "doc/h/TextAnchor.h"
#include "doc/h/TextBoxLineStyle.h"
#include "doc/h/TextDirection.h"
#include "doc/h/TextEffect.h"
#include "doc/h/TextFormat.h"
#include "doc/h/TextFormFieldType.h"
#include "doc/h/TextureStyle.h"
#include "doc/h/TextWrappingStyle.h"
#include "doc/h/TextWrappingType.h"
#include "doc/h/UnderlineStyle.h"
#include "doc/h/VerticalAlignment.h"
#include "doc/h/VerticalOrigin.h"
#include "doc/h/VerticalPosition.h"
#include "doc/h/VerticalRelation.h"
#include "doc/h/WatermarkLayout.h"
#include "doc/h/WatermarkType.h"
#include "doc/h/WidthType.h"
#include "doc/h/WrapMode.h"
#include "doc/h/XHTMLValidationType.h"
#include "doc/h/ZoomType.h"

#include "doc/h/AskFieldEventArgs.h"
#include "doc/h/Background.h"
#include "doc/h/BackgroundGradient.h"
#include "doc/h/Body.h"
#include "doc/h/BodyRegion.h"
#include "doc/h/BodyRegionCollection.h"
#include "doc/h/Bookmark.h"
#include "doc/h/BookmarkCollection.h"
#include "doc/h/BookmarkEnd.h"
#include "doc/h/BookmarkLevel.h"
#include "doc/h/BookmarkLevelEventArgs.h"
#include "doc/h/BookmarkLevelHandler.h"
#include "doc/h/BookmarksNavigator.h"
#include "doc/h/BookmarkStart.h"
#include "doc/h/Border.h"
#include "doc/h/Borders.h"
#include "doc/h/Break.h"
#include "doc/h/BuiltinDocumentProperties.h"
#include "doc/h/CellCollection.h"
#include "doc/h/CellFormat.h"
#include "doc/h/ChangeItems.h"
#include "doc/h/CharacterFormat.h"
#include "doc/h/CheckBoxFormField.h"
#include "doc/h/ClipboardData.h"
#include "doc/h/CollectionEx.h"
#include "doc/h/Column.h"
#include "doc/h/ColumnCollection.h"
#include "doc/h/Comment.h"
#include "doc/h/CommentFormat.h"
#include "doc/h/CommentMark.h"
#include "doc/h/CommentsCollection.h"
#include "doc/h/CompareOptions.h"
#include "doc/h/ControlField.h"
#include "doc/h/CustomDocumentProperties.h"
#include "doc/h/DifferRevisions.h"
#include "doc/h/DigitalSignature.h"
#include "doc/h/DigitalSignatures.h"
#include "doc/h/DocOleObject.h"
#include "doc/h/DocPicture.h"
#include "doc/h/Document.h"

#include "doc/h/DocumentBase.h"
#include "doc/h/DocumentContainer.h"
#include "doc/h/DocumentObject.h"
#include "doc/h/DocumentObjectCollection.h"
#include "doc/h/DocumentProperty.h"
#include "doc/h/DocumentSerializable.h"
#include "doc/h/DocumentSerializableCollection.h"
#include "doc/h/DocumentSubsetCollection.h"
#include "doc/h/DropDownCollection.h"
#include "doc/h/DropDownFormField.h"
#include "doc/h/DropDownItem.h"
#include "doc/h/EditRevision.h"
#include "doc/h/Endnote.h"
#include "doc/h/Field.h"
#include "doc/h/FieldCollection.h"
#include "doc/h/FieldMark.h"
#include "doc/h/FootEndnoteOptions.h"
#include "doc/h/Footnote.h"
#include "doc/h/FootnoteBody.h"
#include "doc/h/FormField.h"
#include "doc/h/FormFieldCollection.h"
#include "doc/h/Frame.h"
#include "doc/h/HeaderFooter.h"
#include "doc/h/HeadersFooters.h"
#include "doc/h/HtmlExportOptions.h"
#include "doc/h/Hyperlink.h"
#include "doc/h/IBody.h"
#include "doc/h/IBodyRegion.h"
#include "doc/h/ICollectionBase.h"
#include "doc/h/IDocument.h"
#include "doc/h/IDocumentObject.h"
#include "doc/h/ICompositeObject.h"
#include "doc/h/IDocumentObjectCollection.h"
#include "doc/h/IfField.h"
#include "doc/h/IField.h"
#include "doc/h/IFieldsEventArgs.h"
#include "doc/h/IMergeField.h"
#include "doc/h/InternalMargin.h"
#include "doc/h/IParagraph.h"
#include "doc/h/IParagraphBase.h"
#include "doc/h/IParagraphCollection.h"
#include "doc/h/IParagraphStyle.h"
#include "doc/h/ISPicture.h"
#include "doc/h/ISection.h"
#include "doc/h/IStructureDocument.h"
#include "doc/h/IStyle.h"
#include "doc/h/IStyleCollection.h"
#include "doc/h/IStyleHolder.h"
#include "doc/h/ITable.h"
#include "doc/h/ITableCollection.h"
#include "doc/h/ITextBox.h"
#include "doc/h/ITextBoxItemCollection.h"
#include "doc/h/ITextRange.h"
#include "doc/h/IWSectionCollection.h"
#include "doc/h/ListFormat.h"
#include "doc/h/ListLevel.h"
#include "doc/h/ListLevelCollection.h"
#include "doc/h/ListStyle.h"
#include "doc/h/ListStyleCollection.h"
#include "doc/h/MailMerge.h"
#include "doc/h/MailMergeDataSet.h"
#include "doc/h/MailMergeDataTable.h"
#include "doc/h/Margins.h"
#include "doc/h/MarginsF.h"
#include "doc/h/MathObject.h"
#include "doc/h/MergeField.h"
#include "doc/h/MergeFieldEventArgs.h"
#include "doc/h/MergeFieldEventHandler.h"
#include "doc/h/MergeGroupEventArgs.h"
#include "doc/h/MergeGroupEventHandler.h"
#include "doc/h/MergeImageFieldEventArgs.h"
#include "doc/h/MergeImageFieldEventHandler.h"
#include "doc/h/OfficeMath.h"
#include "doc/h/OwnerHolder.h"
#include "doc/h/Paddings.h"
#include "doc/h/PageLayoutEventArgs.h"
#include "doc/h/PageLayoutHandler.h"
#include "doc/h/PageSetup.h"
#include "doc/h/PageSize.h"
#include "doc/h/Paragraph.h"
#include "doc/h/ParagraphBase.h"
#include "doc/h/ParagraphCollection.h"
#include "doc/h/ParagraphFormat.h"
#include "doc/h/ParagraphItemCollection.h"
#include "doc/h/ParagraphStyle.h"
#include "doc/h/Permission.h"
#include "doc/h/PermissionCollection.h"
#include "doc/h/PermissionEnd.h"
#include "doc/h/PermissionStart.h"
#include "doc/h/PictureWatermark.h"
#include "doc/h/PreferredWidth.h"
#include "doc/h/PrivateFontPath.h"
#include "doc/h/RevisionBase.h"
#include "doc/h/RowCollection.h"
#include "doc/h/RowFormat.h"
#include "doc/h/SdtCheckBox.h"
#include "doc/h/SdtComboBox.h"
#include "doc/h/SDTContent.h"
#include "doc/h/SdtControlProperties.h"
#include "doc/h/SdtDate.h"
#include "doc/h/SdtDropDownList.h"
#include "doc/h/SdtDropDownListBase.h"
#include "doc/h/SDTInlineContent.h"
#include "doc/h/SdtListItem.h"
#include "doc/h/SdtListItemCollection.h"
#include "doc/h/SdtPicture.h"
#include "doc/h/SDTProperties.h"
#include "doc/h/SdtText.h"
#include "doc/h/Section.h"
#include "doc/h/SectionCollection.h"
#include "doc/h/SequenceField.h"
#include "doc/h/ShapeBase.h"
#include "doc/h/ShapeGroup.h"
#include "doc/h/ShapeItemCollection.h"
#include "doc/h/ShapeObject.h"
#include "doc/h/ShapeObjectTextCollection.h"
#include "doc/h/SpireDocEvalInfo.h"
#include "doc/h/StructureDocumentTag.h"
#include "doc/h/StructureDocumentTagCell.h"
#include "doc/h/StructureDocumentTagInline.h"
#include "doc/h/StructureDocumentTagRow.h"
#include "doc/h/Style.h"
#include "doc/h/StyleCollection.h"
#include "doc/h/SummaryDocumentProperties.h"
#include "doc/h/Symbol.h"
#include "doc/h/Tab.h"
#include "doc/h/Table.h"
#include "doc/h/TableCell.h"
#include "doc/h/TableCollection.h"
#include "doc/h/TabCollection.h"
#include "doc/h/TableOfContent.h"
#include "doc/h/TablePositioning.h"
#include "doc/h/TableRow.h"
#include "doc/h/Template.h"
#include "doc/h/TextBodyPart.h"
#include "doc/h/TextBodySelection.h"
#include "doc/h/TextBox.h"
#include "doc/h/TextBoxCollection.h"
#include "doc/h/TextBoxFormat.h"
#include "doc/h/TextBoxItemCollection.h"
#include "doc/h/TextFormField.h"
#include "doc/h/TextRange.h"
#include "doc/h/TextSelection.h"
#include "doc/h/TextWatermark.h"
#include "doc/h/ToImageOption.h"
#include "doc/h/ToPdfParameterList.h"
#include "doc/h/UpdateFieldsHandler.h"
#include "doc/h/VariableCollection.h"
#include "doc/h/ViewSetup.h"
#include "doc/h/Fill.h"
#include "doc/h/WatermarkBase.h"
#include "doc/h/WordArt.h"
#include "doc/h/WordAttrCollection.h"
#include "doc/h/XHTMLValidationType.h"
#include "doc/h/LayoutElement.h"
#include "doc/h/BodyLayoutElement.h"
#include "doc/h/FixedLayoutCell.h"
#include "doc/h/FixedLayoutColumn.h"
#include "doc/h/FixedLayoutComment.h"
#include "doc/h/FixedLayoutDocument.h"
#include "doc/h/FixedLayoutEndnote.h"
#include "doc/h/FixedLayoutFootnote.h"
#include "doc/h/FixedLayoutHeaderFooter.h"
#include "doc/h/FixedLayoutLine.h"
#include "doc/h/FixedLayoutNoteSeparator.h"
#include "doc/h/FixedLayoutPage.h"
#include "doc/h/FixedLayoutRow.h"
#include "doc/h/FixedLayoutSpan.h"
#include "doc/h/FixedLayoutTextBox.h"
#include "doc/h/LayoutCollection.h"
#include "doc/h/LayoutFixedLPagesCollection.h"
#include "doc/h/LayoutFixedLColumnCollection.h"
#include "doc/h/LayoutFixedLCommentCollection.h"
#include "doc/h/LayoutFixedLHeaderFooterCollection.h"
#include "doc/h/LayoutFixedLLineCollection.h"
#include "doc/h/LayoutFixedLRowCollection.h"
#include "doc/h/LayoutFixedLCellCollection.h"
#include "doc/h/LayoutFixedLDocumentCollection.h"
#include "doc/h/LayoutFixedLEndnoteCollection.h"
#include "doc/h/LayoutFixedLFootnoteCollection.h"
#include "doc/h/LayoutFixedLNoteSeparatorCollection.h"
#include "doc/h/LayoutFixedLSpanCollection.h"
#include "doc/h/LayoutFixedLTextBoxCollection.h"