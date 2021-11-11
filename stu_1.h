#ifndef STU_1_H
#define STU_1_H

#include <QtSql>
#include <QDialog>
#include "pro2.h"

namespace Ui {
class stu_1;
}

class stu_1 : public QDialog
{
    Q_OBJECT

public:
    explicit stu_1(QWidget *parent = nullptr);
    ~stu_1();

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
    Ui::stu_1 *ui;
    QSqlDatabase mydb2;
    QSqlTableModel *model;
    //QMainWindow *pro2;
};

#endif // STU_1_H
