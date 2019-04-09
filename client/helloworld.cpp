#include "helloworld.h"
#include "ui_helloworld.h"
#include <QMouseEvent>
#include <QMessageBox>
#include <QLabel>
#include <QMovie>
#include <iostream>
#include <QString>
#include <QGraphicsRectItem>
#include <stdlib.h>
#include "list.h"
#include "list.cpp"
#include "nodoespecial.h"





using namespace std;

helloworld::helloworld(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::helloworld)
{
    ui->setupUi(this);

    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);

    QPen redpen (Qt::red);
    redpen.setWidth(2);

    QPen yellowpen (Qt::yellow);
    yellowpen.setWidth(4);

    int x=-630;
    int y=-530;

    for (int i=0; i<15; i++){
        List <nodoespecial*> listatempnodos;
        List <QGraphicsRectItem*> listatempceldas;

        for (int j=0; j<15 ;j++){
            QGraphicsRectItem *rec = new QGraphicsRectItem(0,0,40,40);
            scene->addItem(rec);
            rec->setPos(x,y);
            rec->setPen(redpen);
            listatempceldas.add_end(rec);

            nodoespecial *nod= new nodoespecial();
            nod->setX(x+730);
            nod->setY(y+590);
            nod->setLetra("");
            nod->setEstado(false);
            nod->setUsadavertical(false);
            nod->setUsadahorizontal(false);

            listatempnodos.add_end(nod);

            x+=40;
        }
        celdas.add_end(listatempceldas);
        matriz.add_end(listatempnodos);
        y+=40;
        x=-630;

    }

    char i;

        for (i ='A' ; i <='Z' ; i++) {
            QString s=QString (i);
            lista.add_end(s);
        }

}

helloworld::~helloworld()
{
    delete ui;
}



void helloworld :: mouseMoveEvent(QMouseEvent *event){
    if (lislabel.size()>0){ // dejar hacer la accion si la lista de labels tiene elementos
        onMouseEvent( event->pos());
        temp->setMouseTracking(true);
        temp->setCursor(Qt::ClosedHandCursor);
    }
    QWidget :: mouseMoveEvent(event);
}

void helloworld :: mousePressEvent(QMouseEvent *event){
    if (lislabel.size()>0){// dejar hacer la accion si la lista de labels tiene elementos
        for(posL=0; posL<lislabel.size(); posL++){
            temp = lislabel.getbyposicion(posL); //toma el label en la posicion posl
            int lx= temp->x(); // coordenada X del label
            int ly= temp->y();// coordenada Y del label

            if ((lx < event->x()) && (lx+40 > event->x()) && (ly+15 < event->y()) &&
                    (ly+60 > event->y()) ){  // verifica si el click del mouse coicide con los coordenas de algun label
                temp->setCursor(Qt::ClosedHandCursor); // cambia el tipo de cursor
                xinicial=lx; // le asigna el valor de la cordenada X al esa variable que sera utilizada en otra funcion
                yinicial=ly;// le asigna el valor de la cordenada Y al esa variable que sera utilizada en otra funcion
                condi=false;
                break;
            }
        }
    }

    QWidget :: mousePressEvent(event);
}


void helloworld :: mouseReleaseEvent(QMouseEvent *event){
     if (condi==false && lislabel.size()>0 ) {
         if (verificar(event->pos())) {
             temp->setGeometry(xm + 5, ym - 25, 40, 40);
             temp->setCursor(Qt::ForbiddenCursor);
             lislabelbloq.add_head(temp);
             lislabel.del_by_position(posL + 1);
         } else {
             temp->setGeometry(xinicial, yinicial, 40, 40);
             temp->setCursor(Qt::OpenHandCursor);
         }
         condi = true;
     }
    QWidget :: mouseReleaseEvent(event);
}

void helloworld::onMouseEvent(const QPoint &pos){
    if (condi==false){
       temp->setGeometry(pos.x()-10,pos.y()-20,40,40);
    }
}


bool helloworld::verificar(const QPoint &pos){ // verifica si donde se coloco la label es una celda y si esta esta o no ocupada
    xfinal= pos.x()+10;
    yfinal= pos.y()+20;
    for(posMColum=0; posMColum<matriz.size(); posMColum++){

        xm= matriz.getbyposicion(0).getbyposicion(posMColum)->getX();
        if ((xm<xfinal) && (xfinal<xm+40)){ //evalua si calsa con una celda
                for(posMFila=0; posMFila<matriz.size(); posMFila++){
                    ym= matriz.getbyposicion(posMFila).getbyposicion(posMColum)->getY();

                    if ((ym<yfinal) && (yfinal<ym+40)){
                        if (celdasbloq.size()>0){ // evalua si la celda q calsa la letra ya esta ocupada
                            for (int j=0; j<celdasbloq.size(); j++){
                                if (xm==(*(celdasbloq.getbyposicion(j))).getX() && ym==(*(celdasbloq.getbyposicion(j))).getY()){
                                    return false;
                                }
                            }
                        }
                        QPen redpen (Qt::red);
                        redpen.setWidth(4);
                        celdas.getbyposicion(posMFila).getbyposicion(posMColum)->setPen(redpen);
                        matriz.getbyposicion(posMFila).getbyposicion(posMColum)->setEstado(true);
                        QString nombre= temp->objectName();
                        std :: string text = nombre.toLocal8Bit (). constData ();
                        matriz.getbyposicion(posMFila).getbyposicion(posMColum)->setLetra(text);
                        celdasbloq.add_end(matriz.getbyposicion(posMFila).getbyposicion(posMColum));
                        return true;

                        }
                    }
                return false;
                }
    }
    return false;
}


