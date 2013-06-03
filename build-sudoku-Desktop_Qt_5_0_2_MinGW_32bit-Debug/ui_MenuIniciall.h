/********************************************************************************
** Form generated from reading UI file 'MenuIniciall.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUINICIALL_H
#define UI_MENUINICIALL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MenuInicial
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MenuInicial)
    {
        if (MenuInicial->objectName().isEmpty())
            MenuInicial->setObjectName(QStringLiteral("MenuInicial"));
        MenuInicial->setWindowModality(Qt::WindowModal);
        MenuInicial->resize(793, 516);
        MenuInicial->setCursor(QCursor(Qt::ArrowCursor));
        MenuInicial->setStyleSheet(QLatin1String("font: 75 16pt \"Gabriola\";\n"
"background-color: rgb(170, 170, 127);\n"
"background-image: url(:/new/prefix1/logo.png);"));
        MenuInicial->setToolButtonStyle(Qt::ToolButtonIconOnly);
        centralwidget = new QWidget(MenuInicial);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(120, 390, 91, 37));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(270, 390, 91, 37));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(420, 390, 91, 37));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(570, 390, 91, 37));
        MenuInicial->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MenuInicial);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 793, 45));
        MenuInicial->setMenuBar(menubar);
        statusbar = new QStatusBar(MenuInicial);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MenuInicial->setStatusBar(statusbar);

        retranslateUi(MenuInicial);

        QMetaObject::connectSlotsByName(MenuInicial);
    } // setupUi

    void retranslateUi(QMainWindow *MenuInicial)
    {
        MenuInicial->setWindowTitle(QApplication::translate("MenuInicial", "Men\303\272 Principal", 0));
        pushButton->setText(QApplication::translate("MenuInicial", "Jugar", 0));
        pushButton_2->setText(QApplication::translate("MenuInicial", "Instrucciones", 0));
        pushButton_3->setText(QApplication::translate("MenuInicial", "Top", 0));
        pushButton_4->setText(QApplication::translate("MenuInicial", "Salir", 0));
    } // retranslateUi

};

namespace Ui {
    class MenuInicial: public Ui_MenuInicial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUINICIALL_H
