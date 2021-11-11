/********************************************************************************
** Form generated from reading UI file 'secdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECDIALOG_H
#define UI_SECDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_SecDialog
{
public:
    QPushButton *Add_Pushbutton;
    QPushButton *back_pushbutton;
    QTableView *tableView;
    QPushButton *loadData;
    QLabel *label;
    QLabel *label_2;
    QPushButton *course;
    QPushButton *home;
    QPushButton *stu;
    QPushButton *course_plus;
    QPushButton *student_plus;
    QLabel *back_label;

    void setupUi(QDialog *SecDialog)
    {
        if (SecDialog->objectName().isEmpty())
            SecDialog->setObjectName(QString::fromUtf8("SecDialog"));
        SecDialog->resize(800, 600);
        Add_Pushbutton = new QPushButton(SecDialog);
        Add_Pushbutton->setObjectName(QString::fromUtf8("Add_Pushbutton"));
        Add_Pushbutton->setGeometry(QRect(590, 130, 139, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        Add_Pushbutton->setFont(font);
        back_pushbutton = new QPushButton(SecDialog);
        back_pushbutton->setObjectName(QString::fromUtf8("back_pushbutton"));
        back_pushbutton->setGeometry(QRect(745, 460, 51, 51));
        tableView = new QTableView(SecDialog);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(70, 189, 661, 321));
        loadData = new QPushButton(SecDialog);
        loadData->setObjectName(QString::fromUtf8("loadData"));
        loadData->setGeometry(QRect(20, 560, 81, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(12);
        loadData->setFont(font1);
        label = new QLabel(SecDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 560, 121, 41));
        label_2 = new QLabel(SecDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 800, 600));
        course = new QPushButton(SecDialog);
        course->setObjectName(QString::fromUtf8("course"));
        course->setGeometry(QRect(650, 20, 31, 30));
        home = new QPushButton(SecDialog);
        home->setObjectName(QString::fromUtf8("home"));
        home->setGeometry(QRect(20, 20, 31, 30));
        stu = new QPushButton(SecDialog);
        stu->setObjectName(QString::fromUtf8("stu"));
        stu->setGeometry(QRect(710, 20, 31, 30));
        course_plus = new QPushButton(SecDialog);
        course_plus->setObjectName(QString::fromUtf8("course_plus"));
        course_plus->setGeometry(QRect(680, 20, 31, 30));
        student_plus = new QPushButton(SecDialog);
        student_plus->setObjectName(QString::fromUtf8("student_plus"));
        student_plus->setGeometry(QRect(740, 20, 31, 30));
        back_label = new QLabel(SecDialog);
        back_label->setObjectName(QString::fromUtf8("back_label"));
        back_label->setGeometry(QRect(0, 0, 801, 601));
        back_label->raise();
        label_2->raise();
        back_pushbutton->raise();
        loadData->raise();
        label->raise();
        Add_Pushbutton->raise();
        tableView->raise();
        course->raise();
        home->raise();
        stu->raise();
        course_plus->raise();
        student_plus->raise();

        retranslateUi(SecDialog);

        QMetaObject::connectSlotsByName(SecDialog);
    } // setupUi

    void retranslateUi(QDialog *SecDialog)
    {
        SecDialog->setWindowTitle(QCoreApplication::translate("SecDialog", "Dialog", nullptr));
        Add_Pushbutton->setText(QCoreApplication::translate("SecDialog", "Add new Course", nullptr));
        back_pushbutton->setText(QString());
        loadData->setText(QCoreApplication::translate("SecDialog", "Load data", nullptr));
        label->setText(QCoreApplication::translate("SecDialog", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("SecDialog", "TextLabel", nullptr));
        course->setText(QString());
        home->setText(QString());
        stu->setText(QString());
        course_plus->setText(QString());
        student_plus->setText(QString());
        back_label->setText(QCoreApplication::translate("SecDialog", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecDialog: public Ui_SecDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECDIALOG_H
