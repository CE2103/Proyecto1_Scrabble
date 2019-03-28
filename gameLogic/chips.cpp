#include "chips.h"

chips::chips(){

}
int chips::getX(){
    return this->x;
}
void chips::setX(int x){
    this->x = x;
}
int chips::getY(){
    return this->y;
}
void chips::setY(int y){
    this->y = y;
}
string chips::getLetter(){
    return this->letter;
}
void chips::setLetter(string value){
    this->letter = letter;
}
int chips::getValue(){
    return this->value;
}
void chips::setValue(int value){
    this->value = value;
}