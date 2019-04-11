#include "player.h"
#include <iostream>

using namespace std;

player::player(){
    this->setName("");
    this->setTurn(false);
    this->setScore(0);
    this->setAmChips(0);
}

string player::getName(){
    return this->name;
}
void player::setName(string name){
    this->name = name;
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

listaux* player::getList() {
    return chipsList;
}