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
    this->setMaximumHeight(110);

    ui->comboBox_type_doc->addItem("ВКР бакалавра");
    ui->comboBox_type_doc->addItem("Маг. диссертация");
    ui->comboBox_type_doc->addItem("Рецензия на ВКР");
    ui->comboBox_type_doc->addItem("Рецензия на маг. дисс.");
    ui->comboBox_type_doc->addItem("Отзыв на ВКР");
    ui->comboBox_type_doc->addItem("Отзыв на маг. дисс.");
    ui->comboBox_type_doc->addItem("Учебное пособие");

    //ui->button_select_doc->setMinimumWidth(130);

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
        if (ui->checkBox_add_data->isChecked())
        {
            _fileEditor->setFaculty(ui->lineEdit_faculty->text().toUpper().toStdWString());
            _fileEditor->setDepartment(ui->lineEdit_department->text().toUpper().toStdWString());
            _fileEditor->setTheme(ui->lineEdit_theme->text().toStdWString());
            _fileEditor->setStudent(ui->lineEdit_student->text().toStdWString());
            _fileEditor->setReviewer(ui->lineEdit_reviewer->text().toStdWString());
            _fileEditor->setHeadOfWork(ui->lineEdit_headOfWork->text().toStdWString());
            _fileEditor->setHeadOfDepartment(ui->lineEdit_headOfDepartment->text().toStdWString());
        }

        switch(ui->comboBox_type_doc->currentIndex())
        {
        case FileEditor::ModeEdit::Bachelor_degree: _fileEditor->changeTemplateBachelorDegreeDoc(); break;
        case FileEditor::ModeEdit::Master_degree: _fileEditor->changeTemplateMasterDegreeDoc(); break;
        case FileEditor::ModeEdit::Review_VKR: _fileEditor->changeReviewDoc(true); break;
        case FileEditor::ModeEdit::Review_MAG: _fileEditor->changeReviewDoc(false); break;
        case FileEditor::ModeEdit::Recall_VKR: _fileEditor->changeRecallDoc(true); break;
        case FileEditor::ModeEdit::Recall_MAG: _fileEditor->changeRecallDoc(false); break;
        case FileEditor::ModeEdit::Teaching_AID: _fileEditor->createTeachingAID(); break;
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

void MainWindow::on_checkBox_add_data_clicked()
{
    if (ui->checkBox_add_data->isChecked())
    {
        this->setMinimumHeight(262);
    }
    else
    {
        this->setMinimumHeight(110);
        this->setMaximumHeight(110);
        this->resize(430, 110);
    }
}


void MainWindow::on_comboBox_type_doc_currentIndexChanged(int index)
{
    if (index == FileEditor::ModeEdit::Bachelor_degree || index == FileEditor::ModeEdit::Master_degree)
    {
        ui->checkBox_add_data->setVisible(true);
        ui->checkBox_add_data->setChecked(false);
        this->setMinimumHeight(110);
        this->setMaximumHeight(110);
        this->resize(430, 110);
    }
    else
    {
        ui->checkBox_add_data->setVisible(false);
        this->setMinimumHeight(75);
        this->setMaximumHeight(75);
        this->resize(430, 75);
    }
}

