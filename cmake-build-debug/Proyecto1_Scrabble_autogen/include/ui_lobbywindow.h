/********************************************************************************
** Form generated from reading UI file 'lobbywindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOBBYWINDOW_H
#define UI_LOBBYWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_LobbyWindow
{
public:

    void setupUi(QDialog *LobbyWindow)
    {
        if (LobbyWindow->objectName().isEmpty())
            LobbyWindow->setObjectName(QStringLiteral("LobbyWindow"));
        LobbyWindow->resize(1300, 900);

        retranslateUi(LobbyWindow);

        QMetaObject::connectSlotsByName(LobbyWindow);
    } // setupUi

    void retranslateUi(QDialog *LobbyWindow)
    {
        LobbyWindow->setWindowTitle(QApplication::translate("LobbyWindow", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LobbyWindow: public Ui_LobbyWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOBBYWINDOW_H
