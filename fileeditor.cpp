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
    addUnderlineBoldStyleInDoc_14(doc);
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

    std::wstring faculty = _faculty.empty() ? L"ФАКУЛЬТЕТ\n" :  _faculty + L" ФАКУЛЬТЕТ\n";
    title->AppendText(faculty.c_str());
    std::wstring department = _department.empty() ? L"КАФЕДРА\n\n\n\n" : L"КАФЕДРА " + _department + L"\n\n\n\n";
    title->AppendText(department.c_str());

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
    std::wstring theme = L"«" + _theme + L"»\n\n\n\n\n\n";
    title->AppendText(theme.c_str());
    title->ApplyStyle(L"underline_style_16");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Justify);
    std::wstring student = L"Студент:   " + _student;
    title->AppendText(student.c_str());
    title->ApplyStyle(L"bold_style_14");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"(фамилия, имя, отчество, группа)");
    title->ApplyStyle(L"style_8");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Justify);
    std::wstring headOfWork = L"Руководитель работы:   " + _headOfWork;
    title->AppendText(headOfWork.c_str());
    title->ApplyStyle(L"bold_style_14");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"(фамилия, имя, отчество, уч. степень, звание, должность, место работы)");
    title->ApplyStyle(L"style_8");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Justify);
    std::wstring reviewer = L"Рецензент работы:   " + _reviewer;
    title->AppendText(reviewer.c_str());
    title->ApplyStyle(L"bold_style_14");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"(фамилия, имя, отчество, уч. степень, звание, должность, место работы)");
    title->ApplyStyle(L"style_8");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Justify);
    std::wstring headOfDepartment = L"Зав. кафедрой:   " + _headOfDepartment;
    title->AppendText(headOfDepartment.c_str());
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
                      "\n\n\n");
    title->AppendText(faculty.c_str());
    title->AppendText(L"\n\n");
    department = _department.empty() ? L"КАФЕДРА\n\n\n" : L"КАФЕДРА " + _department + L"\n\n\n";
    title->AppendText(department.c_str());
    title->ApplyStyle(L"bold_style_14");

    title = section->AddParagraph();
    title->AppendText(L"                                                                                                             УТВЕРЖДАЮ:");
    title->ApplyStyle(L"bold_style_12");

    title = section->AddParagraph();
    title->AppendText(L"                                                                                          Зав. кафедрой ЦТ\n");
    title->ApplyStyle(L"bold_style_14");

    title = section->AddParagraph();
    title->AppendText(L"___________________________");
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Right);
    title->AppendText(L"\n\n");
    title->AppendText(L"\"_____\" ____________ 2024 г.");
    title->ApplyStyle(L"style_14");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"\n\nЗАДАНИЕ НА ВЫПУСКНУЮ КВАЛИФИЦИРОВАННУЮ РАБОТУ БАКАЛАВРА\n\n");
    title->ApplyStyle(L"bold_style_14");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Justify);
    student = L"Студент:   " + _student;
    title->AppendText(student.c_str());
    title->ApplyStyle(L"bold_style_14");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"(фамилия, имя, отчество, группа)");
    title->ApplyStyle(L"style_8");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Justify);
    title->AppendText(L"Направление подготовки: \n\n"
                      "Профиль: ");
    title->ApplyStyle(L"bold_style_14");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"(направление подготовки)");
    title->ApplyStyle(L"style_8");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Justify);
    headOfWork = L"Руководитель работы:   " + _headOfWork;
    title->AppendText(headOfWork.c_str());
    title->ApplyStyle(L"bold_style_14");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"(фамилия, имя, отчество, уч. степень, звание, должность, место работы)");
    title->ApplyStyle(L"style_8");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"\n\n\n\n\n\n");
    title->ApplyStyle(L"bold_style_14");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"г. Саров, 2024");
    title->ApplyStyle(L"bold_style_14");

    title->AppendBreak(Spire::Doc::BreakType::PageBreak);

    /// 3 страница ///

    title = section->AddParagraph();
    theme = L"Наименование темы:" + _theme + L"\n\n";
    title->AppendText(theme.c_str());
    title->AppendText(L"Место выполнения: "
                      "Исходные данные к проекту: \n\n\n\n"
                      "Экспериментальная часть работы:\n");
    title->ApplyStyle(L"bold_style_14");


    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"Допуск к защите\n");
    title->ApplyStyle(L"underline_bold_style_14");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Justify);
    title->AppendText(L"       К защите представляется:\n"
                      "пояснительная записка на _____________ страниц\n"
                      "чертёжно-графический материал на _______ листов\n"
                      "иллюстрационный материал _____________ слайдов\n"
                      "экспериментальные макеты _____________ шт.\n");
    title->ApplyStyle(L"style_14");

    title = section->AddParagraph();
    title->AppendText(L"Руководитель выпускной квалифицированной работы	__________          ____________");
    title->ApplyStyle(L"style_12");

    title = section->AddParagraph();
    title->AppendText(L"                                                                                                                                                       подпись                     фамилия, имя, отчество\n");
    title->ApplyStyle(L"style_8");

    title = section->AddParagraph();
    title->AppendText(L"Рецензент выпускной квалифицированной работы	__________          ____________");
    title->ApplyStyle(L"style_12");

    title = section->AddParagraph();
    title->AppendText(L"                                                                                                                                                       подпись                     фамилия, имя, отчество\n");
    title->ApplyStyle(L"style_8");

    title = section->AddParagraph();
    title->AppendText(L"\nСтудент группы _________ допущен к защите выпускной квалифицированной работы по направлению подготовки _________\n\n"
                      "Дата защиты\n\n"
                      "Заведующий кафедрой     _________________         ");
    title->ApplyStyle(L"style_14");

    title->AppendBreak(Spire::Doc::BreakType::PageBreak);

    /// 4 страница ///

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"Аннотация");
    title->ApplyStyle(L"bold_style_14");

    title->AppendBreak(Spire::Doc::BreakType::PageBreak);

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"Содержание\n");
    title->ApplyStyle(L"bold_style_14");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Justify);
    title->AppendText(L"Введение…………………………………………………………………………...6\n"
                      "Глава 1……………………………………………………………………………..7\n"
                      "Глава 2……………………………………………………………………………..8\n"
                      "Глава 3……………………………………………………………………………..9\n"
                      "Заключение……………………………………………………………………….10\n"
                      "Список использованных источников…………………………………………...11\n"
                      "Приложение 1. Протокол проверки на антиплагиат…………………………...12");
    title->ApplyStyle(L"style_14");

    title->AppendBreak(Spire::Doc::BreakType::PageBreak);

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"Введение\n");
    title->ApplyStyle(L"bold_style_14");

    title->AppendBreak(Spire::Doc::BreakType::PageBreak);

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"Глава 1.\n");
    title->ApplyStyle(L"bold_style_14");

    // Добавляем исходные данные с файла
    intrusive_ptr<Spire::Doc::Paragraph> sourceParagraph = section->AddParagraph();
    sourceParagraph->AppendText(source_text.c_str());
    sourceParagraph->ApplyStyle(L"style_14");
    sourceParagraph->AppendBreak(Spire::Doc::BreakType::PageBreak);

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"Глава 2.\n");
    title->ApplyStyle(L"bold_style_14");

    title->AppendBreak(Spire::Doc::BreakType::PageBreak);

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"Глава 3.\n");
    title->ApplyStyle(L"bold_style_14");

    title->AppendBreak(Spire::Doc::BreakType::PageBreak);

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"Заключение\n");
    title->ApplyStyle(L"bold_style_14");

    title->AppendBreak(Spire::Doc::BreakType::PageBreak);

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"Список использованных источников\n");
    title->ApplyStyle(L"bold_style_14");

    title->AppendBreak(Spire::Doc::BreakType::PageBreak);

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"Приложение 1. Протокол проверки на антиплагиат\n");
    title->ApplyStyle(L"bold_style_14");

    title->AppendBreak(Spire::Doc::BreakType::PageBreak);

    doc->SaveToFile(_filePath.toStdWString().c_str(), Spire::Doc::FileFormat::Docx2019);
    doc->Dispose();
}

