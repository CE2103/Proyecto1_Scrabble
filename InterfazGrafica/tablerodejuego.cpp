#include "tablerodejuego.h"
#include "ui_tablerodejuego.h"

TableroDeJuego::TableroDeJuego(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TableroDeJuego){



    ui->setupUi(this);
}

TableroDeJuego::~TableroDeJuego()
{
    delete ui;
}



