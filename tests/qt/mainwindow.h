#ifndef PROYECTO1_SCRABBLE_MAINWINDOW_H
#define PROYECTO1_SCRABBLE_MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};


#endif //PROYECTO1_SCRABBLE_MAINWINDOW_H
