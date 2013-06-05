/********************************************************************************
** Form generated from reading UI file 'elegirnum.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELEGIRNUM_H
#define UI_ELEGIRNUM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_ElegirNum
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ElegirNum)
    {
        if (ElegirNum->objectName().isEmpty())
            ElegirNum->setObjectName(QStringLiteral("ElegirNum"));
        ElegirNum->resize(400, 300);
        ElegirNum->setStyleSheet(QStringLiteral("background-image: url(:/new2/prefix2/Decision.png);"));
        buttonBox = new QDialogButtonBox(ElegirNum);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(ElegirNum);
        QObject::connect(buttonBox, SIGNAL(accepted()), ElegirNum, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ElegirNum, SLOT(reject()));

        QMetaObject::connectSlotsByName(ElegirNum);
    } // setupUi

    void retranslateUi(QDialog *ElegirNum)
    {
        ElegirNum->setWindowTitle(QApplication::translate("ElegirNum", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class ElegirNum: public Ui_ElegirNum {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELEGIRNUM_H
