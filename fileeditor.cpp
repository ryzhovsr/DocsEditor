#include "fileeditor.h"
#include "qdebug.h"
#include "utils.h"

FileEditor::FileEditor()
{

}

void FileEditor::changeTemplateBachelorDegreeDoc()
{
    // Читаем исходный файл и загружаем из него весь текст.
    intrusive_ptr<Spire::Doc::Document> sourceDoc = new Spire::Doc::Document();
    sourceDoc->LoadFromFile(_filePath.toStdWString().c_str());
    std::wstring source_text = sourceDoc->GetText();
    Utils::removeSpireDocWarning(source_text);
    sourceDoc->Close();

    // Создаём новый документ
    intrusive_ptr<Spire::Doc::Document> doc = new Spire::Doc::Document();

    // Добавляем стили для редактирования документа
    addStyleInDoc_8(doc);
    addStyleInDoc_12(doc);
    addBoldStyleInDoc_12(doc);
    addStyleInDoc_14(doc);
    addBoldStyleInDoc_14(doc);
    addUnderlineStyleInDoc_16(doc);
    addBoldStyleInDoc_18(doc);

    intrusive_ptr<Spire::Doc::Section> section = doc->AddSection();

    // Настраиваем поля страницы
    section->GetPageSetup()->GetMargins()->SetTop(56.7f);
    section->GetPageSetup()->GetMargins()->SetLeft(85);
    section->GetPageSetup()->GetMargins()->SetBottom(56.7f);
    section->GetPageSetup()->GetMargins()->SetRight(42.5);

    intrusive_ptr<Spire::Doc::Paragraph> title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"МИНИСТЕРСТВО НАУКИ И ВЫСШЕГО ОБРАЗОВАНИЯ\n"
                      "РОССИЙСКОЙ ФЕДЕРАЦИИ\n\n"
                      "ФЕДЕРАЛЬНОЕ ГОСУДАРСТВЕННОЕ АВТОНОМНОЕ ОБРАЗОВАТЕЛЬНОЕ\n"
                      "«Национальный исследовательский ядерный университет «МИФИ»\n"
                      "Саровский физико-технический институт –\n"
                      "филиал федерального государственного автономного образовательного учреждения\n"
                      "высшего образования «Национальный исследовательский ядерный университет\n"
                      "«МИФИ»\n"
                      "(СарФТИ НИЯУ МИФИ)\n\n");

    title->AppendText(L"ФАКУЛЬТЕТ\n");
    title->AppendText(L"КАФЕДРА\n\n\n\n");

    title->ApplyStyle(L"bold_style_12");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"ПОЯСНИТЕЛЬНАЯ ЗАПИСКА");
    title->ApplyStyle(L"bold_style_18");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"ВЫПУСКНОЙ КВАЛИФИКАЦИОННОЙ РАБОТЫ БАКАЛАВРА\n");
    title->ApplyStyle(L"bold_style_14");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"на тему:");
    title->ApplyStyle(L"style_12");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"«    »\n\n\n\n\n\n");
    title->ApplyStyle(L"underline_style_16");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Justify);
    title->AppendText(L"Студент:											");
    title->ApplyStyle(L"bold_style_14");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"(фамилия, имя, отчество, группа)");
    title->ApplyStyle(L"style_8");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Justify);
    title->AppendText(L"Руководитель работы:");
    title->ApplyStyle(L"bold_style_14");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"(фамилия, имя, отчество, уч. степень, звание, должность, место работы)");
    title->ApplyStyle(L"style_8");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Justify);
    title->AppendText(L"Рецензент работы:");
    title->ApplyStyle(L"bold_style_14");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"(фамилия, имя, отчество, уч. степень, звание, должность, место работы)");
    title->ApplyStyle(L"style_8");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Justify);
    title->AppendText(L"Зав. кафедрой:");
    title->ApplyStyle(L"bold_style_14");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"\n\n\n\n\n\n\n\n");
    title->ApplyStyle(L"bold_style_14");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"Саров, 2024 г.");
    title->ApplyStyle(L"style_12");
    title->AppendBreak(Spire::Doc::BreakType::PageBreak);

    /// 2 страница ///
    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendPicture(_emblemPath.toStdWString().c_str());
    title->AppendText(L"\nСАРОВСКИЙ ФИЗИКО-ТЕХНИЧЕСКИЙ ИНСТИТУТ\n"
                      "ФГАОУ ВО «НАЦИОНАЛЬНЫЙ ИССЛЕДОВАТЕЛЬСКИЙ ЯДЕРНЫЙ УНИВЕРСИТЕТ «МИФИ»\n"
                      "\n\n"
                      "ФАКУЛЬТЕТ\n\n\n"
                      "КАФЕДРА\n\n\n");
    title->ApplyStyle(L"bold_style_14");

    title = section->AddParagraph();
    title->AppendText(L"                                                                                                             УТВЕРЖДАЮ:");
    title->ApplyStyle(L"bold_style_12");

    title = section->AddParagraph();
    title->AppendText(L"                                                                                          Зав. кафедрой ЦТ");
    title->ApplyStyle(L"bold_style_14");







    // Добавляем исходные данные с файла
    intrusive_ptr<Spire::Doc::Paragraph> sourceParagraph = section->AddParagraph();
    sourceParagraph->AppendText(source_text.c_str());
    sourceParagraph->ApplyStyle(L"style_14");

    doc->SaveToFile(_filePath.toStdWString().c_str(), Spire::Doc::FileFormat::Docx2019);
    doc->Dispose();
}

