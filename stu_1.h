#ifndef STU_1_H
#define STU_1_H

#include <QDialog>

namespace Ui {
class stu_1;
}

class stu_1 : public QDialog
{
    Q_OBJECT

public:
    explicit stu_1(QWidget *parent = nullptr);
    ~stu_1();

private:
    Ui::stu_1 *ui;
};

#endif // STU_1_H
