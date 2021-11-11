#include "course_1.h"
#include "ui_course_1.h"
#include "course_2.h"
#include "stu_1.h"
#include "stu_2.h"
#include <QtSql>
#include <string>


course_1::course_1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::course_1)
{
    ui->setupUi(this);
    QPixmap pix_back("C:/Users/zzung/Desktop/week11_project/icons/Home.png");          //background image, change image address
    ui->back_label->setPixmap(pix_back.scaled(800,800));  //set background image size, whole screen size

    QPixmap pixmap("C:/Users/zzung/Desktop/week11_project/icons/return.png");   // return image of bottomright button, change image address
    QIcon ButtonIcon(pixmap);
    ui->back_pushbutton->setIcon(ButtonIcon);
    ui->back_pushbutton->setIconSize(QSize(35, 35));

    //Navigation
    QPixmap course("C:/Users/zzung/Desktop/week11_project/icons/icon_gray_course.png");   // First image of topright buttons, change image address
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
    QPixmap home("C:/Users/zzung/Desktop/week11_project/icons/icon_Home.png");        // Home button image of topleft button, change image address
    QIcon ButtonIcon_N_5(home);
    ui->home->setIcon(ButtonIcon_N_5);
    ui->home->setIconSize(QSize(31, 31));


    mydb = QSqlDatabase::addDatabase("QSQLITE");   //code that loading sql based database
    mydb.setDatabaseName("C:/Users/zzung/Desktop/week11_project/course_db.db");   // load course_db database that we included, change address
    if(!mydb.open()){
        ui->label->setText("Failed to open the db");
    }else
        ui->label->setText("Connected...");
    mydb.open();
    model = new QSqlTableModel(this); //To visualize the database, make TableView table first
    model->setTable("course_db");  //set table's data course_db
    ui->tableView->setModel(model); //Get database into table

}

course_1::~course_1()
{
    delete ui;
}

//Add new course button. Go to the course add page(course3.ui)
void course_1::on_Add_Pushbutton_clicked()
{
    hide();
    course_2 course;
    course.setModal(true);
    course.exec();
}

//Load data button, you can see the courses' info by clicking this button
void course_1::on_loadData_clicked()
{
   model->select();
}

//Button of bottom right. Go to the previous page
void course_1::on_back_pushbutton_clicked()
{
    //pro2 = new QMainWindow(this);
    //pro2->show();
    hide();
    //QMainWindow pro2;
    //`pro2.setModal(true);
    //pro2.isVisible(true);
}




//Navigation

//home button of topleft. Go to the start page
void course_1::on_home_clicked()
{
    hide();
}
void course_1::on_course_clicked()    //own ui
{

}

//Second button of topright. Go to the course add page(course3.ui)
void course_1::on_course_plus_clicked()
{
    hide();
    course_2 course;
    course.setModal(true);
    course.exec();
}

//Third button of topright. Go to the student page(stu1.ui)
void course_1::on_stu_clicked()
{
    hide();
    stu_1 stu_1;
    stu_1.setModal(true);
    stu_1.exec();
}

//Fourth button of topright. Go to the student add page(stu3.ui)
void course_1::on_student_plus_clicked()
{
    hide();
    stu_2 stu_2;
    stu_2.setModal(true);
    stu_2.exec();
}

