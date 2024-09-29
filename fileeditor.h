#pragma once

#include <QString>
#include "Spire.Doc.o.h"

class FileEditor
{
public:
    FileEditor();

    enum ModeEdit
    {
        Bachelor_degree = 0,
        Master_degree,
        Review_VKR, // Рецензия на вкр
        Review_MAG, // Рецензия на маг. диссертацию
        Recall_VKR, // Отзыв на вкр
        Recall_MAG, // Отзыв на маг. диссертаци
        Teaching_AID // Учебное пособие
    };

    /// Изменяет файл на шаблон ВКР бакалавра
    void changeTemplateBachelorDegreeDoc();

    /// Изменяет файл на шаблон магистерской диссертации
    void changeTemplateMasterDegreeDoc();

    /// Изменяет файл на шаблон рецензии
    void changeReviewDoc(bool isVKR);

    /// Изменяет файл на шаблон отзыва
    void changeRecallDoc(bool isVKR);

    /// Создаёт учебное пособие
    void createTeachingAID();

    /// Устанавливает путь до файла
    inline void setFilePath(const QString& iFilePath) { _filePath = iFilePath; }

    /// Устанавливает факультет
    inline void setFaculty(const std::wstring& iFaculty) { _faculty = iFaculty; };

    /// Устанавливает кафедру
    inline void setDepartment(const std::wstring& iDepartment) { _department = iDepartment; };

    /// Устанавливает тему
    inline void setTheme(const std::wstring& iTheme) { _theme = iTheme; }

    /// Устанавливает студента
    inline void setStudent(const std::wstring& iStrudent) { _student = iStrudent; }

    /// Устанавливает рецензента
    inline void setReviewer(const std::wstring& iReviewer) { _reviewer = iReviewer; }

    /// Устанавливает рук. работы
    inline void setHeadOfWork(const std::wstring& iHeadOfWork) { _headOfWork = iHeadOfWork; }

    /// Устанавливает зав. кафедрой
    inline void setHeadOfDepartment(const std::wstring& iHeadOfDepartment) { _headOfDepartment = iHeadOfDepartment; }

    /// Возвращает путь до файла
    inline QString getFilePath() const { return _filePath; }

    /// Возвращает факультет
    inline std::wstring getFaculty() const { return _faculty; }

    /// Возвращает кафедру
    inline std::wstring getDepartment() const { return _department; }

    /// Возвращает тему
    inline std::wstring getTheme() const { return _theme; }

    /// Возвращает студента
    inline std::wstring  getStrudent() const { return _student; }

    /// Возвращает рецензента
    inline std::wstring  getReviewer() const { return _reviewer; }

    /// Возвращает рук. работы
    inline std::wstring  getHeadOfWork() const { return _headOfWork; }

    /// Возвращает зав. кафедрой
    inline std::wstring  getHeadOfDepartment() const { return _headOfDepartment; }

private:
    /// Методы добавляют стили для редактирования документа

    /// Times New Roman, 8
    void addStyleInDoc_8(intrusive_ptr<Spire::Doc::Document> doc);

    /// Times New Roman, 10
    void addStyleInDoc_10(intrusive_ptr<Spire::Doc::Document> doc);

    /// Times New Roman, 10
    void addBoldStyleInDoc_10(intrusive_ptr<Spire::Doc::Document> doc);

    /// Times New Roman, 12
    void addStyleInDoc_12(intrusive_ptr<Spire::Doc::Document> doc);

    /// Times New Roman, 12, Bold
    void addBoldStyleInDoc_12(intrusive_ptr<Spire::Doc::Document> doc);

    /// Times New Roman, 14
    void addStyleInDoc_14(intrusive_ptr<Spire::Doc::Document> doc);

    /// Times New Roman, 14, Bold
    void addBoldStyleInDoc_14(intrusive_ptr<Spire::Doc::Document> doc);

    /// Times New Roman, 14, Bold, подчеркнутый
    void addUnderlineBoldStyleInDoc_14(intrusive_ptr<Spire::Doc::Document> doc);

    /// Times New Roman, 16, подчеркнутый
    void addUnderlineStyleInDoc_16(intrusive_ptr<Spire::Doc::Document> doc);

    /// Times New Roman, 18, Bold
    void addBoldStyleInDoc_18(intrusive_ptr<Spire::Doc::Document> doc);

private:

    QString _filePath;
    QString _emblemPath = "C:/Main/Projects/DocsEditor/resources/emblem.png";

    /// Факультет
    std::wstring _faculty;

    /// Кафедра
    std::wstring _department;

    /// Тема
    std::wstring _theme;

    /// Студент
    std::wstring _student;

    /// Рецензент
    std::wstring _reviewer;

    /// Руководитель работы
    std::wstring _headOfWork;

    /// Зав. кафедрой
    std::wstring _headOfDepartment;
};

