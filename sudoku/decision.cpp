#include "decision.h"
#include "ui_decision.h"

Decision::Decision(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Decision)
{
    ui->setupUi(this);
}

Decision::~Decision()
{
    delete ui;
}
