/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *button_transform;
    QLabel *label_type_doc;
    QComboBox *comboBox_type_doc;
    QPushButton *button_select_doc;
    QLineEdit *lineEdit_doc_name;
    QCheckBox *checkBox_add_data;
    QLineEdit *lineEdit_faculty;
    QLabel *label_faculty;
    QLabel *label_department;
    QLineEdit *lineEdit_department;
    QLineEdit *lineEdit_theme;
    QLabel *label_theme;
    QLabel *label_student;
    QLabel *label_headOfWork;
    QLineEdit *lineEdit_headOfWork;
    QLineEdit *lineEdit_student;
    QLabel *label_headOfDepartment;
    QLineEdit *lineEdit_headOfDepartment;
    QLineEdit *lineEdit_reviewer;
    QLabel *label_reviewer;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(432, 262);
        MainWindow->setMinimumSize(QSize(430, 110));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        button_transform = new QPushButton(centralwidget);
        button_transform->setObjectName("button_transform");
        button_transform->setGeometry(QRect(10, 40, 121, 24));
        label_type_doc = new QLabel(centralwidget);
        label_type_doc->setObjectName("label_type_doc");
        label_type_doc->setGeometry(QRect(145, 43, 101, 16));
        label_type_doc->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_type_doc->setTextFormat(Qt::TextFormat::AutoText);
        label_type_doc->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        comboBox_type_doc = new QComboBox(centralwidget);
        comboBox_type_doc->setObjectName("comboBox_type_doc");
        comboBox_type_doc->setGeometry(QRect(235, 40, 185, 24));
        button_select_doc = new QPushButton(centralwidget);
        button_select_doc->setObjectName("button_select_doc");
        button_select_doc->setGeometry(QRect(10, 9, 121, 24));
        button_select_doc->setMaximumSize(QSize(16777215, 16777215));
        button_select_doc->setIconSize(QSize(16, 16));
        lineEdit_doc_name = new QLineEdit(centralwidget);
        lineEdit_doc_name->setObjectName("lineEdit_doc_name");
        lineEdit_doc_name->setGeometry(QRect(145, 9, 275, 24));
        lineEdit_doc_name->setReadOnly(true);
        checkBox_add_data = new QCheckBox(centralwidget);
        checkBox_add_data->setObjectName("checkBox_add_data");
        checkBox_add_data->setGeometry(QRect(12, 76, 262, 22));
        lineEdit_faculty = new QLineEdit(centralwidget);
        lineEdit_faculty->setObjectName("lineEdit_faculty");
        lineEdit_faculty->setGeometry(QRect(80, 110, 341, 24));
        label_faculty = new QLabel(centralwidget);
        label_faculty->setObjectName("label_faculty");
        label_faculty->setGeometry(QRect(15, 113, 61, 16));
        label_department = new QLabel(centralwidget);
        label_department->setObjectName("label_department");
        label_department->setGeometry(QRect(25, 143, 61, 16));
        lineEdit_department = new QLineEdit(centralwidget);
        lineEdit_department->setObjectName("lineEdit_department");
        lineEdit_department->setGeometry(QRect(80, 140, 341, 24));
        lineEdit_theme = new QLineEdit(centralwidget);
        lineEdit_theme->setObjectName("lineEdit_theme");
        lineEdit_theme->setGeometry(QRect(80, 170, 341, 24));
        label_theme = new QLabel(centralwidget);
        label_theme->setObjectName("label_theme");
        label_theme->setGeometry(QRect(46, 174, 47, 16));
        label_student = new QLabel(centralwidget);
        label_student->setObjectName("label_student");
        label_student->setGeometry(QRect(29, 203, 51, 16));
        label_headOfWork = new QLabel(centralwidget);
        label_headOfWork->setObjectName("label_headOfWork");
        label_headOfWork->setGeometry(QRect(225, 203, 81, 16));
        lineEdit_headOfWork = new QLineEdit(centralwidget);
        lineEdit_headOfWork->setObjectName("lineEdit_headOfWork");
        lineEdit_headOfWork->setGeometry(QRect(300, 199, 121, 24));
        lineEdit_student = new QLineEdit(centralwidget);
        lineEdit_student->setObjectName("lineEdit_student");
        lineEdit_student->setGeometry(QRect(80, 200, 115, 24));
        label_headOfDepartment = new QLabel(centralwidget);
        label_headOfDepartment->setObjectName("label_headOfDepartment");
        label_headOfDepartment->setGeometry(QRect(213, 231, 81, 16));
        lineEdit_headOfDepartment = new QLineEdit(centralwidget);
        lineEdit_headOfDepartment->setObjectName("lineEdit_headOfDepartment");
        lineEdit_headOfDepartment->setGeometry(QRect(300, 227, 121, 24));
        lineEdit_reviewer = new QLineEdit(centralwidget);
        lineEdit_reviewer->setObjectName("lineEdit_reviewer");
        lineEdit_reviewer->setGeometry(QRect(80, 227, 115, 24));
        label_reviewer = new QLabel(centralwidget);
        label_reviewer->setObjectName("label_reviewer");
        label_reviewer->setGeometry(QRect(14, 230, 61, 16));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        button_transform->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \321\210\320\260\320\261\320\273\320\276\320\275", nullptr));
        label_type_doc->setText(QCoreApplication::translate("MainWindow", "\320\222\320\270\320\264 \320\264\320\276\320\272\321\203\320\274\320\265\320\275\321\202\320\260:", nullptr));
        button_select_doc->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \320\264\320\276\320\272\321\203\320\274\320\265\320\275\321\202", nullptr));
#if QT_CONFIG(accessibility)
        lineEdit_doc_name->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
        lineEdit_doc_name->setText(QString());
        checkBox_add_data->setText(QCoreApplication::translate("MainWindow", "  \320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\264\320\260\320\275\320\275\321\213\320\265 \320\262 \321\210\320\260\320\261\320\273\320\276\320\275\320\275\321\213\320\271 \320\264\320\276\320\272\321\203\320\274\320\265\320\275\321\202", nullptr));
        label_faculty->setText(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\272\321\203\320\273\321\214\321\202\320\265\321\202:", nullptr));
        label_department->setText(QCoreApplication::translate("MainWindow", "\320\232\320\260\321\204\320\265\320\264\321\200\320\260:", nullptr));
        label_theme->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\274\320\260:", nullptr));
        label_student->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\321\203\320\264\320\265\320\275\321\202:", nullptr));
        label_headOfWork->setText(QCoreApplication::translate("MainWindow", "\320\240\321\203\320\272. \321\200\320\260\320\261\320\276\321\202\321\213:", nullptr));
        label_headOfDepartment->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\262. \320\272\320\260\321\204\320\265\320\264\321\200\320\276\320\271:", nullptr));
        label_reviewer->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\321\206\320\265\320\275\320\267\320\265\320\275\321\202:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
