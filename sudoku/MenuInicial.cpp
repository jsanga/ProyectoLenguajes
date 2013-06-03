#include "MenuInicial.h"
#include "ui_MenuInicial.h"
#include "Tablero.h"


MenuInicial::MenuInicial(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MenuInicial)
{
    ui->setupUi(this);

}

MenuInicial::~MenuInicial()
{
    delete ui;
}


void MenuInicial::on_pushButton_clicked()
{
    Tablero *w;
    w = new Tablero();

    this->setVisible(false);
    w->show();
    w->activateWindow();
}
