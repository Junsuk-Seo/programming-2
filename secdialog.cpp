#include "secdialog.h"
#include "ui_secdialog.h"
#include "course3.h"
#include "stu_1.h"
#include "stu_3.h"
#include <QtSql>
#include <string>


SecDialog::SecDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecDialog)
{
    ui->setupUi(this);
    QPixmap pix_back("C:/Users/zzung/Desktop/week11_project/icons/Home.png");               // change image address
    ui->back_label->setPixmap(pix_back.scaled(800,800));

    QPixmap pixmap("C:/Users/zzung/Desktop/week11_project/icons/return.png");   // change image address
    QIcon ButtonIcon(pixmap);
    ui->back_pushbutton->setIcon(ButtonIcon);
    ui->back_pushbutton->setIconSize(QSize(35, 35));

    //Navigation
    QPixmap course("C:/Users/zzung/Desktop/week11_project/icons/icon_gray_course.png");   // change image address
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
    QPixmap home("C:/Users/zzung/Desktop/week11_project/icons/icon_Home.png");        // change image address
    QIcon ButtonIcon_N_5(home);
    ui->home->setIcon(ButtonIcon_N_5);
    ui->home->setIconSize(QSize(31, 31));


    mydb = QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("C:/Users/zzung/Desktop/week11_project/course_db.db");   // change address
    if(!mydb.open()){
        ui->label->setText("Failed to open the db");
    }else
        ui->label->setText("Connected...");
    mydb.open();
    model = new QSqlTableModel(this);
    model->setTable("course_db");
    ui->tableView->setModel(model);

}

SecDialog::~SecDialog()
{
    delete ui;
}


void SecDialog::on_Add_Pushbutton_clicked()
{
    hide();
    course3 course;
    course.setModal(true);
    course.exec();
}


void SecDialog::on_loadData_clicked()
{
   model->select();
}


void SecDialog::on_back_pushbutton_clicked()
{
    //pro2 = new QMainWindow(this);
    //pro2->show();
    hide();
    //QMainWindow pro2;
    //`pro2.setModal(true);
    //pro2.isVisible(true);
}




//Navigation
void SecDialog::on_home_clicked()
{
    hide();
}
void SecDialog::on_course_clicked()    //own ui
{

}
void SecDialog::on_course_plus_clicked()
{
    hide();
    course3 course;
    course.setModal(true);
    course.exec();
}
void SecDialog::on_stu_clicked()
{
    hide();
    stu_1 stu_1;
    stu_1.setModal(true);
    stu_1.exec();
}
void SecDialog::on_student_plus_clicked()
{
    hide();
    stu_3 stu_3;
    stu_3.setModal(true);
    stu_3.exec();
}

