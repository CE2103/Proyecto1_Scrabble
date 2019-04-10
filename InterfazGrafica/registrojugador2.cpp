#include "ui_registrojugador2.h"
#include "opcionregistro.h"
#include "pantallaespera.h"
#include <QMessageBox>
#include <QStringList>
#include <QDebug>
#include <QString>
#include "registrojugador2.h"
#include "tablerodejuego.h"
#include <helloworld.h>


FourthDialog::FourthDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FourthDialog)
{
    ui->setupUi(this);
}

FourthDialog::~FourthDialog()
{
    delete ui;
}


void FourthDialog::on_continuarJugador2_clicked()
{

    //TableroDeJuego tableroDeJuego;
    //tableroDeJuego.setStyleSheet("background-color: white;");
    //tableroDeJuego.setModal(true);
    //tableroDeJuego.exec();

    QString nombreJugador2 = ui->nombreJugador2->text();


    QStringList datosJugador2;
    datosJugador2.append(nombreJugador2);

    close();
    helloworld w;
    w.setModal(true);
    w.exec();

}


void FourthDialog::on_regresarJugador2_clicked()
{
    close();
    SecDialog secDialog;
    secDialog.setStyleSheet("background-color: white;");
    secDialog.setModal(true);
    secDialog.exec();

}
