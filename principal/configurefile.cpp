#include "configurefile.h"
#include "ui_configurefile.h"
#include "thirddialog.h"

ConfigureFile::ConfigureFile(QWidget *parent) :
        QDialog(parent),
        ui(new Ui::ConfigureFile)
{
    ui->setupUi(this);
}

ConfigureFile::~ConfigureFile()
{
    delete ui;
}

void ConfigureFile::on_pushButton_clicked()
{
    close();

}
