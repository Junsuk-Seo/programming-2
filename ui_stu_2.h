/********************************************************************************
** Form generated from reading UI file 'stu_2.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STU_2_H
#define UI_STU_2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>

QT_BEGIN_NAMESPACE

class Ui_stu_2
{
public:
    QLabel *back_label;
    QPushButton *course_plus;
    QListWidget *listWidget;
    QScrollBar *verticalScrollBar;
    QPushButton *stu;
    QPushButton *course;
    QPushButton *student_plus;
    QPushButton *home;

    void setupUi(QDialog *stu_2)
    {
        if (stu_2->objectName().isEmpty())
            stu_2->setObjectName(QString::fromUtf8("stu_2"));
        stu_2->resize(800, 600);
        back_label = new QLabel(stu_2);
        back_label->setObjectName(QString::fromUtf8("back_label"));
        back_label->setGeometry(QRect(0, 0, 801, 601));
        course_plus = new QPushButton(stu_2);
        course_plus->setObjectName(QString::fromUtf8("course_plus"));
        course_plus->setGeometry(QRect(670, 20, 31, 31));
        listWidget = new QListWidget(stu_2);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(80, 150, 631, 331));
        verticalScrollBar = new QScrollBar(stu_2);
        verticalScrollBar->setObjectName(QString::fromUtf8("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(850, 260, 21, 331));
        verticalScrollBar->setOrientation(Qt::Vertical);
        stu = new QPushButton(stu_2);
        stu->setObjectName(QString::fromUtf8("stu"));
        stu->setGeometry(QRect(700, 20, 31, 31));
        course = new QPushButton(stu_2);
        course->setObjectName(QString::fromUtf8("course"));
        course->setGeometry(QRect(640, 20, 31, 31));
        student_plus = new QPushButton(stu_2);
        student_plus->setObjectName(QString::fromUtf8("student_plus"));
        student_plus->setGeometry(QRect(730, 20, 31, 31));
        home = new QPushButton(stu_2);
        home->setObjectName(QString::fromUtf8("home"));
        home->setGeometry(QRect(20, 20, 31, 31));

        retranslateUi(stu_2);

        QMetaObject::connectSlotsByName(stu_2);
    } // setupUi

    void retranslateUi(QDialog *stu_2)
    {
        stu_2->setWindowTitle(QCoreApplication::translate("stu_2", "Dialog", nullptr));
        back_label->setText(QCoreApplication::translate("stu_2", "TextLabel", nullptr));
        course_plus->setText(QCoreApplication::translate("stu_2", "PushButton", nullptr));
        stu->setText(QCoreApplication::translate("stu_2", "PushButton", nullptr));
        course->setText(QCoreApplication::translate("stu_2", "PushButton", nullptr));
        student_plus->setText(QCoreApplication::translate("stu_2", "PushButton", nullptr));
        home->setText(QCoreApplication::translate("stu_2", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class stu_2: public Ui_stu_2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STU_2_H
