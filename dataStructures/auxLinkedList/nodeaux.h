/**
 * @file nodeaux.h
 * @version 1.0
 * @date 01/04/2019
 * @autor angelortizv
 * @title Clase Nodo Auxiliar
 * @brief Responsables de Almacenar un valor de tipo int y un puntero al nodo siguiente
 */

#ifndef PROYECTO1_SCRABBLE_NODE_H
#define PROYECTO1_SCRABBLE_NODE_H

#include <iostream>
#include "gameLogic/chips.h"

class nodeaux
{
private:
    chips* value = nullptr;
    nodeaux* next = nullptr;
    int x;
    int y;
    bool state = false;

public:
    void setValue(chips* value);
    chips* getValue();
    void setSiguiente(nodeaux* nodo);
    nodeaux* getSiguiente();
    void setX(int x);
    void setY(int y);
    int getX();
    int gety();
    void setState(bool state);
    bool getState();

    nodeaux(chips* chip,nodeaux*siguiente);
    nodeaux();

};
#endif //PROYECTO1_SCRABBLE_NODE_H
