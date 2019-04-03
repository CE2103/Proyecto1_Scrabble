/********************************************************************************
** Form generated from reading UI file 'secondwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDWINDOW_H
#define UI_SECONDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_secondWindow
{
public:

    void setupUi(QDialog *secondWindow)
    {
        if (secondWindow->objectName().isEmpty())
            secondWindow->setObjectName(QStringLiteral("secondWindow"));
        secondWindow->resize(1300, 900);

        retranslateUi(secondWindow);

        QMetaObject::connectSlotsByName(secondWindow);
    } // setupUi

    void retranslateUi(QDialog *secondWindow)
    {
        secondWindow->setWindowTitle(QApplication::translate("secondWindow", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class secondWindow: public Ui_secondWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWINDOW_H
