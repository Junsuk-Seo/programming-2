#ifndef COURSE_2_H
#define COURSE_2_H

#include <QDialog>

namespace Ui {
class course_2;
}

class course_2 : public QDialog
{
    Q_OBJECT

public:
    explicit course_2(QWidget *parent = nullptr);
    ~course_2();

private slots:
    void on_back_pushbutton_clicked();

    void on_course_clicked();

    void on_stu_clicked();

    void on_home_clicked();

    void on_cousrse_plus_clicked();

    void on_home_2_clicked();

    void on_student_plus_clicked();

private:
    Ui::course_2 *ui;
};

#endif // course_2_H
