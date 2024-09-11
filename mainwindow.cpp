#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QFileDialog"
#include <QMessageBox>
#include "utils.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Редактор документов");

    ui->comboBox_type_doc->addItem("ВКР бакалавра");
    ui->comboBox_type_doc->addItem("Магистерсткая диссертация");
    ui->comboBox_type_doc->addItem("Рецензия");

    ui->button_select_doc->setMinimumWidth(130);

    ui->button_transform->setEnabled(false);
    ui->lineEdit_doc_name->setText("Название файла");
    ui->lineEdit_doc_name->setStyleSheet("QLineEdit { color: rgba(255, 255, 255, 100); }");

    auto fileEditor = FileEditor();
    setFileEditor(fileEditor);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_button_select_doc_clicked()
{
    QString filePath = QFileDialog::getOpenFileName(this, tr("Открыть файл"), "/home", tr("Файлы (*.doc *.docx)"));

    if (!filePath.isEmpty())
    {
        ui->lineEdit_doc_name->setText(Utils::extractFileName(filePath));
        ui->lineEdit_doc_name->setStyleSheet("QLineEdit { color: rgba(255, 255, 255, 255); }");
        ui->button_transform->setEnabled(true);

        if (_fileEditor != nullptr)
        {
            _fileEditor->setFilePath(filePath);
        }
    }
    else
    {
        ui->button_transform->setEnabled(false);
    }
}

void MainWindow::on_button_transform_clicked()
{
    // Если объект редактора файлов создан и путь до файла установлен
    if (_fileEditor && !_fileEditor->getFilePath().isEmpty())
    {
        switch(ui->comboBox_type_doc->currentIndex())
        {
        case FileEditor::ModeEdit::Bachelor_degree: _fileEditor->changeTemplateBachelorDegreeDoc(); break;
        case FileEditor::ModeEdit::Master_degree: _fileEditor->changeTemplateMasterDegreeDoc(); break;
        case FileEditor::ModeEdit::Review: _fileEditor->changeReviewDoc(); break;
        default: break;
        }
    }

    _fileEditor->setFilePath("");
    ui->lineEdit_doc_name->clear();
    ui->button_transform->setEnabled(false);

    ui->lineEdit_doc_name->setText("Название файла");
    ui->lineEdit_doc_name->setStyleSheet("QLineEdit { color: rgba(255, 255, 255, 100); }");

    QMessageBox msgBox;
    // Устанавливаем иконку для сообщения
    msgBox.setIcon(QMessageBox::Information);
    msgBox.setWindowTitle("Информационное окно");
    msgBox.setText("Операция успешно выполнена");
    msgBox.setStandardButtons(QMessageBox::Ok);
    msgBox.exec();
}
