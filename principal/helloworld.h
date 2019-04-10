#ifndef HELLOWORLD_H
#define HELLOWORLD_H

#include <QMainWindow>
#include <QtCore>
#include <QtGui>
#include <QGraphicsScene>
#include "list.h"
#include <QLabel>
#include <iostream>
#include "nodoespecial.h"

using namespace std;

namespace Ui {
class helloworld;
}


class helloworld : public QMainWindow
{
    Q_OBJECT

public:
    explicit helloworld(QWidget *parent = nullptr);
    ~helloworld();


protected:
    void mouseMoveEvent(QMouseEvent *event) override ;
    void mousePressEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event)override;

private slots:
    void on_pedir_clicked();


    void on_Scrabble_clicked();

private:
    void onMouseEvent(const QPoint &pos);
    bool verificar(const QPoint &pos);
    string formarhorizontal ();
    string formarvertical ();
    void retroceso(string pal , bool selec);
    bool buscar (string palabra);

    Ui::helloworld *ui;
    QGraphicsScene *scene;
    QGraphicsRectItem *rec;
    List <QString> lista;
    List <QLabel*> lislabel;
    List <QLabel*> lislabelbloq;
    QLabel *temp;
    bool condi=true;

    List <List<nodoespecial*>> matriz;
    List <nodoespecial*> celdasbloq;
    List <List<QGraphicsRectItem*>> celdas;


    int posL;
    int posMColum;
    int posMFila;
    int clonposMColum;
    int clonposMFila;
    int xinicial;
    int yinicial;
    int xfinal;
    int yfinal;
    int xm;
    int ym;
};


#endif // HELLOWORLD_H
