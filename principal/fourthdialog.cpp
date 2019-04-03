#include "fourthdialog.h"
#include "ui_fourthdialog.h"
#include "secdialog.h"
#include "lobbywindow.h"

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

void FourthDialog::on_pushButton_4_clicked()
{
    close();
    SecDialog secDialog;
    secDialog.setStyleSheet("background-color: white;");
    secDialog.setModal(true);
    secDialog.exec();}


void FourthDialog::on_pushButton_3_clicked()
{
    close();
    LobbyWindow lobbyWindow;
    lobbyWindow.setStyleSheet("background-color: white;");
    lobbyWindow.setModal(true);
    lobbyWindow.exec();
}
