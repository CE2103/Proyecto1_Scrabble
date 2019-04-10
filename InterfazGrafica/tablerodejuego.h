#ifndef TABLERODEJUEGO_H
#define TABLERODEJUEGO_H

#include <QDialog>

namespace Ui {
class TableroDeJuego;
}

class TableroDeJuego : public QDialog
{
    Q_OBJECT

public:
    explicit TableroDeJuego(QWidget *parent = 0);
    ~TableroDeJuego();

private slots:

private:
    Ui::TableroDeJuego *ui;
};

#endif // TABLERODEJUEGO_H
