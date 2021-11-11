#include "course_1.h"
#include "course_2.h"
#include "stu_1.h"
#include "stu_2.h"
#include "ui_stu_1.h"
#include <QtSql>
#include <string>

stu_1::stu_1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::stu_1)
{
    ui->setupUi(this);
    QPixmap pix_back("C:/Users/zzung/Desktop/week11_project/icons/Home.png");              //background image, change image address
    ui->back_label_1->setPixmap(pix_back.scaled(800,800));//set background image size, whole screen size

    QPixmap course("C:/Users/zzung/Desktop/week11_project/icons/icon_Courses.png");   // First image of topright buttons, change image address
    QIcon ButtonIcon_N_1(course);
    ui->course->setIcon(ButtonIcon_N_1);
    ui->course->setIconSize(QSize(31, 31));
    QPixmap course_plus("C:/Users/zzung/Desktop/week11_project/icons/icon_plus_Courses.png");   // Second image of topright buttons, change image address
    QIcon ButtonIcon_N_2(course_plus);
    ui->course_plus->setIcon(ButtonIcon_N_2);
    ui->course_plus->setIconSize(QSize(31, 31));
    QPixmap stu("C:/Users/zzung/Desktop/week11_project/icons/icon_gray_student.png");     // Third image of topright buttons, change image address
    QIcon ButtonIcon_N_3(stu);
    ui->stu->setIcon(ButtonIcon_N_3);
    ui->stu->setIconSize(QSize(31, 31));
    QPixmap student_plus("C:/Users/zzung/Desktop/week11_project/icons/icon_plus_Students.png");   // Fourth image of topright buttons, change image address
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


    mydb2 = QSqlDatabase::addDatabase("QSQLITE");  //code that loading sql based database
    mydb2.setDatabaseName("C:/Users/zzung/Desktop/week11_project/student_db.db");   // load student_db database that we included, change address
    if(!mydb2.open()){
        ui->label->setText("Failed to open the db");
    }else
        ui->label->setText("Connected...");
    mydb2.open();
    model = new QSqlTableModel(this);//To visulize the database, make TableView table first
    model->setTable("student_db");//set table's data student_db
    ui->tableView->setModel(model);//Get database into table
}

stu_1::~stu_1()
{
    delete ui;
}


void stu_1::on_Add_Pushbutton_clicked()//Add new students button. Go to the student add page(stu_2.ui)
{
    hide();
    stu_2 course;
    course.setModal(true);
    course.exec();
}


void stu_1::on_loadData_clicked()//Load data button, you can see the students' info by clicking this button
{
   model->select();
}


void stu_1::on_back_pushbutton_clicked()//Button of bottom right. Go to the previous page
{
    //pro2 = new QMainWindow(this);
    //pro2->show();
    hide();
    //QMainWindow pro2;
    //`pro2.setModal(true);
    //pro2.isVisible(true);
}




//Navigation
void stu_1::on_home_clicked()//home button of topleft. Go to the start page
{
    hide();
}
void stu_1::on_course_clicked()//First button of topright. Go to the course page(stu_1.ui)
{
    hide();
    course_1 course_1;
    course_1.setModal(true);
    course_1.exec();
}
void stu_1::on_course_plus_clicked()//Second button of topright. Go to the course add page(course_2.ui)
{
    hide();
    course_2 course;
    course.setModal(true);
    course.exec();
}
void stu_1::on_stu_clicked()   //own ui
{

}
void stu_1::on_student_plus_clicked()//Fourth button of topright. Go to the student add page(stu3.ui)
{
    hide();
    stu_2 stu_2;
    stu_2.setModal(true);
    stu_2.exec();
}
