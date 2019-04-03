//
// Created by angelortizv on 03/04/19.
//

#ifndef PROYECTO1_SCRABBLE_CONFIGUREFILE_H
#define PROYECTO1_SCRABBLE_CONFIGUREFILE_H

#include <QDialog>

namespace Ui {
    class ConfigureFile;
}

class ConfigureFile : public QDialog
{
Q_OBJECT

public:
    explicit ConfigureFile(QWidget *parent = 0);
    ~ConfigureFile();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ConfigureFile *ui;
};

#endif //PROYECTO1_SCRABBLE_CONFIGUREFILE_H
