#pragma once

#include <QMainWindow>
#include "fileeditor.h"

QT_BEGIN_NAMESPACE

namespace Ui
{
    class MainWindow;
}

QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    /// Устанавливает объект редактора файлов
    inline void setFileEditor(const FileEditor& IfileEditor) { _fileEditor = std::make_unique<FileEditor>(IfileEditor); }

    /// Возвращает объект редактора файлов
    inline FileEditor getFileEditor() { return *_fileEditor; };

private slots:

    /// Обработчик клавиши "Выбрать файл"
    void on_button_select_doc_clicked();

    /// Обработчик клавиши "Преобразовать"
    void on_button_transform_clicked();

    void on_checkBox_add_data_clicked();

private:
    Ui::MainWindow *ui;
    std::unique_ptr<FileEditor> _fileEditor = nullptr;
};
