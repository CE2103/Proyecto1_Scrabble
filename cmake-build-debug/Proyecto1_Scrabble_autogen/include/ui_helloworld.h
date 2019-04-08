/********************************************************************************
** Form generated from reading UI file 'helloworld.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELLOWORLD_H
#define UI_HELLOWORLD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_helloworld
{
public:
    QWidget *centralWidget;
    QPushButton *pedir;
    QGraphicsView *graphicsView;
    QPushButton *Scrabble;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *helloworld)
    {
        if (helloworld->objectName().isEmpty())
            helloworld->setObjectName(QStringLiteral("helloworld"));
        helloworld->setEnabled(true);
        helloworld->resize(1000, 700);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(helloworld->sizePolicy().hasHeightForWidth());
        helloworld->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        helloworld->setFont(font);
        helloworld->setCursor(QCursor(Qt::ArrowCursor));
        helloworld->setAcceptDrops(false);
        centralWidget = new QWidget(helloworld);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pedir = new QPushButton(centralWidget);
        pedir->setObjectName(QStringLiteral("pedir"));
        pedir->setGeometry(QRect(810, 550, 181, 81));
        QFont font1;
        font1.setFamily(QStringLiteral("Century Schoolbook L"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setUnderline(false);
        font1.setWeight(75);
        font1.setStrikeOut(false);
        font1.setKerning(true);
        pedir->setFont(font1);
        pedir->setCursor(QCursor(Qt::PointingHandCursor));
#ifndef QT_NO_SHORTCUT
        pedir->setShortcut(QStringLiteral(""));
#endif // QT_NO_SHORTCUT
        pedir->setCheckable(false);
        pedir->setChecked(false);
        pedir->setAutoRepeat(false);
        pedir->setAutoExclusive(false);
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setEnabled(true);
        graphicsView->setGeometry(QRect(0, 0, 791, 641));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy1);
        Scrabble = new QPushButton(centralWidget);
        Scrabble->setObjectName(QStringLiteral("Scrabble"));
        Scrabble->setGeometry(QRect(810, 460, 181, 81));
        QFont font2;
        font2.setFamily(QStringLiteral("Century Schoolbook L"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        Scrabble->setFont(font2);
        Scrabble->setCursor(QCursor(Qt::PointingHandCursor));
        helloworld->setCentralWidget(centralWidget);
        graphicsView->raise();
        pedir->raise();
        Scrabble->raise();
        menuBar = new QMenuBar(helloworld);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1000, 22));
        helloworld->setMenuBar(menuBar);
        mainToolBar = new QToolBar(helloworld);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        helloworld->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(helloworld);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        helloworld->setStatusBar(statusBar);

        retranslateUi(helloworld);

        QMetaObject::connectSlotsByName(helloworld);
    } // setupUi

    void retranslateUi(QMainWindow *helloworld)
    {
        helloworld->setWindowTitle(QApplication::translate("helloworld", "Prueba QT", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        helloworld->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        pedir->setText(QApplication::translate("helloworld", "Pedir Fichas Joven", Q_NULLPTR));
        Scrabble->setText(QApplication::translate("helloworld", "Scrabble", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class helloworld: public Ui_helloworld {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELLOWORLD_H
