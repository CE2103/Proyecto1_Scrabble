#include <iostream>

#include "words.h"

using namespace std;

words::words(){

}

void words::letterField(string letter, int score){

    this->letter = letter;
    this->score = score;

}

string words::getLetter(){
    return letter;
}

void words::setLetter(string letter) {
    words::letter = letter;
}


int words::getScore(){
    return score;
}

void words::setScore(int score){
    words::score = score;
}




