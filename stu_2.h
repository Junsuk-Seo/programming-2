#ifndef STU_2_H
#define STU_2_H

#include <QDialog>

namespace Ui {
class stu_2;
}

class stu_2 : public QDialog
{
    Q_OBJECT

public:
    explicit stu_2(QWidget *parent = nullptr);
    ~stu_2();

private slots:
    void on_back_pushbutton_clicked();

    void on_course_clicked();

    void on_stu_clicked();

    void on_home_clicked();

    void on_cousrse_plus_clicked();

    void on_home_2_clicked();

    void on_student_plus_clicked();

    void on_course_plus_clicked();

private:
    Ui::stu_2 *ui;
};

#endif // stu_2_H
