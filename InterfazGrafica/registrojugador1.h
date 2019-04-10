#ifndef THIRDDIALOG_H
#define THIRDDIALOG_H
#include <QString>
#include <string>

#include <QDialog>

using namespace std;

namespace Ui {
class ThirdDialog;
}

class ThirdDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ThirdDialog(QWidget *parent = 0);
    ~ThirdDialog();


    string getNombreJugador1() const;
    void setNombreJugador1(const string &value);

private slots:

    void on_regresarJ1_clicked();

    void on_continuarJ1_clicked();

private:
    Ui::ThirdDialog *ui;
    string nombreJugador1;
};

#endif // THIRDDIALOG_H
