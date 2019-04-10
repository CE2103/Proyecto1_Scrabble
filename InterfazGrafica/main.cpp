#include "mainwindow.h"
#include <helloworld.h>
#include <QApplication>


int main(int argc, char *argv[])
{

    /*QApplication a(argc, argv);
        a.setStyle("fusion");
        helloworld w;
        w.show();*/

    QApplication a(argc, argv);
    MainWindow main_w;
    main_w.setStyleSheet("background-color: white;");
    main_w.show();

    return a.exec();
}
