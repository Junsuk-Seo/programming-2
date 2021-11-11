/********************************************************************************
** Form generated from reading UI file 'pro2.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRO2_H
#define UI_PRO2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pro2
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *back_label;
    QPushButton *course;
    QPushButton *student_plus;
    QPushButton *course_plus;
    QPushButton *home;
    QPushButton *stu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *pro2)
    {
        if (pro2->objectName().isEmpty())
            pro2->setObjectName(QString::fromUtf8("pro2"));
        pro2->resize(800, 600);
        centralwidget = new QWidget(pro2);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(170, 215, 160, 160));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(470, 215, 160, 160));
        back_label = new QLabel(centralwidget);
        back_label->setObjectName(QString::fromUtf8("back_label"));
        back_label->setGeometry(QRect(0, 0, 800, 600));
        course = new QPushButton(centralwidget);
        course->setObjectName(QString::fromUtf8("course"));
        course->setGeometry(QRect(650, 20, 31, 30));
        student_plus = new QPushButton(centralwidget);
        student_plus->setObjectName(QString::fromUtf8("student_plus"));
        student_plus->setGeometry(QRect(740, 20, 31, 30));
        course_plus = new QPushButton(centralwidget);
        course_plus->setObjectName(QString::fromUtf8("course_plus"));
        course_plus->setGeometry(QRect(680, 20, 31, 30));
        home = new QPushButton(centralwidget);
        home->setObjectName(QString::fromUtf8("home"));
        home->setGeometry(QRect(20, 20, 31, 30));
        stu = new QPushButton(centralwidget);
        stu->setObjectName(QString::fromUtf8("stu"));
        stu->setGeometry(QRect(710, 20, 31, 30));
        pro2->setCentralWidget(centralwidget);
        back_label->raise();
        pushButton->raise();
        pushButton_2->raise();
        course->raise();
        student_plus->raise();
        course_plus->raise();
        home->raise();
        stu->raise();
        statusbar = new QStatusBar(pro2);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        pro2->setStatusBar(statusbar);

        retranslateUi(pro2);

        QMetaObject::connectSlotsByName(pro2);
    } // setupUi

    void retranslateUi(QMainWindow *pro2)
    {
        pro2->setWindowTitle(QCoreApplication::translate("pro2", "pro2", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        back_label->setText(QCoreApplication::translate("pro2", "background", nullptr));
        course->setText(QString());
        student_plus->setText(QString());
        course_plus->setText(QString());
        home->setText(QString());
        stu->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class pro2: public Ui_pro2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRO2_H