void FileEditor::changeTemplateMasterDegreeDoc()
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
    addUnderlineBoldStyleInDoc_14(doc);
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

    std::wstring faculty = _faculty.empty() ? L"ФАКУЛЬТЕТ\n" :  _faculty + L" ФАКУЛЬТЕТ\n";
    title->AppendText(faculty.c_str());
    std::wstring department = _department.empty() ? L"КАФЕДРА\n\n\n\n" : L"КАФЕДРА " + _department + L"\n\n\n\n";
    title->AppendText(department.c_str());

    title->ApplyStyle(L"bold_style_12");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"ПОЯСНИТЕЛЬНАЯ ЗАПИСКА");
    title->ApplyStyle(L"bold_style_18");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"МАГИСТЕРСТКОЙ ДИССЕРТАЦИИ\n");
    title->ApplyStyle(L"bold_style_14");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"на тему:");
    title->ApplyStyle(L"style_12");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    std::wstring theme = L"«" + _theme + L"»\n\n\n\n\n\n";
    title->AppendText(theme.c_str());
    title->ApplyStyle(L"underline_style_16");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Justify);
    std::wstring student = L"Студент:   " + _student;
    title->AppendText(student.c_str());
    title->ApplyStyle(L"bold_style_14");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"(фамилия, имя, отчество, группа)");
    title->ApplyStyle(L"style_8");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Justify);
    std::wstring headOfWork = L"Руководитель работы:   " + _headOfWork;
    title->AppendText(headOfWork.c_str());
    title->ApplyStyle(L"bold_style_14");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"(фамилия, имя, отчество, уч. степень, звание, должность, место работы)");
    title->ApplyStyle(L"style_8");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Justify);
    std::wstring reviewer = L"Рецензент работы:   " + _reviewer;
    title->AppendText(reviewer.c_str());
    title->ApplyStyle(L"bold_style_14");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"(фамилия, имя, отчество, уч. степень, звание, должность, место работы)");
    title->ApplyStyle(L"style_8");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Justify);
    std::wstring headOfDepartment = L"Зав. кафедрой:   " + _headOfDepartment;
    title->AppendText(headOfDepartment.c_str());
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
                      "\n\n\n");
    title->AppendText(faculty.c_str());
    title->AppendText(L"\n\n");
    department = _department.empty() ? L"КАФЕДРА\n\n\n" : L"КАФЕДРА " + _department + L"\n\n\n";
    title->AppendText(department.c_str());
    title->ApplyStyle(L"bold_style_14");

    title = section->AddParagraph();
    title->AppendText(L"                                                                                                             УТВЕРЖДАЮ:");
    title->ApplyStyle(L"bold_style_12");

    title = section->AddParagraph();
    title->AppendText(L"                                                                                          Зав. кафедрой ЦТ\n");
    title->ApplyStyle(L"bold_style_14");

    title = section->AddParagraph();
    title->AppendText(L"___________________________");
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Right);
    title->AppendText(L"\n\n");
    title->AppendText(L"\"_____\" ____________ 2024 г.");
    title->ApplyStyle(L"style_14");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"\n\nЗАДАНИЕ НА МАГИСТЕРСКУЮ ДИССЕРТАЦИЮ\n\n");
    title->ApplyStyle(L"bold_style_14");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Justify);
    student = L"Студент:   " + _student;
    title->AppendText(student.c_str());
    title->ApplyStyle(L"bold_style_14");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"(фамилия, имя, отчество, группа)");
    title->ApplyStyle(L"style_8");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Justify);
    title->AppendText(L"Направление подготовки: \n\n"
                      "Профиль: ");
    title->ApplyStyle(L"bold_style_14");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"(направление подготовки)");
    title->ApplyStyle(L"style_8");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Justify);
    headOfWork = L"Руководитель работы:   " + _headOfWork;
    title->AppendText(headOfWork.c_str());
    title->ApplyStyle(L"bold_style_14");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"(фамилия, имя, отчество, уч. степень, звание, должность, место работы)");
    title->ApplyStyle(L"style_8");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"\n\n\n\n\n\n");
    title->ApplyStyle(L"bold_style_14");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"г. Саров, 2024");
    title->ApplyStyle(L"bold_style_14");

    title->AppendBreak(Spire::Doc::BreakType::PageBreak);

    /// 3 страница ///

    title = section->AddParagraph();
    theme = L"Наименование темы:" + _theme + L"\n\n";
    title->AppendText(theme.c_str());
    title->AppendText(L"Место выполнения: "
                      "Исходные данные к проекту: \n\n\n\n"
                      "Экспериментальная часть работы:\n");
    title->ApplyStyle(L"bold_style_14");


    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"Допуск к защите\n");
    title->ApplyStyle(L"underline_bold_style_14");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Justify);
    title->AppendText(L"       К защите представляется:\n"
                      "пояснительная записка на _____________ страниц\n"
                      "чертёжно-графический материал на _______ листов\n"
                      "иллюстрационный материал _____________ слайдов\n"
                      "экспериментальные макеты _____________ шт.\n");
    title->ApplyStyle(L"style_14");

    title = section->AddParagraph();
    title->AppendText(L"Руководитель магистерской диссертации	__________          ____________");
    title->ApplyStyle(L"style_12");

    title = section->AddParagraph();
    title->AppendText(L"                                                                                                                                                       подпись                     фамилия, имя, отчество\n");
    title->ApplyStyle(L"style_8");

    title = section->AddParagraph();
    title->AppendText(L"Рецензент магистерской диссертации	__________          ____________");
    title->ApplyStyle(L"style_12");

    title = section->AddParagraph();
    title->AppendText(L"                                                                                                                                                       подпись                     фамилия, имя, отчество\n");
    title->ApplyStyle(L"style_8");

    title = section->AddParagraph();
    title->AppendText(L"\nСтудент группы _________ допущен к защите магистерской диссертации по направлению подготовки _________\n\n"
                      "Дата защиты\n\n"
                      "Заведующий кафедрой     _________________         ");
    title->ApplyStyle(L"style_14");

    title->AppendBreak(Spire::Doc::BreakType::PageBreak);

    /// 4 страница ///

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"Аннотация");
    title->ApplyStyle(L"bold_style_14");

    title->AppendBreak(Spire::Doc::BreakType::PageBreak);

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"Содержание\n");
    title->ApplyStyle(L"bold_style_14");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Justify);
    title->AppendText(L"Введение…………………………………………………………………………...6\n"
                      "Глава 1……………………………………………………………………………..7\n"
                      "Глава 2……………………………………………………………………………..8\n"
                      "Глава 3……………………………………………………………………………..9\n"
                      "Заключение……………………………………………………………………….10\n"
                      "Список использованных источников…………………………………………...11\n"
                      "Приложение 1. Протокол проверки на антиплагиат…………………………...12");
    title->ApplyStyle(L"style_14");

    title->AppendBreak(Spire::Doc::BreakType::PageBreak);

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"Введение\n");
    title->ApplyStyle(L"bold_style_14");

    title->AppendBreak(Spire::Doc::BreakType::PageBreak);

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"Глава 1.\n");
    title->ApplyStyle(L"bold_style_14");

    // Добавляем исходные данные с файла
    intrusive_ptr<Spire::Doc::Paragraph> sourceParagraph = section->AddParagraph();
    sourceParagraph->AppendText(source_text.c_str());
    sourceParagraph->ApplyStyle(L"style_14");
    sourceParagraph->AppendBreak(Spire::Doc::BreakType::PageBreak);

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"Глава 2.\n");
    title->ApplyStyle(L"bold_style_14");

    title->AppendBreak(Spire::Doc::BreakType::PageBreak);

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"Глава 3.\n");
    title->ApplyStyle(L"bold_style_14");

    title->AppendBreak(Spire::Doc::BreakType::PageBreak);

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"Заключение\n");
    title->ApplyStyle(L"bold_style_14");

    title->AppendBreak(Spire::Doc::BreakType::PageBreak);

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"Список использованных источников\n");
    title->ApplyStyle(L"bold_style_14");

    title->AppendBreak(Spire::Doc::BreakType::PageBreak);

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"Приложение 1. Протокол проверки на антиплагиат\n");
    title->ApplyStyle(L"bold_style_14");

    title->AppendBreak(Spire::Doc::BreakType::PageBreak);

    doc->SaveToFile(_filePath.toStdWString().c_str(), Spire::Doc::FileFormat::Docx2019);
    doc->Dispose();
}

