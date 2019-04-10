#include "pantallaespera.h"
#include "ui_pantallaespera.h"
#include "pantallaespera.h"
#include <QMovie>
#include <QLabel>
#include <QFrame>



LobbyWindow::LobbyWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LobbyWindow)
{
    ui->setupUi(this);

    QLabel *gif = new QLabel(this);
    gif->setFrameStyle(QFrame::Panel | QFrame::Sunken);
    gif->setStyleSheet("border: 0px;");

    QMovie *movie = new QMovie("cargando.gif");
    gif->setMovie (movie);
    movie->start ();
    gif->setGeometry(230,295,800,300);
    gif->setAlignment(Qt::AlignCenter);
    gif->lower();

    }


LobbyWindow::~LobbyWindow()
{
    delete ui;
}


