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
        Review
    };

    /// Изменяет файл на шаблон ВКР бакалавра
    void changeTemplateBachelorDegreeDoc();;

    /// Изменяет файл на шаблон магистерской диссертации
    void changeTemplateMasterDegreeDoc();;

    /// Изменяет файл на шаблон отзыва
    void changeReviewDoc();;

    /// Устанавливает путь до файла
    inline void setFilePath(const QString& IFilePath) { _filePath = IFilePath; }

    /// Возвращает путь до файла
    inline QString getFilePath() { return _filePath; }

private:

    /// Добавляет стандартный стиль для редактирования документа
    /// Times New Roman, 8
    void addStyleInDoc_8(intrusive_ptr<Spire::Doc::Document> doc);

    /// Добавляет титульный стиль для редактирования документа
    /// Times New Roman, 12
    void addStyleInDoc_12(intrusive_ptr<Spire::Doc::Document> doc);

    /// Добавляет титульный стиль для редактирования документа
    /// Times New Roman, 12, Bold
    void addBoldStyleInDoc_12(intrusive_ptr<Spire::Doc::Document> doc);


    /// Добавляет стандартный стиль для редактирования документа
    /// Times New Roman, 14
    void addStyleInDoc_14(intrusive_ptr<Spire::Doc::Document> doc);

    /// Добавляет стандартный стиль для редактирования документа
    /// Times New Roman, 14, Bold
    void addBoldStyleInDoc_14(intrusive_ptr<Spire::Doc::Document> doc);

    /// Добавляет титульный стиль для редактирования документа
    /// Times New Roman, 16, подчеркнутый
    void addUnderlineStyleInDoc_16(intrusive_ptr<Spire::Doc::Document> doc);

    /// Добавляет титульный стиль для редактирования документа
    /// Times New Roman, 18, Bold
    void addBoldStyleInDoc_18(intrusive_ptr<Spire::Doc::Document> doc);

    QString _filePath;
    QString _emblemPath = "C:/Main/Projects/DocsEditor/resources/emblem.png";
};

