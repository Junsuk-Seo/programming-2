/********************************************************************************
** Form generated from reading UI file 'stu_1.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STU_1_H
#define UI_STU_1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_stu_1
{
public:
    QLabel *back_label_1;
    QPushButton *back_pushbutton;
    QPushButton *Add_Pushbutton;
    QPushButton *loadData;
    QPushButton *stu;
    QPushButton *student_plus;
    QPushButton *home;
    QPushButton *course;
    QPushButton *course_plus;
    QLabel *label;
    QTableView *tableView;

    void setupUi(QDialog *stu_1)
    {
        if (stu_1->objectName().isEmpty())
            stu_1->setObjectName(QString::fromUtf8("stu_1"));
        stu_1->resize(800, 600);
        back_label_1 = new QLabel(stu_1);
        back_label_1->setObjectName(QString::fromUtf8("back_label_1"));
        back_label_1->setGeometry(QRect(0, 1, 801, 601));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(14);
        back_label_1->setFont(font);
        back_pushbutton = new QPushButton(stu_1);
        back_pushbutton->setObjectName(QString::fromUtf8("back_pushbutton"));
        back_pushbutton->setGeometry(QRect(590, 470, 51, 51));
        Add_Pushbutton = new QPushButton(stu_1);
        Add_Pushbutton->setObjectName(QString::fromUtf8("Add_Pushbutton"));
        Add_Pushbutton->setGeometry(QRect(540, 150, 139, 31));
        loadData = new QPushButton(stu_1);
        loadData->setObjectName(QString::fromUtf8("loadData"));
        loadData->setGeometry(QRect(20, 559, 80, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(12);
        loadData->setFont(font1);
        stu = new QPushButton(stu_1);
        stu->setObjectName(QString::fromUtf8("stu"));
        stu->setGeometry(QRect(710, 20, 31, 31));
        student_plus = new QPushButton(stu_1);
        student_plus->setObjectName(QString::fromUtf8("student_plus"));
        student_plus->setGeometry(QRect(740, 20, 31, 31));
        home = new QPushButton(stu_1);
        home->setObjectName(QString::fromUtf8("home"));
        home->setGeometry(QRect(20, 20, 31, 31));
        course = new QPushButton(stu_1);
        course->setObjectName(QString::fromUtf8("course"));
        course->setGeometry(QRect(650, 20, 31, 31));
        course_plus = new QPushButton(stu_1);
        course_plus->setObjectName(QString::fromUtf8("course_plus"));
        course_plus->setGeometry(QRect(680, 20, 31, 31));
        label = new QLabel(stu_1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 570, 54, 12));
        tableView = new QTableView(stu_1);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(220, 191, 351, 301));

        retranslateUi(stu_1);

        QMetaObject::connectSlotsByName(stu_1);
    } // setupUi

    void retranslateUi(QDialog *stu_1)
    {
        stu_1->setWindowTitle(QCoreApplication::translate("stu_1", "Dialog", nullptr));
        back_label_1->setText(QCoreApplication::translate("stu_1", "TextLabel", nullptr));
        back_pushbutton->setText(QString());
        Add_Pushbutton->setText(QCoreApplication::translate("stu_1", "Add new Students", nullptr));
        loadData->setText(QCoreApplication::translate("stu_1", "Load data", nullptr));
        stu->setText(QString());
        student_plus->setText(QString());
        home->setText(QString());
        course->setText(QString());
        course_plus->setText(QString());
        label->setText(QCoreApplication::translate("stu_1", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class stu_1: public Ui_stu_1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STU_1_H
