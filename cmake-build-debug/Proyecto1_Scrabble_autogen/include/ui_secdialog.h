/********************************************************************************
** Form generated from reading UI file 'secdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECDIALOG_H
#define UI_SECDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SecDialog
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *NewGameB;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *JoinGameB;
    QLabel *WelcomeLabel;

    void setupUi(QDialog *SecDialog)
    {
        if (SecDialog->objectName().isEmpty())
            SecDialog->setObjectName(QStringLiteral("SecDialog"));
        SecDialog->resize(1300, 900);
        horizontalLayoutWidget = new QWidget(SecDialog);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 480, 651, 102));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(150, 0, 110, 0);
        NewGameB = new QPushButton(horizontalLayoutWidget);
        NewGameB->setObjectName(QStringLiteral("NewGameB"));
        NewGameB->setMinimumSize(QSize(300, 100));
        QFont font;
        font.setPointSize(18);
        NewGameB->setFont(font);
        NewGameB->setStyleSheet(QLatin1String("background-color: rgb(237, 212, 0);\n"
"                            "));

        horizontalLayout->addWidget(NewGameB);

        horizontalLayoutWidget_3 = new QWidget(SecDialog);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(650, 480, 651, 102));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(110, 0, 150, 0);
        JoinGameB = new QPushButton(horizontalLayoutWidget_3);
        JoinGameB->setObjectName(QStringLiteral("JoinGameB"));
        JoinGameB->setMinimumSize(QSize(300, 100));
        JoinGameB->setFont(font);
        JoinGameB->setStyleSheet(QStringLiteral("background-color: rgb(237, 212, 0);"));

        horizontalLayout_3->addWidget(JoinGameB);

        WelcomeLabel = new QLabel(SecDialog);
        WelcomeLabel->setObjectName(QStringLiteral("WelcomeLabel"));
        WelcomeLabel->setGeometry(QRect(250, 240, 801, 141));

        retranslateUi(SecDialog);

        QMetaObject::connectSlotsByName(SecDialog);
    } // setupUi

    void retranslateUi(QDialog *SecDialog)
    {
        SecDialog->setWindowTitle(QApplication::translate("SecDialog", "Dialog", Q_NULLPTR));
        NewGameB->setText(QApplication::translate("SecDialog", "Juego Nuevo", Q_NULLPTR));
        JoinGameB->setText(QApplication::translate("SecDialog", "Unirse a un juego existente", Q_NULLPTR));
        WelcomeLabel->setText(QApplication::translate("SecDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"                    <html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"                    p, li { white-space: pre-wrap; }\n"
"                    </style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"                    <p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:36pt; font-weight:600;\">\302\241Bienvenido a Scrabble!</span></p>\n"
"                    <p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt;\">Eliga una de las opciones para continuar</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SecDialog: public Ui_SecDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECDIALOG_H
