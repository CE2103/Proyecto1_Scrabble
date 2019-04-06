/**
 * @file listaux.h
 * @version 1.0
 * @date 01/04/2019
 * @autor angelortizv
 * @title Clase Lista Auxiliar
 * @brief Contiene métodos de la clase List formada por objetos de tipo Node
 */

#ifndef PROYECTO1_SCRABBLE_LIST_H
#define PROYECTO1_SCRABBLE_LIST_H

#include"nodeaux.h"

class listaux{
private:
    int size;
public:
    listaux();
    nodeaux* Head = nullptr;
    void add_end(nodeaux* nuevoNodo);
    void add_head(nodeaux* nuevoNodo);
};

#endif //PROYECTO1_SCRABBLE_LIST_H