string helloworld::formarvertical() {
    clonposMColum = posMColum;
    clonposMFila = posMFila;
    string nuevovertical;
    bool moviendo= true;
    bool formar= true;

    while (moviendo){ // mueve las posiciones a uno de los posibles vertices dnd empezara la palabra vertical
        if(clonposMFila>-1 && matriz.getbyposicion(clonposMFila).getbyposicion(clonposMColum)->getEstado() &&
           (!matriz.getbyposicion(clonposMFila).getbyposicion(clonposMColum)->getUsadavertical())){

            clonposMFila--;
        }
        else{
            moviendo=false;
        }
    }
    clonposMFila+=1;
    while(formar){
        if(clonposMFila<15 && matriz.getbyposicion(clonposMFila).getbyposicion(clonposMColum)->getEstado() &&
           (!matriz.getbyposicion(clonposMFila).getbyposicion(clonposMColum)->getUsadavertical())){

            nuevovertical+=matriz.getbyposicion(clonposMFila).getbyposicion(clonposMColum)->getLetra();
            matriz.getbyposicion(clonposMFila).getbyposicion(clonposMColum)->setUsadavertical(true);
            clonposMFila++;
        }
        else{
            formar=false;
        }
    }

    clonposMFila--;

    return nuevovertical;
}


string helloworld::formarhorizontal(){
    string nuevohorizontal;
    bool moviendo= true;
    bool formar= true;


    while (moviendo){ // mueve las posiciones a uno de los posibles vertices dnd empezara la palabra horizontal
        if(posMColum>-1 && matriz.getbyposicion(posMFila).getbyposicion(posMColum)->getEstado() &&
                (!matriz.getbyposicion(posMFila).getbyposicion(posMColum)->getUsadahorizontal())){

            posMColum--;
        }
        else{
            moviendo=false;
        }
    }

    posMColum+=1;
    while(formar){
        if(posMColum<15 && matriz.getbyposicion(posMFila).getbyposicion(posMColum)->getEstado() &&
                (!matriz.getbyposicion(posMFila).getbyposicion(posMColum)->getUsadahorizontal())){

            nuevohorizontal+=matriz.getbyposicion(posMFila).getbyposicion(posMColum)->getLetra();
            matriz.getbyposicion(posMFila).getbyposicion(posMColum)->setUsadahorizontal(true);
            posMColum++;
        }
        else{
            formar=false;
        }
    }

    posMColum--;

    //cout << "horizontal: " << nuevohorizontal <<endl;
    return nuevohorizontal;
}

void helloworld::retroceso(string pal, bool selec) {

    if (selec) {
        for (int i = 0; i < pal.length(); i++) {
            matriz.getbyposicion(posMFila).getbyposicion(posMColum)->setUsadahorizontal(false);
            posMColum--;
        }
    } else {
        for (int i = 0; i < pal.length(); i++) {
            matriz.getbyposicion(clonposMFila).getbyposicion(clonposMColum)->setUsadavertical(false);
            clonposMFila--;
        }
    }
}




void helloworld::on_pedir_clicked(){
    int ejex = 150;
    int ejey = 630;
    int num;
    for (int i=0; i<7;i++){
        num=rand()%26;
        QString pal= lista.getbyposicion(num);
       // QString letra=QString::fromStdString(pal);; //pasar de un string a un QString
        QLabel *label= new QLabel(pal, this);
        label->setObjectName(pal);
        label->setGeometry(ejex,ejey,70,70);
        //label->setPixmap(QPixmap("/home/romario/Documentos/qtpruebas/imagenes/Z.png"));
        //label->setScaledContents(true);
        label->setVisible(true);
        label->setFont(QFont("Arial", 25));
        label->setCursor(Qt::OpenHandCursor);
        lislabel.add_end(label);
        ejex += 75;
    }
}


void helloworld::on_Scrabble_clicked(){

    string vertical= formarvertical();
    string horizontal= formarhorizontal();

    if (buscar(vertical)){
        cout << "La palabra: " << vertical << ", SI se encuentra en el diccionario" << endl;
    }
    else{
        retroceso(vertical , false);
    }

    if (buscar(horizontal)){
        cout << "La palabra: " << horizontal << ", SI se encuentra en el diccionario" << endl;
    }
    else{
        retroceso(horizontal , true);
    }
}

bool helloworld::buscar(string palabra) {

    string nombreArchivo;
    nombreArchivo = "dictionaryprogrammingLanguajes.txt";
    string ruta_archivo;
    ruta_archivo = "../util/" + nombreArchivo;

    ifstream archivo(ruta_archivo.c_str());


    if (archivo.is_open()) {
        string palabraDeArchivo;

        while (archivo >> palabraDeArchivo) {
            if (palabra == palabraDeArchivo) {
                return true;
            }
        }

        cout << "La palabra: " << palabra << ", NO se encuentra en el diccionario" << endl;
        return false;

    } else {
        return false;
    }
}











/*
QMovie *mov = new QMovie("/home/romario/Documentos/qtpruebas/imagenes/tenor.gif");
mov->start();

//label gif
QLabel *lbl = new QLabel(this);
lbl->setGeometry(300, 300, 240, 240);
lbl->setMovie(mov);*/

//se crea una lista de string para prueba



