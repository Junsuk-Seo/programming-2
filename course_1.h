#ifndef COURSE_1_H
#define COURSE_1_H
#include <QtSql>
#include <QDialog>
#include "pro2.h"

namespace Ui {
class course_1;
}

class course_1 : public QDialog
{
    Q_OBJECT



public:
    explicit course_1(QWidget *parent = nullptr);
    ~course_1();

private slots:


    void on_Add_Pushbutton_clicked();

    void on_loadData_clicked();

    void on_back_pushbutton_clicked();

    void on_course_clicked();

    void on_home_clicked();

    void on_stu_clicked();

    void on_course_plus_clicked();

    void on_home_2_clicked();

    void on_student_plus_clicked();

private:
    Ui::course_1 *ui;
    QSqlDatabase mydb;
    QSqlTableModel *model;
    //QMainWindow *pro2;
};

#endif // course_1_H