void FileEditor::changeReviewDoc(bool isVKR)
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
    addUnderlineBoldStyleInDoc_14(doc);
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
                      "РОССИЙСКОЙ ФЕДЕРАЦИИ");
    title->ApplyStyle(L"bold_style_14");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"Федеральное государственное автономное образовательное\n"
                      "учреждение высшего образования\n"
                      "«Национальный исследовательский ядерный университет «МИФИ»\n");
    title->ApplyStyle(L"style_14");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"Саровский физико-технический институт –");
    title->ApplyStyle(L"bold_style_14");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"филиал федерального государственного автономного образовательного\n"
                      "учреждения высшего образования «Национальный исследовательский\n"
                      "ядерный университет «МИФИ»");
    title->ApplyStyle(L"style_14");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"(СарФТИ НИЯУ МИФИ)\n\n\n\n\n");
    title->ApplyStyle(L"bold_style_14");

    std::wstring faculty = _faculty.empty() ? L"ФАКУЛЬТЕТ\n" :  _faculty + L" ФАКУЛЬТЕТ\n";
    title->AppendText(faculty.c_str());

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    std::wstring department = _department.empty() ? L"\nКАФЕДРА\n\n\n\n" : L"\nКАФЕДРА\n " + _department + L"\n\n\n\n";
    title->AppendText(department.c_str());
    title->ApplyStyle(L"bold_style_12");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"РЕЦЕНЗИЯ");
    title->ApplyStyle(L"bold_style_18");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);

    std::wstring text = isVKR ? L"НА ВЫПУСКНУЮ КВАЛИФИКАЦИОННУЮ РАБОТУ БАКАЛАВРА\n\n\n" : L"НА МАГИСТЕРСКУЮ ДИССЕРТАЦИЮ\n\n\n";
    title->AppendText(text.c_str());
    title->ApplyStyle(L"bold_style_12");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Justify);
    std::wstring student = L"Студента:   " + _student;
    title->AppendText(student.c_str());
    title->ApplyStyle(L"bold_style_14");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"(фамилия, имя, отчество, группа)");
    title->ApplyStyle(L"style_8");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Justify);
    std::wstring headOfWork = L"На тему:   " + _theme;
    title->AppendText(headOfWork.c_str());
    title->ApplyStyle(L"bold_style_14");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"(наименование темы выпускной квалификационной работы)");
    title->ApplyStyle(L"style_8");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Justify);
    std::wstring reviewer = L"Рецензент работы:   " + _reviewer;
    title->AppendText(reviewer.c_str());
    title->ApplyStyle(L"bold_style_14");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"(фамилия, имя, отчество, уч. степень, звание, должность, место работы)");
    title->ApplyStyle(L"style_8");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"\n\n\n\n\n\n\n\n");
    title->ApplyStyle(L"bold_style_14");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Left);
    title->AppendText(L"\"____\" _________	20	___	г.");
    title->ApplyStyle(L"bold_style_12");
    title->AppendBreak(Spire::Doc::BreakType::PageBreak);


    /// 2 страница
    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Justify);
    title->ApplyStyle(L"bold_style_12");
    title->AppendText(L"1. Представленные материалы для рецензирования\n\n\n"
                      "2. Оценка актуальности и практической значимости работы\n\n\n"
                      "3. Характеристика основных результатов работы, степень их обоснованности, значение для теории и практики\n\n\n"
                      "4. Отмеченные недостатки\n\n\n"
                      "5. Оценка по 4-х бальной системе (отлично, хорошо, удовлетворительно, неудовлетворительно) и заключение о соответствии присваиваемой квалификации\n\n\n");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Right);
    title->AppendText(L"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nПодпись рецензента _______________________");
    title->ApplyStyle(L"style_12");

    doc->SaveToFile(_filePath.toStdWString().c_str(), Spire::Doc::FileFormat::Docx2019);
    doc->Dispose();
}

