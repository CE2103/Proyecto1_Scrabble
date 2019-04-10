/********************************************************************************
** Form generated from reading UI file 'registrojugador2.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTROJUGADOR2_H
#define UI_REGISTROJUGADOR2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FourthDialog
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_nombrej2;
    QLineEdit *nombreJugador2;
    QPushButton *regresarJugador2;
    QPushButton *continuarJugador2;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_codigoj2;
    QLineEdit *codigoJuegoJ2;

    void setupUi(QDialog *FourthDialog)
    {
        if (FourthDialog->objectName().isEmpty())
            FourthDialog->setObjectName(QStringLiteral("FourthDialog"));
        FourthDialog->resize(1300, 900);
        horizontalLayoutWidget = new QWidget(FourthDialog);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(400, 330, 511, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(40);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(30, 0, 30, 0);
        label_nombrej2 = new QLabel(horizontalLayoutWidget);
        label_nombrej2->setObjectName(QStringLiteral("label_nombrej2"));

        horizontalLayout->addWidget(label_nombrej2);

        nombreJugador2 = new QLineEdit(horizontalLayoutWidget);
        nombreJugador2->setObjectName(QStringLiteral("nombreJugador2"));
        QFont font;
        font.setPointSize(14);
        nombreJugador2->setFont(font);
        nombreJugador2->setAlignment(Qt::AlignCenter);
        nombreJugador2->setClearButtonEnabled(true);

        horizontalLayout->addWidget(nombreJugador2);

        regresarJugador2 = new QPushButton(FourthDialog);
        regresarJugador2->setObjectName(QStringLiteral("regresarJugador2"));
        regresarJugador2->setGeometry(QRect(430, 510, 141, 51));
        regresarJugador2->setStyleSheet(QLatin1String("background-color: rgb(252, 233, 79);\n"
"\n"
""));
        continuarJugador2 = new QPushButton(FourthDialog);
        continuarJugador2->setObjectName(QStringLiteral("continuarJugador2"));
        continuarJugador2->setGeometry(QRect(740, 510, 141, 51));
        continuarJugador2->setStyleSheet(QLatin1String("background-color: rgb(252, 233, 79);\n"
"\n"
""));
        horizontalLayoutWidget_2 = new QWidget(FourthDialog);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(400, 240, 511, 80));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(20);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(30, 0, 30, 0);
        label_codigoj2 = new QLabel(horizontalLayoutWidget_2);
        label_codigoj2->setObjectName(QStringLiteral("label_codigoj2"));

        horizontalLayout_2->addWidget(label_codigoj2);

        codigoJuegoJ2 = new QLineEdit(horizontalLayoutWidget_2);
        codigoJuegoJ2->setObjectName(QStringLiteral("codigoJuegoJ2"));
        codigoJuegoJ2->setFont(font);
        codigoJuegoJ2->setAlignment(Qt::AlignCenter);
        codigoJuegoJ2->setClearButtonEnabled(true);

        horizontalLayout_2->addWidget(codigoJuegoJ2);


        retranslateUi(FourthDialog);

        QMetaObject::connectSlotsByName(FourthDialog);
    } // setupUi

    void retranslateUi(QDialog *FourthDialog)
    {
        FourthDialog->setWindowTitle(QApplication::translate("FourthDialog", "Dialog", Q_NULLPTR));
        label_nombrej2->setText(QApplication::translate("FourthDialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">Escriba su nombre</span></p></body></html>", Q_NULLPTR));
        regresarJugador2->setText(QApplication::translate("FourthDialog", "Regresar", Q_NULLPTR));
        continuarJugador2->setText(QApplication::translate("FourthDialog", "Continuar", Q_NULLPTR));
        label_codigoj2->setText(QApplication::translate("FourthDialog", "<html><head/><body><p><span style=\" font-size:14pt;\">Introduzca el c\303\263digo de juego</span></p></body></html>", Q_NULLPTR));
        codigoJuegoJ2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FourthDialog: public Ui_FourthDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTROJUGADOR2_H
