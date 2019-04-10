#include "ui_mainwindow.h"
#include "opcionregistro.h"
#include "mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow){



    ui->setupUi(this);



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

