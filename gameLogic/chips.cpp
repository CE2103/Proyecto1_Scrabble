#include "chips.h"

chips::chips(int row, int col, char letter) {
    this->row = row;
    this->col = col;
    this->letter = letter;
}

chips::chips(char letter) {

    switch(letter){

        //Puntuación igual a 0
        case ' ' : setLetter(' ');
                   setValue(0);
                   setPixmap(QPixmap("../img/letters/0points/0POINTS.png"));
                   break;

        //Puntuación igual a 1
        case 'A' : setLetter('A');
                   setValue(1);
                   setPixmap(QPixmap("../img/letters/1points/A.png"));
                   break;
        case 'E' : setLetter('E');
                   setValue(1);
                   setPixmap(QPixmap("../img/letters/1points/B.png"));
                   break;
        case 'O' : setLetter('O');
                   setValue(1);
                   setPixmap(QPixmap("../img/letters/1points/O.png"));
                   break;
        case 'I' : setLetter('I');
                   setValue(1);
                   setPixmap(QPixmap("../img/letters/1points/I.png"));
                   break;
        case 'S' : setLetter('S');
                   setValue(1);
                   setPixmap(QPixmap("../img/letters/1points/S.png"));
                   break;
        case 'N' : setLetter('N');
                   setValue(1);
                   setPixmap(QPixmap("../img/letters/1points/N.png"));
                   break;
        case 'L' : setLetter('L');
                   setValue(1);
                   setPixmap(QPixmap("../img/letters/1points/L.png"));
                   break;
        case 'R' : setLetter('R');
                   setValue(1);
                   setPixmap(QPixmap("../img/letters/1points/R.png"));
                   break;
        case 'U' : setLetter('U');
                   setValue(1);
                   setPixmap(QPixmap("../img/letters/1points/U.png"));
                   break;
        case 'T' : setLetter('T');
                   setValue(1);
                   setPixmap(QPixmap("../img/letters/1points/T.png"));
                   break;

        //Puntuación igual a 2
        case 'D' : setLetter('D');
                   setValue(2);
                   setPixmap(QPixmap("../img/letters/2points/D.png"));
                   break;
        case 'G' : setLetter('G');
                   setValue(2);
                   setPixmap(QPixmap("../img/letters/2points/G.png"));
                   break;

        //Puntuación igual a 3
        case 'C' : setLetter('C');
                   setValue(3);
                   setPixmap(QPixmap("../img/letters/3points/C.png"));
                   break;
        case 'B' : setLetter('B');
                   setValue(3);
                   setPixmap(QPixmap("../img/letters/3points/B.png"));
                   break;
        case 'M' : setLetter('M');
                   setValue(3);
                   setPixmap(QPixmap("../img/letters/3points/M.png"));
                   break;
        case 'P' : setLetter('P');
                   setValue(3);
                   setPixmap(QPixmap("../img/letters/3points/P.png"));
                   break;

        //Puntuación igual a 4
        case 'H' : setLetter('H');
                   setValue(4);
                   setPixmap(QPixmap("../img/letters/4points/H.png"));
                   break;
        case 'F' : setLetter('F');
                   setValue(4);
                   setPixmap(QPixmap("../img/letters/4points/F.png"));
                   break;
        case 'V' : setLetter('V');
                   setValue(4);
                   setPixmap(QPixmap("../img/letters/4points/V.png"));
                   break;
        case 'Y' : setLetter('Y');
                   setValue(4);
                   setPixmap(QPixmap("../img/letters/4points/Y.png"));
                   break;

        //Puntuación igual a 5
        case 'Q' : setLetter('Q');
                   setValue(5);
                   setPixmap(QPixmap("../img/letters/5points/Q.png"));
                   break;

        //Puntuación igual a 8
        case 'J' : setLetter('J');
                   setValue(8);
                   setPixmap(QPixmap("../img/letters/8points/J.png"));
                   break;
        case 'X' : setLetter('X');
                   setValue(8);
                   setPixmap(QPixmap("../img/letters/8points/X.png"));
                   break;

        //Puntuación igual a 10
        case 'Z' : setLetter('Z');
                   setValue(10);
                   setPixmap(QPixmap("../img/letters/10points/Z.png"));
                   break;

    }
}

char chips::getLetter(){
    return this->letter;
}
void chips::setLetter(char letter){
    this->letter = letter;
}
int chips::getValue(){
    return this->value;
}
void chips::setValue(int value){
    this->value = value;
}
int chips::getX() {
    return this->x;
}
void chips::setX(int x) {
    this->x = x;
}
int chips::getY() {
    return this->y;
}
void chips::setY(int y) {
    this->y = y;
}