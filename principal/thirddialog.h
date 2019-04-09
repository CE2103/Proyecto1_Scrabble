//
// Created by angelortizv on 03/04/19.
//

#ifndef PROYECTO1_SCRABBLE_THIRDDIALOG_H
#define PROYECTO1_SCRABBLE_THIRDDIALOG_H


#include <QDialog>
#include <iostream>
#include <communication/socketClient.h>

using namespace std;

namespace Ui {
    class ThirdDialog;
}

class ThirdDialog : public QDialog
{
Q_OBJECT

public:
    explicit ThirdDialog(QWidget *parent = 0);
    ~ThirdDialog();



private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();
    void printMensaje(QString msn);
    void sendMensaje();


private:
    Ui::ThirdDialog *ui;
    SocketCliente *conexion;

};

#endif //PROYECTO1_SCRABBLE_THIRDDIALOG_H
