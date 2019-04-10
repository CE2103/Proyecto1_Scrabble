#ifndef OPCIONREGISTRO_H
#define OPCIONREGISTRO_H

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

#endif // OPCIONREGISTRO_H
