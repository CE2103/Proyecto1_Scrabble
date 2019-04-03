/********************************************************************************
** Form generated from reading UI file 'configurefile.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGUREFILE_H
#define UI_CONFIGUREFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigureFile
{
public:
    QLabel *label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;

    void setupUi(QDialog *ConfigureFile)
    {
        if (ConfigureFile->objectName().isEmpty())
            ConfigureFile->setObjectName(QStringLiteral("ConfigureFile"));
        ConfigureFile->resize(502, 531);
        label = new QLabel(ConfigureFile);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 50, 301, 71));
        verticalLayoutWidget = new QWidget(ConfigureFile);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(40, 180, 183, 74));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setPointSize(12);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QFont font1;
        font1.setPointSize(14);
        lineEdit->setFont(font1);

        verticalLayout->addWidget(lineEdit);

        verticalLayoutWidget_2 = new QWidget(ConfigureFile);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(270, 180, 191, 74));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(verticalLayoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_3);

        lineEdit_2 = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setFont(font1);

        verticalLayout_2->addWidget(lineEdit_2);

        verticalLayoutWidget_3 = new QWidget(ConfigureFile);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(170, 280, 154, 109));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(verticalLayoutWidget_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_4);

        lineEdit_3 = new QLineEdit(verticalLayoutWidget_3);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setFont(font1);

        verticalLayout_3->addWidget(lineEdit_3);

        pushButton = new QPushButton(ConfigureFile);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(170, 420, 151, 51));
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(114, 159, 207);"));

        retranslateUi(ConfigureFile);

        QMetaObject::connectSlotsByName(ConfigureFile);
    } // setupUi

    void retranslateUi(QDialog *ConfigureFile)
    {
        ConfigureFile->setWindowTitle(QApplication::translate("ConfigureFile", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("ConfigureFile", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600;\">Formulario de configuraci\303\263n</span></p><p align=\"center\"><span style=\" font-size:16pt; font-weight:600;\">del servidor</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("ConfigureFile", "Direcci\303\263n IP del servidor", Q_NULLPTR));
        label_3->setText(QApplication::translate("ConfigureFile", "Puerto del servidor", Q_NULLPTR));
        label_4->setText(QApplication::translate("ConfigureFile", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">N\303\272mero de tel\303\251fono</span></p><p align=\"center\"><span style=\" font-size:12pt;\">del experto</span></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ConfigureFile", "Confirmar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ConfigureFile: public Ui_ConfigureFile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGUREFILE_H
