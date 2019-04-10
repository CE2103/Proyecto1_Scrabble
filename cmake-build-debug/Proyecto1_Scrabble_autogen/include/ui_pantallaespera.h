/********************************************************************************
** Form generated from reading UI file 'pantallaespera.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PANTALLAESPERA_H
#define UI_PANTALLAESPERA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LobbyWindow
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_EnunciadoNumSala;
    QLabel *label_NumeroSala;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_enunciadoJ1;
    QLabel *label_NombreJ1Lobby;
    QLabel *label_EnunciadoNumSala_2;

    void setupUi(QDialog *LobbyWindow)
    {
        if (LobbyWindow->objectName().isEmpty())
            LobbyWindow->setObjectName(QStringLiteral("LobbyWindow"));
        LobbyWindow->resize(1300, 900);
        horizontalLayoutWidget = new QWidget(LobbyWindow);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(440, 130, 414, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_EnunciadoNumSala = new QLabel(horizontalLayoutWidget);
        label_EnunciadoNumSala->setObjectName(QStringLiteral("label_EnunciadoNumSala"));

        horizontalLayout->addWidget(label_EnunciadoNumSala);

        label_NumeroSala = new QLabel(horizontalLayoutWidget);
        label_NumeroSala->setObjectName(QStringLiteral("label_NumeroSala"));

        horizontalLayout->addWidget(label_NumeroSala);

        horizontalLayoutWidget_2 = new QWidget(LobbyWindow);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(400, 200, 461, 80));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(20);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_enunciadoJ1 = new QLabel(horizontalLayoutWidget_2);
        label_enunciadoJ1->setObjectName(QStringLiteral("label_enunciadoJ1"));

        horizontalLayout_2->addWidget(label_enunciadoJ1, 0, Qt::AlignVCenter);

        label_NombreJ1Lobby = new QLabel(horizontalLayoutWidget_2);
        label_NombreJ1Lobby->setObjectName(QStringLiteral("label_NombreJ1Lobby"));

        horizontalLayout_2->addWidget(label_NombreJ1Lobby, 0, Qt::AlignHCenter);

        label_NombreJ1Lobby->raise();
        label_enunciadoJ1->raise();
        label_EnunciadoNumSala_2 = new QLabel(LobbyWindow);
        label_EnunciadoNumSala_2->setObjectName(QStringLiteral("label_EnunciadoNumSala_2"));
        label_EnunciadoNumSala_2->setGeometry(QRect(390, 540, 491, 78));
        label_EnunciadoNumSala_2->setAlignment(Qt::AlignCenter);

        retranslateUi(LobbyWindow);

        QMetaObject::connectSlotsByName(LobbyWindow);
    } // setupUi

    void retranslateUi(QDialog *LobbyWindow)
    {
        LobbyWindow->setWindowTitle(QApplication::translate("LobbyWindow", "Dialog", Q_NULLPTR));
        label_EnunciadoNumSala->setText(QApplication::translate("LobbyWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:600;\">C\303\263digo de la partida: </span></p></body></html>", Q_NULLPTR));
        label_NumeroSala->setText(QApplication::translate("LobbyWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">8345uw2</span></p></body></html>", Q_NULLPTR));
        label_enunciadoJ1->setText(QApplication::translate("LobbyWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:600;\">Jugador conectado:</span></p></body></html>", Q_NULLPTR));
        label_NombreJ1Lobby->setText(QApplication::translate("LobbyWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Ricardo Artavia Solano</span></p></body></html>", Q_NULLPTR));
        label_EnunciadoNumSala_2->setText(QApplication::translate("LobbyWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">Esperando a que se conecte un adversario</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LobbyWindow: public Ui_LobbyWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PANTALLAESPERA_H
