#include "secdialog.h"
#include "secdialog2.h"
#include "ui_secdialog2.h"
#include "course3.h"
#include "stu_1.h"
#include "stu_2.h"
#include "stu_3.h"

SecDialog2::SecDialog2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecDialog2)
{
    ui->setupUi(this);

    QPixmap pix_back("C:/Users/zzung/Desktop/week11_project/icons/Home.png");               // change image address
    ui->back_label->setPixmap(pix_back.scaled(800,800));

    //Navigation
    QPixmap course("C:/Users/zzung/Desktop/week11_project/icons/icon_Courses.png");   // change image address
    QIcon ButtonIcon_N_1(course);
    ui->course->setIcon(ButtonIcon_N_1);
    ui->course->setIconSize(QSize(31, 31));
    QPixmap course_plus("C:/Users/zzung/Desktop/week11_project/icons/icon_plus_Courses.png");   // change image address
    QIcon ButtonIcon_N_2(course_plus);
    ui->course_plus->setIcon(ButtonIcon_N_2);
    ui->course_plus->setIconSize(QSize(31, 31));
    QPixmap stu("C:/Users/zzung/Desktop/week11_project/icons/icon_gray_student.png");     // change image address
    QIcon ButtonIcon_N_3(stu);
    ui->stu->setIcon(ButtonIcon_N_3);
    ui->stu->setIconSize(QSize(31, 31));
    QPixmap student_plus("C:/Users/zzung/Desktop/week11_project/icons/icon_plus_Students.png");   // change image address
    QIcon ButtonIcon_N_4(student_plus);
    ui->student_plus->setIcon(ButtonIcon_N_4);
    ui->student_plus->setIconSize(QSize(31, 31));
    QPixmap home("C:/Users/zzung/Desktop/week11_project/icons/icon_Home.png");        // change image address
    QIcon ButtonIcon_N_5(home);
    ui->home->setIcon(ButtonIcon_N_5);
    ui->home->setIconSize(QSize(31, 31));
}

SecDialog2::~SecDialog2()
{
    delete ui;
}

//Navigation
void SecDialog2::on_home_clicked()
{
    hide();
}
void SecDialog2::on_course_clicked()
{
    hide();
    SecDialog secDialog;
    secDialog.setModal(true);
    secDialog.exec();
}
void SecDialog2::on_course_plus_clicked()
{
    hide();
    course3 course;
    course.setModal(true);
    course.exec();
}
void SecDialog2::on_stu_clicked()    //own ui
{
    hide();
    stu_1 stu_1;
    stu_1.setModal(true);
    stu_1.exec();
}
void SecDialog2::on_student_plus_clicked()
{
    hide();
    stu_3 stu_3;
    stu_3.setModal(true);
    stu_3.exec();
}

