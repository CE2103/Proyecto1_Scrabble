/**
 * @file gameBoard.h
 * @version 1.0
 * @date 24/03/2019
 * @autor angelortizv
 * @title Tablero de Juego
 * @brief
 */

#ifndef PROYECTO1_SCRABBLE_GAMEBOARD_H
#define PROYECTO1_SCRABBLE_GAMEBOARD_H

#include <iostream>
#include "dataStructures/linkedList/list.h"

using namespace std;


class gameBoard {

private:
    char gameBoardField[15][15];

public:
    gameBoard();
    void generateGameBoard();
    void printGameBoard();
};


#endif //PROYECTO1_SCRABBLE_GAMEBOARD_H