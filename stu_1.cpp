#include "stu_1.h"
#include "ui_stu_1.h"

stu_1::stu_1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::stu_1)
{
    ui->setupUi(this);
}

stu_1::~stu_1()
{
    delete ui;
}
