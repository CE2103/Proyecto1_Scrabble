#include "ui_registrojugador1.h"
#include "opcionregistro.h"
#include <QString>
#include "pantallaespera.h"
#include <QMessageBox>
#include <QStringList>
#include <QDebug>
#include "registrojugador1.h"

#include <QFile>
#include <QCoreApplication>
#include <QTextStream>



ThirdDialog::ThirdDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ThirdDialog)
{
    ui->setupUi(this);
    ui->PuertoServidor->addItem("8080");
    ui->PuertoServidor->addItem("8000");
    ui->PuertoServidor->addItem("8118");
    ui->PuertoServidor->addItem("9009");


}

ThirdDialog::~ThirdDialog()
{
    delete ui;
}


void ThirdDialog::on_regresarJ1_clicked()
{
    close();
    SecDialog secDialog;
    secDialog.setStyleSheet("background-color: white;");
    secDialog.setModal(true);
    secDialog.exec();}

void ThirdDialog::on_continuarJ1_clicked(){

    close();
    LobbyWindow lobbyWindow;
    lobbyWindow.setStyleSheet("background-color: white;");
    lobbyWindow.setModal(true);
    lobbyWindow.exec();

    QString nombreJugador1 = ui->NombreJugador1->text();
    QString direccionIP = ui->IPservidor->text();
    QString telefonoExperto = ui->TelefonoExperto->text();
    QString puertoServidor = ui->PuertoServidor->currentText();


    QStringList datosJugador1;
    datosJugador1.append(nombreJugador1);
    datosJugador1.append(direccionIP);
    datosJugador1.append(puertoServidor);
    datosJugador1.append(telefonoExperto);
    qDebug() << "Los datos que ingresó el jugador 1 son: "<<datosJugador1;


    //Boceto de código para crear txt
    /*QString filename = "Data.txt";
    QFile file(filename);
    if (file.open(QIODevice::ReadWrite)) {
        QTextStream stream(&file);
        stream << "something" << endl;
        }*/

  }






