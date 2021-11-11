/********************************************************************************
** Form generated from reading UI file 'course_1.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COURSE_1_H
#define UI_COURSE_1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_course_1
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

    void setupUi(QDialog *course_1)
    {
        if (course_1->objectName().isEmpty())
            course_1->setObjectName(QString::fromUtf8("course_1"));
        course_1->resize(800, 600);
        Add_Pushbutton = new QPushButton(course_1);
        Add_Pushbutton->setObjectName(QString::fromUtf8("Add_Pushbutton"));
        Add_Pushbutton->setGeometry(QRect(590, 130, 139, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        Add_Pushbutton->setFont(font);
        back_pushbutton = new QPushButton(course_1);
        back_pushbutton->setObjectName(QString::fromUtf8("back_pushbutton"));
        back_pushbutton->setGeometry(QRect(745, 460, 51, 51));
        tableView = new QTableView(course_1);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(70, 189, 661, 321));
        loadData = new QPushButton(course_1);
        loadData->setObjectName(QString::fromUtf8("loadData"));
        loadData->setGeometry(QRect(20, 560, 81, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(12);
        loadData->setFont(font1);
        label = new QLabel(course_1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 560, 121, 41));
        label_2 = new QLabel(course_1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 800, 600));
        course = new QPushButton(course_1);
        course->setObjectName(QString::fromUtf8("course"));
        course->setGeometry(QRect(650, 20, 31, 30));
        home = new QPushButton(course_1);
        home->setObjectName(QString::fromUtf8("home"));
        home->setGeometry(QRect(20, 20, 31, 30));
        stu = new QPushButton(course_1);
        stu->setObjectName(QString::fromUtf8("stu"));
        stu->setGeometry(QRect(710, 20, 31, 30));
        course_plus = new QPushButton(course_1);
        course_plus->setObjectName(QString::fromUtf8("course_plus"));
        course_plus->setGeometry(QRect(680, 20, 31, 30));
        student_plus = new QPushButton(course_1);
        student_plus->setObjectName(QString::fromUtf8("student_plus"));
        student_plus->setGeometry(QRect(740, 20, 31, 30));
        back_label = new QLabel(course_1);
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

        retranslateUi(course_1);

        QMetaObject::connectSlotsByName(course_1);
    } // setupUi

    void retranslateUi(QDialog *course_1)
    {
        course_1->setWindowTitle(QCoreApplication::translate("course_1", "Dialog", nullptr));
        Add_Pushbutton->setText(QCoreApplication::translate("course_1", "Add new Course", nullptr));
        back_pushbutton->setText(QString());
        loadData->setText(QCoreApplication::translate("course_1", "Load data", nullptr));
        label->setText(QCoreApplication::translate("course_1", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("course_1", "TextLabel", nullptr));
        course->setText(QString());
        home->setText(QString());
        stu->setText(QString());
        course_plus->setText(QString());
        student_plus->setText(QString());
        back_label->setText(QCoreApplication::translate("course_1", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class course_1: public Ui_course_1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COURSE_1_H
