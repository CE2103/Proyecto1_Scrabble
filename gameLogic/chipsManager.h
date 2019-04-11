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

using namespace std;

class chipsManager {

private:
    int totalChips = 100;
    char* letters="abcdefghijklmnopqrstuvwxyz ";
    int lettersAmount[27] = {9,2,2,4,12,2,3,2,9,1,1,4,2,6,8,2,1,6,4,6,4,2,2,1,2,1,2};

public:

    static chipsManager &getInstance(){
        static  chipsManager instance;
        return instance;
    }
    chipsManager();
    void dealChips(int amount, player* player);
    int getTotalAmount();
    void setTotalAmount(int value);
    int amountChipsCounter();


};


#endif //PROYECTO1_SCRABBLE_CHIPSBAG_H
