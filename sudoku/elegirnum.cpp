#include "elegirnum.h"
#include "ui_elegirnum.h"

ElegirNum::ElegirNum(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ElegirNum)
{
    ui->setupUi(this);
}

ElegirNum::~ElegirNum()
{
    delete ui;
}
