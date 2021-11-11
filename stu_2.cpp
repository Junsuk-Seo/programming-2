#include "course_1.h"
#include "course_2.h"
#include "stu_2.h"
#include "ui_stu_2.h"
#include "stu_1.h"

stu_2::stu_2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::stu_2)
{
    ui->setupUi(this);
    QPixmap pix_back("C:/Users/zzung/Desktop/week11_project/icons/Home.png");                //background image, change image address
    ui->back_label->setPixmap(pix_back.scaled(800,800));                           //set background image size, whole screen size

    QPixmap book("C:/Users/zzung/Desktop/week11_project/icons/icon_Students.png");  //Student image next to the input field, change image address
    ui->book->setPixmap(book.scaled(100,100));

    //Navigation
    QPixmap course("C:/Users/zzung/Desktop/week11_project/icons/icon_Courses.png");   // First image of topright buttons, change image address
    QIcon ButtonIcon_N_1(course);
    ui->course->setIcon(ButtonIcon_N_1);
    ui->course->setIconSize(QSize(31, 31));
    QPixmap course_plus("C:/Users/zzung/Desktop/week11_project/icons/icon_plus_Courses.png");   // Second image of topright buttons, change image address
    QIcon ButtonIcon_N_2(course_plus);
    ui->course_plus->setIcon(ButtonIcon_N_2);
    ui->course_plus->setIconSize(QSize(31, 31));
    QPixmap stu("C:/Users/zzung/Desktop/week11_project/icons/icon_Students.png");     // Third image of topright buttons, change image address
    QIcon ButtonIcon_N_3(stu);
    ui->stu->setIcon(ButtonIcon_N_3);
    ui->stu->setIconSize(QSize(31, 31));
    QPixmap student_plus("C:/Users/zzung/Desktop/week11_project/icons/icon_gray_plus_Students.png");   // Fourth image of topright buttons, change image address
    QIcon ButtonIcon_N_4(student_plus);
    ui->student_plus->setIcon(ButtonIcon_N_4);
    ui->student_plus->setIconSize(QSize(31, 31));
    QPixmap home("C:/Users/zzung/Desktop/week11_project/icons/icon_Home.png");        // Home button image of topleft button, change image address
    QIcon ButtonIcon_N_5(home);
    ui->home->setIcon(ButtonIcon_N_5);
    ui->home->setIconSize(QSize(31, 31));

    QPixmap pixmap("C:/Users/zzung/Desktop/week11_project/icons/return.png");   // Undo image of bottomright button, change image address
    QIcon ButtonIcon2(pixmap);
    ui->back_pushbutton->setIcon(ButtonIcon2);
    ui->back_pushbutton->setIconSize(QSize(35, 35));
}

stu_2::~stu_2()
{
    delete ui;
}

void stu_2::on_back_pushbutton_clicked()//Button of bottom right. Go to the previous page
{
    hide();
    stu_1 stu_1;
    stu_1.setModal(true);
    stu_1.exec();
}


//Navigation
void stu_2::on_home_clicked()//home button of topleft. Go to the start page
{
    hide();
}
void stu_2::on_course_clicked()//First button of topright. Go to the course page(course_1.ui)
{
    hide();
    course_1 course_1;
    course_1.setModal(true);
    course_1.exec();
}
void stu_2::on_course_plus_clicked() //Second button of topright. Go to the course add page(course3.ui)
{
    hide();
    course_2 course;
    course.setModal(true);
    course.exec();
}
void stu_2::on_stu_clicked()//Third button of topright. Go to the student page(stu1.ui)
{
    hide();
    stu_1 stu_1;
    stu_1.setModal(true);
    stu_1.exec();
}
void stu_2::on_student_plus_clicked()  //own ui
{
    hide();
    stu_2 stu_2;
    stu_2.setModal(true);
    stu_2.exec();
}

