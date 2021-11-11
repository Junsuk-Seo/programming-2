#include "course3.h"
#include "ui_course3.h"
#include "secdialog.h"
#include "stu_1.h"
#include "stu_3.h"

course3::course3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::course3)
{
    ui->setupUi(this);
    QPixmap pix_back("C:/Users/zzung/Desktop/week11_project/icons/Home.png");               // change image address
    ui->back_label->setPixmap(pix_back.scaled(800,800));

    QPixmap book("C:/Users/zzung/Desktop/week11_project/icons/icon_gray_course.png");
    ui->book->setPixmap(book.scaled(100,100));

    //Navigation
    QPixmap course("C:/Users/zzung/Desktop/week11_project/icons/icon_Courses.png");   // change image address
    QIcon ButtonIcon_N_1(course);
    ui->course->setIcon(ButtonIcon_N_1);
    ui->course->setIconSize(QSize(31, 31));
    QPixmap course_plus("C:/Users/zzung/Desktop/week11_project/icons/icon_gray_plus_Courses.png");   // change image address
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
    QPixmap home("C:/Users/zzung/Desktop/week11_project/icons/icon_Home.png");        // change image address
    QIcon ButtonIcon_N_5(home);
    ui->home->setIcon(ButtonIcon_N_5);
    ui->home->setIconSize(QSize(31, 31));



    QPixmap pixmap("C:/Users/zzung/Desktop/week11_project/icons/return.png");   // change image address
    QIcon ButtonIcon2(pixmap);
    ui->back_pushbutton->setIcon(ButtonIcon2);
    ui->back_pushbutton->setIconSize(QSize(35, 35));
}

course3::~course3()
{
    delete ui;
}

void course3::on_back_pushbutton_clicked()
{
    hide();
    SecDialog secDialog;
    secDialog.setModal(true);
    secDialog.exec();
}


//Navigation
void course3::on_home_clicked()
{
    hide();
}
void course3::on_course_clicked()
{
    hide();
    SecDialog secDialog;
    secDialog.setModal(true);
    secDialog.exec();
}
void course3::on_cousrse_plus_clicked()    //own ui
{

}
void course3::on_stu_clicked()
{
    hide();
    stu_1 stu_1;
    stu_1.setModal(true);
    stu_1.exec();
}
void course3::on_student_plus_clicked()
{
    hide();
    stu_3 stu_3;
    stu_3.setModal(true);
    stu_3.exec();
}

