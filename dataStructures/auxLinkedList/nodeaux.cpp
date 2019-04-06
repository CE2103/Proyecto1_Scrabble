#include "nodeaux.h"

nodeaux::nodeaux(){
    next = nullptr;
    value= nullptr;
}
nodeaux::nodeaux(chips* ficha,nodeaux* siguiente){
    this->value = ficha;
    this->next = siguiente;
}
void nodeaux::setSiguiente (nodeaux* nodo){
    this->next = nodo;
}
nodeaux* nodeaux::getSiguiente(){
    return this->next;
}

void nodeaux::setX(int x){
    this->x=x;
}
void nodeaux::setY(int y){
    this->y=y;
}
int nodeaux::getX(){
    return this->x;
}
int nodeaux::gety(){
    return this->y;
}

void nodeaux::setState(bool state){
    this->state = state;
}
bool nodeaux::getState(){
    return this->state;
}
void nodeaux::setValue(chips* chip){
    this->value = chip;
}
chips* nodeaux::getValue(){
    return this->value;
}