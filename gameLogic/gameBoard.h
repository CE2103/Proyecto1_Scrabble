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


class gameBoard {

private:
    int gameBoardField[15][15] = {};

public:
    gameBoard();
    void generateGameBoard();
    void printGameBoard();
    void posValue();
    void chipValue();
};


#endif //PROYECTO1_SCRABBLE_GAMEBOARD_H