/********************************************************************************
** Form generated from reading UI file 'thirddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THIRDDIALOG_H
#define UI_THIRDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ThirdDialog
{
public:
    QLabel *label;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;

    void setupUi(QDialog *ThirdDialog)
    {
        if (ThirdDialog->objectName().isEmpty())
            ThirdDialog->setObjectName(QStringLiteral("ThirdDialog"));
        ThirdDialog->resize(1300, 900);
        label = new QLabel(ThirdDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(310, 220, 201, 41));
        QFont font;
        font.setPointSize(28);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral(""));
        label->setAlignment(Qt::AlignCenter);
        horizontalLayoutWidget = new QWidget(ThirdDialog);
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
        QFont font1;
        font1.setPointSize(14);
        lineEdit->setFont(font1);
        lineEdit->setAlignment(Qt::AlignCenter);
        lineEdit->setClearButtonEnabled(true);

        horizontalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(ThirdDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(380, 360, 131, 41));
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(252, 233, 79);"));
        label_3 = new QLabel(ThirdDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(200, 500, 311, 101));
        label_3->setFont(font);
        label_3->setStyleSheet(QStringLiteral(""));
        label_3->setAlignment(Qt::AlignCenter);
        pushButton_2 = new QPushButton(ThirdDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(360, 640, 151, 41));
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QStringLiteral("background-color: rgb(252, 233, 79);"));
        pushButton_3 = new QPushButton(ThirdDialog);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(1110, 800, 141, 51));
        pushButton_3->setStyleSheet(QStringLiteral("background-color: rgb(252, 233, 79);"));
        pushButton_4 = new QPushButton(ThirdDialog);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(50, 800, 141, 51));
        pushButton_4->setStyleSheet(QStringLiteral("background-color: rgb(252, 233, 79);"));
        label_5 = new QLabel(ThirdDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(770, 300, 171, 171));
        label_5->setPixmap(QPixmap(QString::fromUtf8("../N.png")));
        label_5->setScaledContents(true);
        label_5->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(ThirdDialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(930, 450, 171, 171));
        label_6->setPixmap(QPixmap(QString::fromUtf8("../R.png")));
        label_6->setScaledContents(true);
        label_6->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(ThirdDialog);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(950, 260, 181, 181));
        label_7->setPixmap(QPixmap(QString::fromUtf8("../Z.png")));
        label_7->setScaledContents(true);
        label_7->setAlignment(Qt::AlignCenter);

        retranslateUi(ThirdDialog);

        QMetaObject::connectSlotsByName(ThirdDialog);
    } // setupUi

    void retranslateUi(QDialog *ThirdDialog)
    {
        ThirdDialog->setWindowTitle(QApplication::translate("ThirdDialog", "Dialog", nullptr));
        label->setText(QApplication::translate("ThirdDialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:26pt; font-weight:600; color:#000000;\">Registrarse</span></p><p align=\"center\"><span style=\" font-size:26pt; color:#fce94f;\"><br/></span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("ThirdDialog", "<html><head/><body><p><span style=\" font-size:14pt;\">Escriba su nombre</span></p></body></html>", nullptr));
        pushButton->setText(QApplication::translate("ThirdDialog", "Registrar", nullptr));
        label_3->setText(QApplication::translate("ThirdDialog", "<html><head/><body><p align=\"right\"><span style=\" font-size:26pt; font-weight:600;\">Configuraci\303\263n del</span></p><p align=\"right\"><span style=\" font-size:26pt; font-weight:600;\">servidor</span></p></body></html>", nullptr));
        pushButton_2->setText(QApplication::translate("ThirdDialog", "Configurar", nullptr));
        pushButton_3->setText(QApplication::translate("ThirdDialog", "Continuar", nullptr));
        pushButton_4->setText(QApplication::translate("ThirdDialog", "Anterior", nullptr));
        label_5->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ThirdDialog: public Ui_ThirdDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THIRDDIALOG_H
