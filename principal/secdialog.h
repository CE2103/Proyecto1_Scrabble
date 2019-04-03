//
// Created by angelortizv on 03/04/19.
//

#ifndef PROYECTO1_SCRABBLE_SECDIALOG_H
#define PROYECTO1_SCRABBLE_SECDIALOG_H


#include <QDialog>

namespace Ui {
    class SecDialog;
}

class SecDialog : public QDialog
{
Q_OBJECT

public:
    explicit SecDialog(QWidget *parent = 0);
    ~SecDialog();

private slots:
    void on_NewGameB_clicked();

    void on_JoinGameB_clicked();

private:
    Ui::SecDialog *ui;
};


#endif //PROYECTO1_SCRABBLE_SECDIALOG_H
