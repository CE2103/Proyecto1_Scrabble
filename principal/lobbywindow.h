//
// Created by angelortizv on 03/04/19.
//

#ifndef PROYECTO1_SCRABBLE_LOBBYWINDOW_H
#define PROYECTO1_SCRABBLE_LOBBYWINDOW_H

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


private:
    Ui::LobbyWindow *ui;
};

#endif //PROYECTO1_SCRABBLE_LOBBYWINDOW_H
