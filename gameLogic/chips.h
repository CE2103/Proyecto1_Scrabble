/**
 * @file chips.h
 * @version 1.0
 * @date 24/03/2019
 * @autor angelortizv
 * @title Fichas de Juego
 * @brief
 */


#ifndef PROYECTO1_SCRABBLE_CHIPS_H
#define PROYECTO1_SCRABBLE_CHIPS_H

#include <string>
#include <iostream>

using namespace std;

class chips {
private:
    string letter;
    int value, x, y;

public:
    chips();
    int getX();
    void setX(int x);
    int getY();
    void setY(int y);
    string getLetter();
    void setLetter(string value);
    int getValue();
    void setValue(int value);


};


#endif //PROYECTO1_SCRABBLE_CHIPS_H