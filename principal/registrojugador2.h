#ifndef FOURTHDIALOG_H
#define FOURTHDIALOG_H

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


    void on_continuarJugador2_clicked();

    void on_regresarJugador2_clicked();

private:
    Ui::FourthDialog *ui;
};

#endif // FOURTHDIALOG_H
