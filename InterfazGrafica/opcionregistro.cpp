#include "ui_secdialog.h"
#include "registrojugador1.h"
#include "registrojugador2.h"
#include "opcionregistro.h"


SecDialog::SecDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecDialog)
{
    ui->setupUi(this);
}

SecDialog::~SecDialog()
{
    delete ui;
}

void SecDialog::on_NewGameB_clicked()
{
    close();
    ThirdDialog thirdDialog;
    thirdDialog.setStyleSheet("background-color: white;");
    thirdDialog.setModal(true);
    thirdDialog.exec();}


void SecDialog::on_JoinGameB_clicked()
{
    close();
    FourthDialog fourthDialog;
    fourthDialog.setStyleSheet("background-color: white;");
    fourthDialog.setModal(true);
    fourthDialog.exec();}

