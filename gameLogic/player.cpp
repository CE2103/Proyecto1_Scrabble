#include "player.h"
#include "gameBoard.h"
#include <iostream>

using namespace std;

player::player(){

    gameBoard gb1;
    gb1.generateGameBoard();

    this->setTurn(false);
    this->setScore(0);
    this->setAmChips(0);


}

bool player::getTurn(){
    return this->turn;
}
void player::setTurn(bool turn){
    this->turn = turn;
}

int player::getScore(){
    return this->score;
}
void player::setScore(int score){
    this->score = score;
}
int player::getAmChips(){
    return this->amChips;
}
void player::setAmChips(int amChips){
    this->amChips = amChips;
}

