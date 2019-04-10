#include "ui_mainwindow.h"
#include "opcionregistro.h"
#include "mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow){



    ui->setupUi(this);

    QPixmap imagenLogo("/home/ricardo/Documents/TEC/InterfazGrafica/logo.png");
    ui->label->setPixmap(imagenLogo);

}

MainWindow::~MainWindow()
{
    delete ui;
}






void MainWindow::on_StartButton_clicked()
{
    close();
    SecDialog secDialog;
    secDialog.setStyleSheet("background-color: white;");
    secDialog.setModal(true);
    secDialog.exec();}

