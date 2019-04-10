/********************************************************************************
** Form generated from reading UI file 'registrojugador1.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTROJUGADOR1_H
#define UI_REGISTROJUGADOR1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ThirdDialog
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_nombreJ1;
    QLineEdit *NombreJugador1;
    QPushButton *continuarJ1;
    QPushButton *regresarJ1;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_ip;
    QLineEdit *IPservidor;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_puerto;
    QComboBox *PuertoServidor;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_telefono;
    QLineEdit *TelefonoExperto;

    void setupUi(QDialog *ThirdDialog)
    {
        if (ThirdDialog->objectName().isEmpty())
            ThirdDialog->setObjectName(QStringLiteral("ThirdDialog"));
        ThirdDialog->resize(1300, 900);
        horizontalLayoutWidget = new QWidget(ThirdDialog);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(400, 80, 511, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(20);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(20, 0, 20, 0);
        label_nombreJ1 = new QLabel(horizontalLayoutWidget);
        label_nombreJ1->setObjectName(QStringLiteral("label_nombreJ1"));

        horizontalLayout->addWidget(label_nombreJ1);

        NombreJugador1 = new QLineEdit(horizontalLayoutWidget);
        NombreJugador1->setObjectName(QStringLiteral("NombreJugador1"));
        QFont font;
        font.setPointSize(14);
        NombreJugador1->setFont(font);
        NombreJugador1->setAlignment(Qt::AlignCenter);
        NombreJugador1->setClearButtonEnabled(true);

        horizontalLayout->addWidget(NombreJugador1);

        continuarJ1 = new QPushButton(ThirdDialog);
        continuarJ1->setObjectName(QStringLiteral("continuarJ1"));
        continuarJ1->setGeometry(QRect(740, 540, 141, 51));
        continuarJ1->setStyleSheet(QLatin1String("background-color: rgb(252, 233, 79);\n"
"\n"
""));
        regresarJ1 = new QPushButton(ThirdDialog);
        regresarJ1->setObjectName(QStringLiteral("regresarJ1"));
        regresarJ1->setGeometry(QRect(430, 540, 141, 51));
        regresarJ1->setStyleSheet(QLatin1String("background-color: rgb(252, 233, 79);\n"
""));
        horizontalLayoutWidget_2 = new QWidget(ThirdDialog);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(400, 170, 511, 80));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(20);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(20, 0, 20, 0);
        label_ip = new QLabel(horizontalLayoutWidget_2);
        label_ip->setObjectName(QStringLiteral("label_ip"));

        horizontalLayout_2->addWidget(label_ip);

        IPservidor = new QLineEdit(horizontalLayoutWidget_2);
        IPservidor->setObjectName(QStringLiteral("IPservidor"));
        IPservidor->setFont(font);
        IPservidor->setAlignment(Qt::AlignCenter);
        IPservidor->setClearButtonEnabled(true);

        horizontalLayout_2->addWidget(IPservidor);

        horizontalLayoutWidget_3 = new QWidget(ThirdDialog);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(400, 260, 511, 80));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(20, 0, 20, 0);
        label_puerto = new QLabel(horizontalLayoutWidget_3);
        label_puerto->setObjectName(QStringLiteral("label_puerto"));

        horizontalLayout_3->addWidget(label_puerto);

        PuertoServidor = new QComboBox(horizontalLayoutWidget_3);
        PuertoServidor->setObjectName(QStringLiteral("PuertoServidor"));
        PuertoServidor->setMouseTracking(true);
        PuertoServidor->setAcceptDrops(true);
        PuertoServidor->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_3->addWidget(PuertoServidor);

        horizontalLayoutWidget_4 = new QWidget(ThirdDialog);
        horizontalLayoutWidget_4->setObjectName(QStringLiteral("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(400, 350, 511, 80));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setSpacing(60);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(20, 0, 20, 0);
        label_telefono = new QLabel(horizontalLayoutWidget_4);
        label_telefono->setObjectName(QStringLiteral("label_telefono"));

        horizontalLayout_4->addWidget(label_telefono);

        TelefonoExperto = new QLineEdit(horizontalLayoutWidget_4);
        TelefonoExperto->setObjectName(QStringLiteral("TelefonoExperto"));
        TelefonoExperto->setEnabled(true);
        TelefonoExperto->setFont(font);
        TelefonoExperto->setAlignment(Qt::AlignCenter);
        TelefonoExperto->setClearButtonEnabled(true);

        horizontalLayout_4->addWidget(TelefonoExperto);


        retranslateUi(ThirdDialog);

        QMetaObject::connectSlotsByName(ThirdDialog);
    } // setupUi

    void retranslateUi(QDialog *ThirdDialog)
    {
        ThirdDialog->setWindowTitle(QApplication::translate("ThirdDialog", "Dialog", Q_NULLPTR));
        label_nombreJ1->setText(QApplication::translate("ThirdDialog", "<html><head/><body><p><span style=\" font-size:14pt;\">Escriba su nombre</span></p></body></html>", Q_NULLPTR));
        continuarJ1->setText(QApplication::translate("ThirdDialog", "Continuar", Q_NULLPTR));
        regresarJ1->setText(QApplication::translate("ThirdDialog", "Regresar", Q_NULLPTR));
        label_ip->setText(QApplication::translate("ThirdDialog", "<html><head/><body><p><span style=\" font-size:14pt;\">Direcci\303\263n IP del Servidor</span></p></body></html>", Q_NULLPTR));
        label_puerto->setText(QApplication::translate("ThirdDialog", "<html><head/><body><p><span style=\" font-size:14pt;\">Puerto del Servidor</span></p></body></html>", Q_NULLPTR));
        label_telefono->setText(QApplication::translate("ThirdDialog", "<html><head/><body><p><span style=\" font-size:14pt;\">Tel\303\251fono del Experto</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ThirdDialog: public Ui_ThirdDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTROJUGADOR1_H
