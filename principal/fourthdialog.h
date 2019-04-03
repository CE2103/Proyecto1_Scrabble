//
// Created by angelortizv on 03/04/19.
//

#ifndef PROYECTO1_SCRABBLE_FOURTHDIALOG_H
#define PROYECTO1_SCRABBLE_FOURTHDIALOG_H

#include <QDialog>

namespace Ui {
    class FourthDialog;
}

class FourthDialog : public QDialog
{
Q_OBJECT

public:
    explicit FourthDialog(QWidget *parent = 0);
    ~FourthDialog();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::FourthDialog *ui;
};

#endif //PROYECTO1_SCRABBLE_FOURTHDIALOG_H
