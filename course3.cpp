#include "course3.h"
#include "ui_course3.h"

course3::course3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::course3)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/zzung/Desktop/P_II/course3.png");               // change image address
    ui->back_label->setPixmap(pix.scaled(800,800,Qt::KeepAspectRatio));

    QPixmap book("C:/Users/zzung/Desktop/P_II/icon_gray_course.png");
    ui->book->setPixmap(book.scaled(100,100,Qt::KeepAspectRatio));

    QPixmap course("C:/Users/zzung/Desktop/P_II/icon_Students.png");   // change image address
    QIcon ButtonIcon(course);
    ui->course->setIcon(ButtonIcon);
    ui->course->setIconSize(QSize(31, 31));

    QPixmap stu("C:/Users/zzung/Desktop/P_II/icon_Courses.png");   // change image address
    QIcon ButtonIcon_2(stu);
    ui->stu->setIcon(ButtonIcon_2);
    ui->stu->setIconSize(QSize(31, 31));
}

course3::~course3()
{
    delete ui;
}
