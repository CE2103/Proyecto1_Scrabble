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
#include <string>
#include "socketclient.h"
#include "jsonComm.h"


using namespace std;



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



    QString nombre= ui->NombreJugador1->text();
    std :: string nombreju = nombre.toLocal8Bit (). constData ();
    nombreJugador1 = nombreju;

    QString nombre1= ui->IPservidor->text();
    std :: string IP = nombre1.toLocal8Bit (). constData ();
    string direccionIP =IP;

    QString nombre2= ui->TelefonoExperto->text();
    std :: string telexp = nombre2.toLocal8Bit (). constData ();
    string telefonoExperto =telexp;

    QString nombre3= ui->PuertoServidor->currentText();
    std :: string puertoserv = nombre3.toLocal8Bit (). constData ();
    string puertoServidor = puertoserv;



    string datosJugador1[4];
    datosJugador1->append(nombreJugador1);
    datosJugador1->append(direccionIP);
    datosJugador1->append(puertoServidor);
    datosJugador1->append(telefonoExperto);


    /*Socket* socketClient = &Socket::getInstance();
    jsonComm* comm = &jsonComm::getInstance();
    string word = comm->serializeCreateGame(nombreju,IP,puertoserv,1);


    socketClient->enviar(word, 8080, "192.168.43.71", true);*/

    close();

    LobbyWindow lobbyWindow;
    lobbyWindow.setStyleSheet("background-color: white;");
    lobbyWindow.setModal(true);
    lobbyWindow.exec();

}

string ThirdDialog::getNombreJugador1() const
{
    return nombreJugador1;
}

void ThirdDialog::setNombreJugador1(const string &value)
{
    nombreJugador1 = value;
}
