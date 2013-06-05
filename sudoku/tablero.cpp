#include "tablero.h"
#include "ui_tablero.h"
#include <QApplication>
#include "elegirnum.h"
#include "time.h"
#include "string.h"
#include "stdlib.h"

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




/*#include "tablero.h"
#include "ui_tablero.h"
#include "elegirnum.h"
#include "time.h"
#include "string.h"
#include "stdlib.h"

Tablero::Tablero(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Tablero)
{
    srand(time(NULL));
    ui->setupUi(this);

    int arreglo1[8];
    int arreglo2[8];
    int arreglo3[8];
    int arreglo4[8];
    int arreglo5[8];
    int arreglo6[8];
    int arreglo7[8];
    int arreglo8[8];
    int arreglo9[8];

    for(int j=0; j<9; j++)
    {
        arreglo1[j]=j+1;
    }

    //int i=1+rand()%(11-1);
    //std::string s="" + j;

    ui->pushButton->setText("1");
    ui->pushButton_2->setText("2");
    ui->pushButton_3->setText("3");
    ui->pushButton_4->setText("4");
    ui->pushButton_5->setText("5");
    ui->pushButton_6->setText("6");
    ui->pushButton_7->setText("7");
    ui->pushButton_8->setText("8");
    ui->pushButton_9->setText("9");
    ui->pushButton_10->setText("10");
    ui->pushButton_11->setText("11");
    ui->pushButton_12->setText("12");
    ui->pushButton_13->setText("13");
    ui->pushButton_14->setText("14");
    ui->pushButton_15->setText("15");
    ui->pushButton_16->setText("16");
    ui->pushButton_17->setText("17");
    ui->pushButton_18->setText("18");
    ui->pushButton_19->setText("19");
    ui->pushButton_20->setText("20");
    ui->pushButton_21->setText("21");
    ui->pushButton_22->setText("22");
    ui->pushButton_23->setText("23");
    ui->pushButton_24->setText("24");
    ui->pushButton_25->setText("25");
    ui->pushButton_26->setText("26");
    ui->pushButton_27->setText("27");
    ui->pushButton_28->setText("28");
    ui->pushButton_29->setText("29");
    ui->pushButton_30->setText("30");
    ui->pushButton_31->setText("31");
    ui->pushButton_32->setText("32");
    ui->pushButton_33->setText("33");
    ui->pushButton_34->setText("34");
    ui->pushButton_35->setText("35");
    ui->pushButton_36->setText("36");
    ui->pushButton_37->setText("37");
    ui->pushButton_38->setText("38");
    ui->pushButton_39->setText("39");
    ui->pushButton_40->setText("40");
    ui->pushButton_41->setText("41");
    ui->pushButton_42->setText("42");
    ui->pushButton_43->setText("43");
    ui->pushButton_44->setText("44");
    ui->pushButton_45->setText("45");
    ui->pushButton_46->setText("46");
    ui->pushButton_47->setText("47");
    ui->pushButton_48->setText("48");
    ui->pushButton_49->setText("49");
    ui->pushButton_50->setText("50");
    ui->pushButton_51->setText("51");
    ui->pushButton_52->setText("52");
    ui->pushButton_53->setText("53");
    ui->pushButton_54->setText("54");
    ui->pushButton_55->setText("55");
    ui->pushButton_56->setText("56");
    ui->pushButton_57->setText("57");
    ui->pushButton_58->setText("58");
    ui->pushButton_59->setText("59");
    ui->pushButton_60->setText("60");
    ui->pushButton_61->setText("61");
    ui->pushButton_62->setText("62");
    ui->pushButton_63->setText("63");
    ui->pushButton_64->setText("64");
    ui->pushButton_65->setText("65");
    ui->pushButton_66->setText("66");
    ui->pushButton_67->setText("67");
    ui->pushButton_68->setText("68");
    ui->pushButton_69->setText("69");
    ui->pushButton_70->setText("70");
    ui->pushButton_71->setText("71");
    ui->pushButton_72->setText("72");
    ui->pushButton_73->setText("73");
    ui->pushButton_74->setText("74");
    ui->pushButton_75->setText("75");
    ui->pushButton_76->setText("76");
    ui->pushButton_77->setText("77");
    ui->pushButton_78->setText("78");
    ui->pushButton_79->setText("79");
    ui->pushButton_80->setText("80");
    ui->pushButton_81->setText("81");


}

Tablero::~Tablero()
{
    delete ui;
}

void Tablero::on_pushButton_clicked()
{
    ElegirNum *w;
    w = new ElegirNum();
    w->show();
    w->activateWindow();
}


*/
