/**
 * @file gameController.h
 * @version 1.0
 * @date 27/03/2019
 * @autor angelortizv
 * @title Manejador de Juego Scrabble
 * @brief
 */
#ifndef PROYECTO1_SCRABBLE_SCRABBLEGAME_H
#define PROYECTO1_SCRABBLE_SCRABBLEGAME_H

#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "chips.h"
#include "gameBoard.h"
#include "chipsManager.h"
#include "player.h"
#include "communication/JSON/read_write.h"
#include "dataStructures/linkedList/list.h"
#include "dataStructures/linkedList/node.h"
#include "dataStructures/queue/queueItem.h"
#include "dataStructures/queue/queue.h"


using namespace std;

class gameController {

private:
    double code;

public:

    gameController();
    int contadorPartida;
    bool tryAgain = false;
    void initGame();
    void generateGameCode();
    void joinGamewCode(double code);
    void roomVerification();


};


#endif //PROYECTO1_SCRABBLE_SCRABBLEGAME_H
