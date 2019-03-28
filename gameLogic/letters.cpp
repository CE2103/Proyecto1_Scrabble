#include <iostream>

#include "letters.h"

using namespace std;

void letters::letterField(string letter, int score){

    this->letter = letter;
    this->score = score;

}

string letters::getLetter(){
    return letter;
}

void letters::setLetter(string letter) {
    letters::letter = letter;
}


int letters::getScore(){
    return score;
}

void letters::setScore(int score){
    letters::score = score;
}