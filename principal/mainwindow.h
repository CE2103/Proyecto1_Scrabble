//
// Created by angelortizv on 03/04/19.
//

#ifndef PROYECTO1_SCRABBLE_MAINWINDOW_H
#define PROYECTO1_SCRABBLE_MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
    class MainWindow;}

class MainWindow : public QMainWindow{

Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_StartButton_clicked();


private:

    Ui::MainWindow *ui;

};

#endif //PROYECTO1_SCRABBLE_MAINWINDOW_H