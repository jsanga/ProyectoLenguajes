/********************************************************************************
** Form generated from reading UI file 'tablero.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLERO_H
#define UI_TABLERO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tablero
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Tablero)
    {
        if (Tablero->objectName().isEmpty())
            Tablero->setObjectName(QStringLiteral("Tablero"));
        Tablero->resize(800, 600);
        menubar = new QMenuBar(Tablero);
        menubar->setObjectName(QStringLiteral("menubar"));
        Tablero->setMenuBar(menubar);
        centralwidget = new QWidget(Tablero);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        Tablero->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Tablero);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Tablero->setStatusBar(statusbar);

        retranslateUi(Tablero);

        QMetaObject::connectSlotsByName(Tablero);
    } // setupUi

    void retranslateUi(QMainWindow *Tablero)
    {
        Tablero->setWindowTitle(QApplication::translate("Tablero", "MainWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class Tablero: public Ui_Tablero {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLERO_H