void FileEditor::changeTemplateMasterDegreeDoc()
{
    qDebug() << 1;
}

void FileEditor::changeReviewDoc()
{
    qDebug() << 2;
}

void FileEditor::addStyleInDoc_8(intrusive_ptr<Spire::Doc::Document> doc)
{
    intrusive_ptr<Spire::Doc::ParagraphStyle> standartStyle = new Spire::Doc::ParagraphStyle(doc);
    standartStyle->SetName(L"style_8");
    standartStyle->GetCharacterFormat()->SetFontName(L"Times New Roman");
    standartStyle->GetCharacterFormat()->SetBold(false);
    standartStyle->GetCharacterFormat()->SetFontSize(8);
    doc->GetStyles()->Add(standartStyle);
}

void FileEditor::addStyleInDoc_12(intrusive_ptr<Spire::Doc::Document> doc)
{
    intrusive_ptr<Spire::Doc::ParagraphStyle> standartStyle = new Spire::Doc::ParagraphStyle(doc);
    standartStyle->SetName(L"style_12");
    standartStyle->GetCharacterFormat()->SetFontName(L"Times New Roman");
    standartStyle->GetCharacterFormat()->SetBold(false);
    standartStyle->GetCharacterFormat()->SetFontSize(12);
    doc->GetStyles()->Add(standartStyle);
}

void FileEditor::addBoldStyleInDoc_12(intrusive_ptr<Spire::Doc::Document> doc)
{
    intrusive_ptr<Spire::Doc::ParagraphStyle> standartStyle = new Spire::Doc::ParagraphStyle(doc);
    standartStyle->SetName(L"bold_style_12");
    standartStyle->GetCharacterFormat()->SetFontName(L"Times New Roman");
    standartStyle->GetCharacterFormat()->SetBold(true);
    standartStyle->GetCharacterFormat()->SetFontSize(12);
    doc->GetStyles()->Add(standartStyle);
}

void FileEditor::addStyleInDoc_14(intrusive_ptr<Spire::Doc::Document> doc)
{
    intrusive_ptr<Spire::Doc::ParagraphStyle> standartStyle = new Spire::Doc::ParagraphStyle(doc);
    standartStyle->SetName(L"style_14");
    standartStyle->GetCharacterFormat()->SetFontName(L"Times New Roman");
    standartStyle->GetCharacterFormat()->SetBold(false);
    standartStyle->GetCharacterFormat()->SetFontSize(14);
    doc->GetStyles()->Add(standartStyle);
}

void FileEditor::addBoldStyleInDoc_14(intrusive_ptr<Spire::Doc::Document> doc)
{
    intrusive_ptr<Spire::Doc::ParagraphStyle> standartStyle = new Spire::Doc::ParagraphStyle(doc);
    standartStyle->SetName(L"bold_style_14");
    standartStyle->GetCharacterFormat()->SetFontName(L"Times New Roman");
    standartStyle->GetCharacterFormat()->SetBold(true);
    standartStyle->GetCharacterFormat()->SetFontSize(14);
    doc->GetStyles()->Add(standartStyle);
}

void FileEditor::addUnderlineStyleInDoc_16(intrusive_ptr<Spire::Doc::Document> doc)
{
    intrusive_ptr<Spire::Doc::ParagraphStyle> standartStyle = new Spire::Doc::ParagraphStyle(doc);
    standartStyle->SetName(L"underline_style_16");
    standartStyle->GetCharacterFormat()->SetFontName(L"Times New Roman");
    standartStyle->GetCharacterFormat()->SetUnderlineStyle(Spire::Doc::UnderlineStyle::Single);
    standartStyle->GetCharacterFormat()->SetFontSize(16);

    doc->GetStyles()->Add(standartStyle);
}

void FileEditor::addBoldStyleInDoc_18(intrusive_ptr<Spire::Doc::Document> doc)
{
    intrusive_ptr<Spire::Doc::ParagraphStyle> standartStyle = new Spire::Doc::ParagraphStyle(doc);
    standartStyle->SetName(L"bold_style_18");
    standartStyle->GetCharacterFormat()->SetFontName(L"Times New Roman");
    standartStyle->GetCharacterFormat()->SetBold(true);
    standartStyle->GetCharacterFormat()->SetFontSize(18);
    doc->GetStyles()->Add(standartStyle);
}
