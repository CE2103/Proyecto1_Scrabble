#include "thirddialog.h"
#include "ui_thirddialog.h"
#include "secdialog.h"
#include "configurefile.h"
#include "lobbywindow.h"
#include <QMessageBox>
#include <iostream>

using namespace std;

ThirdDialog::ThirdDialog(QWidget *parent) :
        QDialog(parent),
        ui(new Ui::ThirdDialog)
{
    ui->setupUi(this);
    conexion = new SocketCliente;
    if(!conexion->connectar())
        QMessageBox::critical(this,"Error","Error al conectar con el servidor",QMessageBox::Ok);

    connect(conexion,SIGNAL(NewMensaje(QString)),SLOT(printMensaje(QString)));
    connect(ui->pushButton_3,SIGNAL(clicked()),SLOT(sendMensaje()));
}

ThirdDialog::~ThirdDialog()
{
    delete ui;
}

void ThirdDialog::on_pushButton_4_clicked()
{
    close();
    SecDialog secDialog;
    secDialog.setStyleSheet("background-color: white;");
    secDialog.setModal(true);
    secDialog.exec();}


void ThirdDialog::on_pushButton_2_clicked()
{
    ConfigureFile configFile;
    configFile.setStyleSheet("background-color: white;");
    configFile.setModal(true);
    configFile.exec();
}

void ThirdDialog::on_pushButton_3_clicked()
{
//    QMessageBox::information(this, "Código de partida" , "<font size = 12 color = black >   </font> ");
//
//    close();
//    LobbyWindow lobbyWindow;
//    lobbyWindow.setStyleSheet("background-color: white;");
//    lobbyWindow.setModal(true);
//    lobbyWindow.exec();
}


void ThirdDialog::sendMensaje()
{
    conexion->setMensaje(ui->lineEdit->text().toStdString().c_str());


}

void ThirdDialog::printMensaje(QString msn)
{
//    ui->txt_log->setPlainText(msn);
}


