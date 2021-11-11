/********************************************************************************
** Form generated from reading UI file 'course3.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COURSE3_H
#define UI_COURSE3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_course3
{
public:
    QLabel *course3_title;
    QPushButton *pushButton;
    QLabel *book;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *course;
    QPushButton *stu;
    QPushButton *back_pushbutton;
    QPushButton *home;
    QPushButton *student_plus;
    QPushButton *course_plus;
    QLabel *back_label;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;

    void setupUi(QDialog *course3)
    {
        if (course3->objectName().isEmpty())
            course3->setObjectName(QString::fromUtf8("course3"));
        course3->resize(800, 600);
        course3_title = new QLabel(course3);
        course3_title->setObjectName(QString::fromUtf8("course3_title"));
        course3_title->setGeometry(QRect(175, 87, 471, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(15);
        font.setBold(true);
        font.setStrikeOut(false);
        course3_title->setFont(font);
        course3_title->setCursor(QCursor(Qt::ArrowCursor));
        course3_title->setStyleSheet(QString::fromUtf8("background-color:rgb(231, 231, 231)"));
        pushButton = new QPushButton(course3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(240, 457, 331, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(14);
        font1.setBold(true);
        pushButton->setFont(font1);
        book = new QLabel(course3);
        book->setObjectName(QString::fromUtf8("book"));
        book->setGeometry(QRect(109, 120, 120, 120));
        label = new QLabel(course3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(270, 126, 431, 20));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Times New Roman")});
        font2.setPointSize(10);
        font2.setBold(true);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_2 = new QLabel(course3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(271, 181, 431, 19));
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_3 = new QLabel(course3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(100, 248, 631, 19));
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(course3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(100, 267, 311, 20));
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(course3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(410, 267, 321, 20));
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_5->setAlignment(Qt::AlignCenter);
        course = new QPushButton(course3);
        course->setObjectName(QString::fromUtf8("course"));
        course->setGeometry(QRect(650, 20, 31, 30));
        stu = new QPushButton(course3);
        stu->setObjectName(QString::fromUtf8("stu"));
        stu->setGeometry(QRect(710, 20, 31, 30));
        back_pushbutton = new QPushButton(course3);
        back_pushbutton->setObjectName(QString::fromUtf8("back_pushbutton"));
        back_pushbutton->setGeometry(QRect(720, 470, 51, 51));
        home = new QPushButton(course3);
        home->setObjectName(QString::fromUtf8("home"));
        home->setGeometry(QRect(20, 20, 31, 30));
        student_plus = new QPushButton(course3);
        student_plus->setObjectName(QString::fromUtf8("student_plus"));
        student_plus->setGeometry(QRect(740, 20, 31, 30));
        course_plus = new QPushButton(course3);
        course_plus->setObjectName(QString::fromUtf8("course_plus"));
        course_plus->setGeometry(QRect(680, 20, 31, 30));
        back_label = new QLabel(course3);
        back_label->setObjectName(QString::fromUtf8("back_label"));
        back_label->setGeometry(QRect(0, 0, 801, 601));
        lineEdit = new QLineEdit(course3);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(270, 150, 141, 20));
        lineEdit_2 = new QLineEdit(course3);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(412, 150, 151, 20));
        lineEdit_3 = new QLineEdit(course3);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(270, 200, 141, 20));
        lineEdit_4 = new QLineEdit(course3);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(412, 200, 151, 20));
        lineEdit_5 = new QLineEdit(course3);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(562, 150, 141, 20));
        lineEdit_6 = new QLineEdit(course3);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(562, 200, 141, 20));
        lineEdit_7 = new QLineEdit(course3);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(100, 290, 311, 20));
        lineEdit_8 = new QLineEdit(course3);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(410, 290, 321, 20));
        back_label->raise();
        course3_title->raise();
        pushButton->raise();
        book->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        course->raise();
        stu->raise();
        back_pushbutton->raise();
        home->raise();
        student_plus->raise();
        course_plus->raise();
        lineEdit->raise();
        lineEdit_2->raise();
        lineEdit_3->raise();
        lineEdit_4->raise();
        lineEdit_5->raise();
        lineEdit_6->raise();
        lineEdit_7->raise();
        lineEdit_8->raise();

        retranslateUi(course3);

        QMetaObject::connectSlotsByName(course3);
    } // setupUi

    void retranslateUi(QDialog *course3)
    {
        course3->setWindowTitle(QCoreApplication::translate("course3", "Dialog", nullptr));
        course3_title->setText(QCoreApplication::translate("course3", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">Add New Course</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("course3", "SAVE", nullptr));
        book->setText(QCoreApplication::translate("course3", "book", nullptr));
        label->setText(QCoreApplication::translate("course3", "           Course name                             Code                                    Major          ", nullptr));
        label_2->setText(QCoreApplication::translate("course3", "               Prof.                                      Credit                                    Limit", nullptr));
        label_3->setText(QCoreApplication::translate("course3", "Syllabus", nullptr));
        label_4->setText(QCoreApplication::translate("course3", "Course Objective ", nullptr));
        label_5->setText(QCoreApplication::translate("course3", "Course Management", nullptr));
        course->setText(QString());
        stu->setText(QString());
        back_pushbutton->setText(QString());
        home->setText(QString());
        student_plus->setText(QString());
        course_plus->setText(QString());
        back_label->setText(QCoreApplication::translate("course3", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class course3: public Ui_course3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COURSE3_H
