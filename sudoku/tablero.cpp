#include "tablero.h"
#include "ui_tablero.h"
#include <QApplication>
#include "elegirnum.h"
#include "time.h"
#include "string.h"
#include "stdlib.h"
#include <QFile>
#include <QFileDialog>
#include <QXmlStreamWriter>

Tablero::Tablero(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Tablero)
{
    ui->setupUi(this);
    initGui();
}

Tablero::~Tablero()
{
    delete ui;
    for(int k=0;k<20;k++){
        delete numberTextEdit[k];
    }
}

void Tablero::initGui(){

    for(int k=0;k<20;k++){
        for(int i=0;i<9;i++){
       for(int j=0;j<9;j++) {
           numberTextEdit[k]=new QTextEdit("");
           ui->gridLayout->addWidget(numberTextEdit[k],i,j);
       }

    }


    }
}




void Tablero::on_pushButton_clicked()
{
    ElegirNum *w;
    w = new ElegirNum();
    w->show();
    w->activateWindow();
}


void Tablero::on_pushButton_2_clicked()
{
    QString fileName ="sudoku.xml";
    if (!fileName.isNull())
    {
        QFile file(fileName);
        if (file.open(QIODevice::WriteOnly | QIODevice::Text))
        {
            QXmlStreamWriter xmlWriter(&file);
            xmlWriter.writeStartDocument();
            xmlWriter.writeDTD("<!DOCTYPE xbel>");
            xmlWriter.writeStartElement("xbel");
            xmlWriter.writeAttribute("version", "1.0");
            xmlWriter.writeTextElement("Uri", "name", "This is Text");
            xmlWriter.writeEndDocument();
        }
    }
}

void Tablero::on_pushButton_3_clicked()
{

}
