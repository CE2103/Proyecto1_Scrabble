#ifndef THIRDDIALOG_H
#define THIRDDIALOG_H
#include <QString>

#include <QDialog>

namespace Ui {
class ThirdDialog;
}

class ThirdDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ThirdDialog(QWidget *parent = 0);
    ~ThirdDialog();


private slots:

    void on_regresarJ1_clicked();

    void on_continuarJ1_clicked();

private:
    Ui::ThirdDialog *ui;
};

#endif // THIRDDIALOG_H
