#include "gameBoard.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyle("fusion");
    helloworld w;
    w.show();

    return a.exec();
}
