#ifndef LOBBYWINDOW_H
#define LOBBYWINDOW_H

#include <QDialog>

namespace Ui {
class LobbyWindow;
}

class LobbyWindow : public QDialog
{
    Q_OBJECT

public:
    explicit LobbyWindow(QWidget *parent = 0);
    ~LobbyWindow();

private slots:

    void on_continuar_clicked();

private:
    Ui::LobbyWindow *ui;
};

#endif // LOBBYWINDOW_H
