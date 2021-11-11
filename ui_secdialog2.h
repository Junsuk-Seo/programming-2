/********************************************************************************
** Form generated from reading UI file 'secdialog2.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECDIALOG2_H
#define UI_SECDIALOG2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>

QT_BEGIN_NAMESPACE

class Ui_SecDialog2
{
public:
    QListWidget *listWidget;
    QScrollBar *verticalScrollBar;
    QPushButton *stu;
    QPushButton *home;
    QPushButton *course;
    QPushButton *student_plus;
    QPushButton *course_plus;
    QLabel *back_label;

    void setupUi(QDialog *SecDialog2)
    {
        if (SecDialog2->objectName().isEmpty())
            SecDialog2->setObjectName(QString::fromUtf8("SecDialog2"));
        SecDialog2->resize(800, 600);
        listWidget = new QListWidget(SecDialog2);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(80, 150, 631, 331));
        verticalScrollBar = new QScrollBar(SecDialog2);
        verticalScrollBar->setObjectName(QString::fromUtf8("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(850, 260, 21, 331));
        verticalScrollBar->setOrientation(Qt::Vertical);
        stu = new QPushButton(SecDialog2);
        stu->setObjectName(QString::fromUtf8("stu"));
        stu->setGeometry(QRect(700, 20, 31, 30));
        home = new QPushButton(SecDialog2);
        home->setObjectName(QString::fromUtf8("home"));
        home->setGeometry(QRect(20, 20, 31, 30));
        course = new QPushButton(SecDialog2);
        course->setObjectName(QString::fromUtf8("course"));
        course->setGeometry(QRect(640, 20, 31, 30));
        student_plus = new QPushButton(SecDialog2);
        student_plus->setObjectName(QString::fromUtf8("student_plus"));
        student_plus->setGeometry(QRect(730, 20, 31, 30));
        course_plus = new QPushButton(SecDialog2);
        course_plus->setObjectName(QString::fromUtf8("course_plus"));
        course_plus->setGeometry(QRect(670, 20, 31, 30));
        back_label = new QLabel(SecDialog2);
        back_label->setObjectName(QString::fromUtf8("back_label"));
        back_label->setGeometry(QRect(0, 1, 801, 601));
        back_label->raise();
        listWidget->raise();
        verticalScrollBar->raise();
        stu->raise();
        home->raise();
        course->raise();
        student_plus->raise();
        course_plus->raise();

        retranslateUi(SecDialog2);

        QMetaObject::connectSlotsByName(SecDialog2);
    } // setupUi

    void retranslateUi(QDialog *SecDialog2)
    {
        SecDialog2->setWindowTitle(QCoreApplication::translate("SecDialog2", "Dialog", nullptr));
        stu->setText(QString());
        home->setText(QString());
        course->setText(QString());
        student_plus->setText(QString());
        course_plus->setText(QString());
        back_label->setText(QCoreApplication::translate("SecDialog2", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecDialog2: public Ui_SecDialog2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECDIALOG2_H