void FileEditor::changeRecallDoc(bool isVKR)
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
    addUnderlineBoldStyleInDoc_14(doc);
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
                      "РОССИЙСКОЙ ФЕДЕРАЦИИ");
    title->ApplyStyle(L"bold_style_14");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"Федеральное государственное автономное образовательное\n"
                      "учреждение высшего образования\n"
                      "«Национальный исследовательский ядерный университет «МИФИ»\n");
    title->ApplyStyle(L"style_14");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"Саровский физико-технический институт –");
    title->ApplyStyle(L"bold_style_14");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"филиал федерального государственного автономного образовательного\n"
                      "учреждения высшего образования «Национальный исследовательский\n"
                      "ядерный университет «МИФИ»");
    title->ApplyStyle(L"style_14");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"(СарФТИ НИЯУ МИФИ)\n\n\n\n\n");
    title->ApplyStyle(L"bold_style_14");

    std::wstring faculty = _faculty.empty() ? L"ФАКУЛЬТЕТ\n" :  _faculty + L" ФАКУЛЬТЕТ\n";
    title->AppendText(faculty.c_str());

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    std::wstring department = _department.empty() ? L"\nКАФЕДРА\n\n\n\n" : L"\nКАФЕДРА\n " + _department + L"\n\n\n\n";
    title->AppendText(department.c_str());
    title->ApplyStyle(L"bold_style_12");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"ОТЗЫВ РУКОВОДИТЕЛЯ");
    title->ApplyStyle(L"bold_style_18");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);

    std::wstring text = isVKR ? L"НА ВЫПУСКНУЮ КВАЛИФИКАЦИОННУЮ РАБОТУ БАКАЛАВРА\n\n\n" : L"НА МАГИСТЕРСКУЮ ДИССЕРТАЦИЮ\n\n\n";
    title->AppendText(text.c_str());
    title->ApplyStyle(L"bold_style_12");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Justify);
    std::wstring student = L"Студента:   " + _student;
    title->AppendText(student.c_str());
    title->ApplyStyle(L"bold_style_14");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"(фамилия, имя, отчество, группа)");
    title->ApplyStyle(L"style_8");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Justify);
    std::wstring headOfWork = L"На тему:   " + _theme;
    title->AppendText(headOfWork.c_str());
    title->ApplyStyle(L"bold_style_14");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"(наименование темы выпускной квалификационной работы)");
    title->ApplyStyle(L"style_8");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Justify);
    std::wstring reviewer = L"Под руководством:   " + _headOfWork;
    title->AppendText(reviewer.c_str());
    title->ApplyStyle(L"bold_style_14");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"(фамилия, имя, отчество, уч. степень, звание, должность, место работы)");
    title->ApplyStyle(L"style_8");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Center);
    title->AppendText(L"\n\n\n\n\n\n\n\n");
    title->ApplyStyle(L"bold_style_14");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Left);
    title->AppendText(L"\"____\" _________	20	___	г.");
    title->ApplyStyle(L"bold_style_12");
    title->AppendBreak(Spire::Doc::BreakType::PageBreak);


    /// 2 страница
    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Justify);
    title->ApplyStyle(L"bold_style_12");
    title->AppendText(L"1. Актуальность темы и соответствие работы заданию\n\n\n"
                      "2. Характеристика теоретической и практической подготовки студента, его конкретное участие в получении результатов\n\n\n"
                      "3. Рекомендации об использовании результатов\n\n\n"
                      "4. Заключение руководителя о профессиональной подготовленности студента и его соответствии присваиваемой степени бакалавра\n\n\n\n\n\n");

    title = section->AddParagraph();
    title->GetFormat()->SetHorizontalAlignment(Spire::Doc::HorizontalAlignment::Right);
    title->AppendText(L"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nПодпись руководителя _______________________");
    title->ApplyStyle(L"style_12");

    doc->SaveToFile(_filePath.toStdWString().c_str(), Spire::Doc::FileFormat::Docx2019);
    doc->Dispose();
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

void FileEditor::addUnderlineBoldStyleInDoc_14(intrusive_ptr<Spire::Doc::Document> doc)
{
    intrusive_ptr<Spire::Doc::ParagraphStyle> standartStyle = new Spire::Doc::ParagraphStyle(doc);
    standartStyle->SetName(L"underline_bold_style_14");
    standartStyle->GetCharacterFormat()->SetFontName(L"Times New Roman");
    standartStyle->GetCharacterFormat()->SetBold(true);
    standartStyle->GetCharacterFormat()->SetFontSize(14);
    standartStyle->GetCharacterFormat()->SetUnderlineStyle(Spire::Doc::UnderlineStyle::Single);
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
