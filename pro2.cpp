#include "pro2.h"
#include "ui_pro2.h"
#include "course_1.h"
#include "course_2.h"
#include "stu_1.h"
#include "stu_2.h"
#include <QtSql>
#include <QPixmap>

pro2::pro2(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::pro2)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/zzung/Desktop/week11_project/icons/Home.png");               //background image, change image address
    ui->back_label->setPixmap(pix.scaled(800,800));          //set background image size, whole screen size

    QPixmap pixmap("C:/Users/zzung/Desktop/week11_project/icons/icon_Courses.png");   // Left big button image on the center,change image address
    QIcon ButtonIcon(pixmap);
    ui->pushButton->setIcon(ButtonIcon);
    ui->pushButton->setIconSize(QSize(155, 155));

    QPixmap pixmap2("C:/Users/zzung/Desktop/week11_project/icons/icon_Students.png");   // Right big button image on the center, change image address
    QIcon ButtonIcon_2(pixmap2);
    ui->pushButton_2->setIcon(ButtonIcon_2);
    ui->pushButton_2->setIconSize(QSize(155, 155));

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
    QPixmap student_plus("C:/Users/zzung/Desktop/week11_project/icons/icon_plus_Students.png");   // Fourth image of topright buttons, change image address
    QIcon ButtonIcon_N_4(student_plus);
    ui->student_plus->setIcon(ButtonIcon_N_4);
    ui->student_plus->setIconSize(QSize(31, 31));
    QPixmap home("C:/Users/zzung/Desktop/week11_project/icons/icon_gray_Home.png");        // Home button image of topleft button, change image address
    QIcon ButtonIcon_N_5(home);
    ui->home->setIcon(ButtonIcon_N_5);
    ui->home->setIconSize(QSize(31, 31));

}

pro2::~pro2()
{
    delete ui;
}



void pro2::on_pushButton_clicked() //Left button of the center. Go to the course page(secdialog.ui)
{
    //hide();
    course_1 course_1;
    course_1.setModal(true);
    course_1.exec();
}


void pro2::on_pushButton_2_clicked() //Right button of the center. Go to the course page(stu_1.ui)
{
    //hide();
    stu_1 stu_1;
    stu_1.setModal(true);
    stu_1.exec();
}

//Navigation
void pro2::on_home_clicked()    //own ui
{

}
void pro2::on_course_clicked()  //First button of topright. Go to the course page(secdialog.ui)
{
    course_1 course_1;
    course_1.setModal(true);
    course_1.exec();

}
void pro2::on_course_plus_clicked()  //Second button of topright. Go to the course add page(course3.ui)
{
    //hide();
    course_2 course;
    course.setModal(true);
    course.exec();
}

void pro2::on_stu_clicked()  //Third button of topright. Go to the student page(stu1.ui)
{
    //hide();
    stu_1 stu_1;
    stu_1.setModal(true);
    stu_1.exec();
}
void pro2::on_student_plus_clicked()  //Fourth button of topright. Go to the student add page(stu3.ui)
{
    //hide();
    stu_2 stu_2;
    stu_2.setModal(true);
    stu_2.exec();
}
