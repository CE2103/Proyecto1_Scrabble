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
public:
    gameBoard();
    /**
     * @title generateGameBoard
     * @autor angelortizv
     * @brief Genera Cuadrícula de tamaño 15x15
     */
    void generateGameBoard();
    /**
     * @title printGameBoard
     * @autor angelortizv
     * @brief
     */
    void printGameBoard();
};


#endif //PROYECTO1_SCRABBLE_GAMEBOARD_H
