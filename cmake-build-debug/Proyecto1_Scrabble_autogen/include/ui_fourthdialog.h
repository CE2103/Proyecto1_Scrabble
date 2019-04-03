/********************************************************************************
** Form generated from reading UI file 'fourthdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOURTHDIALOG_H
#define UI_FOURTHDIALOG_H

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
    QLabel *label_5;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton_4;
    QLabel *label_6;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QLabel *label_7;
    QPushButton *pushButton_2;
    QLabel *label;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *lineEdit_2;

    void setupUi(QDialog *FourthDialog)
    {
        if (FourthDialog->objectName().isEmpty())
            FourthDialog->setObjectName(QStringLiteral("FourthDialog"));
        FourthDialog->resize(1300, 900);
        label_5 = new QLabel(FourthDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(770, 300, 171, 171));
        label_5->setPixmap(QPixmap(QString::fromUtf8("../N.png")));
        label_5->setScaledContents(true);
        label_5->setAlignment(Qt::AlignCenter);
        horizontalLayoutWidget = new QWidget(FourthDialog);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 280, 511, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(20);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(100, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(horizontalLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QFont font;
        font.setPointSize(14);
        lineEdit->setFont(font);
        lineEdit->setAlignment(Qt::AlignCenter);
        lineEdit->setClearButtonEnabled(true);

        horizontalLayout->addWidget(lineEdit);

        pushButton_4 = new QPushButton(FourthDialog);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(50, 800, 141, 51));
        pushButton_4->setStyleSheet(QStringLiteral("background-color: rgb(252, 233, 79);"));
        label_6 = new QLabel(FourthDialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(930, 450, 171, 171));
        label_6->setPixmap(QPixmap(QString::fromUtf8("../E.png")));
        label_6->setScaledContents(true);
        label_6->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(FourthDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(380, 360, 131, 41));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(252, 233, 79);"));
        pushButton_3 = new QPushButton(FourthDialog);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(1110, 800, 141, 51));
        pushButton_3->setStyleSheet(QStringLiteral("background-color: rgb(252, 233, 79);"));
        label_7 = new QLabel(FourthDialog);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(950, 260, 181, 181));
        label_7->setPixmap(QPixmap(QString::fromUtf8("../O.png")));
        label_7->setScaledContents(true);
        label_7->setAlignment(Qt::AlignCenter);
        pushButton_2 = new QPushButton(FourthDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(360, 600, 151, 41));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QStringLiteral("background-color: rgb(252, 233, 79);"));
        label = new QLabel(FourthDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(310, 220, 201, 41));
        QFont font1;
        font1.setPointSize(28);
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral(""));
        label->setAlignment(Qt::AlignCenter);
        horizontalLayoutWidget_2 = new QWidget(FourthDialog);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(0, 520, 511, 80));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(20);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(150, 0, 0, 0);
        label_4 = new QLabel(horizontalLayoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        lineEdit_2 = new QLineEdit(horizontalLayoutWidget_2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setFont(font);
        lineEdit_2->setAlignment(Qt::AlignCenter);
        lineEdit_2->setClearButtonEnabled(true);

        horizontalLayout_2->addWidget(lineEdit_2);


        retranslateUi(FourthDialog);

        QMetaObject::connectSlotsByName(FourthDialog);
    } // setupUi

    void retranslateUi(QDialog *FourthDialog)
    {
        FourthDialog->setWindowTitle(QApplication::translate("FourthDialog", "Dialog", Q_NULLPTR));
        label_5->setText(QString());
        label_2->setText(QApplication::translate("FourthDialog", "<html><head/><body><p><span style=\" font-size:14pt;\">Escriba su nombre</span></p></body></html>", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("FourthDialog", "Anterior", Q_NULLPTR));
        label_6->setText(QString());
        pushButton->setText(QApplication::translate("FourthDialog", "Registrar", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("FourthDialog", "Continuar", Q_NULLPTR));
        label_7->setText(QString());
        pushButton_2->setText(QApplication::translate("FourthDialog", "Unirse al juego", Q_NULLPTR));
        label->setText(QApplication::translate("FourthDialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:26pt; font-weight:600; color:#000000;\">Registrarse</span></p><p align=\"center\"><span style=\" font-size:26pt; color:#fce94f;\"><br/></span></p></body></html>", Q_NULLPTR));
        label_4->setText(QApplication::translate("FourthDialog", "<html><head/><body><p align=\"right\"><span style=\" font-size:14pt;\">Introduzca un c\303\263digo</span></p><p align=\"right\"><span style=\" font-size:14pt;\">para unirse al juego</span></p></body></html>", Q_NULLPTR));
        lineEdit_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FourthDialog: public Ui_FourthDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOURTHDIALOG_H
