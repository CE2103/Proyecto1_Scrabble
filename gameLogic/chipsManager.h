/**
 * @file chipsManager.h
 * @version 1.0
 * @date 01/04/2019
 * @autor angelortizv
 * @title Bolsa de Fichas
 * @brief Contiene las fichas de cada jugador
 */


#ifndef PROYECTO1_SCRABBLE_CHIPSBAG_H
#define PROYECTO1_SCRABBLE_CHIPSBAG_H

#include <iostream>
#include <string>
#include "chips.h"
#include "player.h"
#include "dataStructures/auxLinkedList/listaux.h"
#include "dataStructures/auxLinkedList/nodeaux.h"

using namespace std;

class chipsManager {

private:
    listaux * chipList = new listaux();
    int totalChips;
    char letters[100]={'A','A','A','A','A','A','A','A','A','B','B','C','C','D','D','D','D','E','E','E','E','E','E','E','E','E','E','E','E','F','F','G','G','G','H','H','I','I','I','I','I','I','I','I','I','J','K','L','L','L','L','M','M','N','N','N','N','N','N','O','O','O','O','O','O','O','O','P','P','Q','R','R','R','R','R','R','S','S','S','S','T','T','T','T','T','T','U','U','U','U','V','V','W','W','X','Y','Y','Z',' ',' '};

public:
    chipsManager();
    void substactChips(int chips);
    nodeaux* dealChips(int amount, player* player);
    void createBag();


};


#endif //PROYECTO1_SCRABBLE_CHIPSBAG_H
