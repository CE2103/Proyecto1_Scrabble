/********************************************************************************
** Form generated from reading UI file 'tablerodejuego.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLERODEJUEGO_H
#define UI_TABLERODEJUEGO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_TableroDeJuego
{
public:

    void setupUi(QDialog *TableroDeJuego)
    {
        if (TableroDeJuego->objectName().isEmpty())
            TableroDeJuego->setObjectName(QStringLiteral("TableroDeJuego"));
        TableroDeJuego->resize(1300, 900);

        retranslateUi(TableroDeJuego);

        QMetaObject::connectSlotsByName(TableroDeJuego);
    } // setupUi

    void retranslateUi(QDialog *TableroDeJuego)
    {
        TableroDeJuego->setWindowTitle(QApplication::translate("TableroDeJuego", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TableroDeJuego: public Ui_TableroDeJuego {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLERODEJUEGO_H
