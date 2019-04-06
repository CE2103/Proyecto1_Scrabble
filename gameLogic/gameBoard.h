/**
 * @file gameBoard.h
 * @version 1.0
 * @date 24/03/2019
 * @autor angelortizv
 * @title Tablero de Juego
 * @brief Crea la matriz de juego
 */

#ifndef PROYECTO1_SCRABBLE_GAMEBOARD_H
#define PROYECTO1_SCRABBLE_GAMEBOARD_H

#include <iostream>
#include "dataStructures/auxLinkedList/listaux.h"
#include "dataStructures/auxLinkedList/nodeaux.h"

using namespace std;

class gameBoard {

private:
    listaux *posiciones = new listaux();

public:
    gameBoard();
    void generateGameBoard();
    void printGameBoard();
};


#endif //PROYECTO1_SCRABBLE_GAMEBOARD_H