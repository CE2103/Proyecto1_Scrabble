/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *authors;
    QPushButton *StartButton;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1300, 900);
        MainWindow->setWindowOpacity(1);
        MainWindow->setAutoFillBackground(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(300, 205, 701, 291));
        label->setMaximumSize(QSize(10000000, 16777215));
        label->setAutoFillBackground(true);
        label->setPixmap(QPixmap(QString::fromUtf8("../logo.png")));
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignCenter);
        label->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse);
        authors = new QLabel(centralWidget);
        authors->setObjectName(QStringLiteral("authors"));
        authors->setGeometry(QRect(385, 770, 531, 71));
        authors->setAlignment(Qt::AlignCenter);
        StartButton = new QPushButton(centralWidget);
        StartButton->setObjectName(QStringLiteral("StartButton"));
        StartButton->setGeometry(QRect(535, 560, 231, 51));
        QFont font;
        font.setPointSize(16);
        StartButton->setFont(font);
        StartButton->setStyleSheet(QLatin1String("background-color: rgb(237, 212, 0);\n"
""));
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Scrabble", nullptr));
        label->setText(QString());
        authors->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Creado por</p><p align=\"center\"><span style=\" font-size:12pt;\">Ricardo Artavia | Romario Ram\303\255rez | Angelo Ort\303\255z</span></p></body></html>", nullptr));
        StartButton->setText(QApplication::translate("MainWindow", "Iniciar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
