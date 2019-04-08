/**
 * @file chips.h
 * @version 1.0
 * @date 24/03/2019
 * @autor angelortizv
 * @title Fichas de Juego
 * @brief Contiene los valores de cada ficha
 */

#ifndef PROYECTO1_SCRABBLE_CHIPS_H
#define PROYECTO1_SCRABBLE_CHIPS_H

#include <string>
#include <iostream>
#include<QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsSceneMouseEvent>
#include <QMouseEvent>
#include <QEvent>

using namespace std;

class chips  {
private:
    char letter;
    int value;

public:
    chips();
    chips(char letter);
    char getLetter();
    void setLetter(char letter);
    int getValue();
    void setValue(int value);

protected:

};


#endif //PROYECTO1_SCRABBLE_CHIPS_H