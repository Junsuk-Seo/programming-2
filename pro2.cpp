#include "pro2.h"
#include "ui_pro2.h"
#include "secdialog.h"
#include "course3.h"
#include "stu_1.h"
#include "stu_3.h"
#include <QtSql>
#include <QPixmap>

pro2::pro2(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::pro2)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/zzung/Desktop/week11_project/icons/Home.png");               // change image address
    ui->back_label->setPixmap(pix.scaled(800,800));

    QPixmap pixmap("C:/Users/zzung/Desktop/week11_project/icons/icon_Courses.png");   // change image address
    QIcon ButtonIcon(pixmap);
    ui->pushButton->setIcon(ButtonIcon);
    ui->pushButton->setIconSize(QSize(155, 155));

    QPixmap pixmap2("C:/Users/zzung/Desktop/week11_project/icons/icon_Students.png");   // change image address
    QIcon ButtonIcon_2(pixmap2);
    ui->pushButton_2->setIcon(ButtonIcon_2);
    ui->pushButton_2->setIconSize(QSize(155, 155));

    //Navigation
    QPixmap course("C:/Users/zzung/Desktop/week11_project/icons/icon_Courses.png");   // change image address
    QIcon ButtonIcon_N_1(course);
    ui->course->setIcon(ButtonIcon_N_1);
    ui->course->setIconSize(QSize(31, 31));
    QPixmap course_plus("C:/Users/zzung/Desktop/week11_project/icons/icon_plus_Courses.png");   // change image address
    QIcon ButtonIcon_N_2(course_plus);
    ui->course_plus->setIcon(ButtonIcon_N_2);
    ui->course_plus->setIconSize(QSize(31, 31));
    QPixmap stu("C:/Users/zzung/Desktop/week11_project/icons/icon_Students.png");     // change image address
    QIcon ButtonIcon_N_3(stu);
    ui->stu->setIcon(ButtonIcon_N_3);
    ui->stu->setIconSize(QSize(31, 31));
    QPixmap student_plus("C:/Users/zzung/Desktop/week11_project/icons/icon_plus_Students.png");   // change image address
    QIcon ButtonIcon_N_4(student_plus);
    ui->student_plus->setIcon(ButtonIcon_N_4);
    ui->student_plus->setIconSize(QSize(31, 31));
    QPixmap home("C:/Users/zzung/Desktop/week11_project/icons/icon_gray_Home.png");        // change image address
    QIcon ButtonIcon_N_5(home);
    ui->home->setIcon(ButtonIcon_N_5);
    ui->home->setIconSize(QSize(31, 31));

}

pro2::~pro2()
{
    delete ui;
}



void pro2::on_pushButton_clicked()
{
    //hide();
    SecDialog secDialog;
    secDialog.setModal(true);
    secDialog.exec();
}


void pro2::on_pushButton_2_clicked()
{
    //hide();
    stu_1 stu_1;
    stu_1.setModal(true);
    stu_1.exec();
    /*SecDialog2 secDialog2;
    secDialog2.setModal(true);
    secDialog2.exec();
}

//Navigation
void pro2::on_home_clicked()    //own ui
{

}
void pro2::on_course_clicked()
{
    SecDialog secDialog;
    secDialog.setModal(true);
    secDialog.exec();*/

}
void pro2::on_course_plus_clicked()
{
    //hide();
    course3 course;
    course.setModal(true);
    course.exec();
}

void pro2::on_stu_clicked()
{
    hide();
    stu_1 stu_1;
    stu_1.setModal(true);
    stu_1.exec();
}
void pro2::on_student_plus_clicked()
{
    hide();
    stu_3 stu_3;
    stu_3.setModal(true);
    stu_3.exec();
}
