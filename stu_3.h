#ifndef STU_3_H
#define STU_3_H

#include <QDialog>

namespace Ui {
class stu_3;
}

class stu_3 : public QDialog
{
    Q_OBJECT

public:
    explicit stu_3(QWidget *parent = nullptr);
    ~stu_3();

private slots:
    void on_back_pushbutton_clicked();

    void on_course_clicked();

    void on_stu_clicked();

    void on_home_clicked();

    void on_cousrse_plus_clicked();

    void on_home_2_clicked();

    void on_student_plus_clicked();

private:
    Ui::stu_3 *ui;
};

#endif // STU_3_H
