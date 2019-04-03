#include "chips.h"

chips::chips(QGraphicsItem *parent) {}

chips::chips(char letter) {

    switch(letter){


        //Puntuación igual a 0
        case ' ' : setLetter(' ');
                   setValue(0);
//                   setPixmap(QPixmap("../img/letters/0points/0POINTS.png"));
                   break;

        //Puntuación igual a 1
        case 'A' : setLetter('A');
                   setValue(1);
                   break;
        case 'E' : setLetter('E');
                   setValue(1);
                   break;
        case 'O' : setLetter('O');
                   setValue(1);
                   break;
        case 'I' : setLetter('I');
                   setValue(1);
                   break;
        case 'S' : setLetter('S');
                   setValue(1);
                   break;
        case 'N' : setLetter('N');
                   setValue(1);
                   break;
        case 'L' : setLetter('L');
                   setValue(1);
                   break;
        case 'R' : setLetter('R');
                   setValue(1);
                   break;
        case 'U' : setLetter('U');
                   setValue(1);
                   break;
        case 'T' : setLetter('T');
                   setValue(1);
                   break;


        //Puntuación igual a 2
        case 'D' : setLetter('D');
                   setValue(2);
                   break;
        case 'G' : setLetter('G');
                   setValue(2);
                   break;



        //Puntuación igual a 3
        case 'C' : setLetter('C');
                   setValue(3);
                   break;
        case 'B' : setLetter('B');
                   setValue(3);
                   break;
        case 'M' : setLetter('M');
                   setValue(3);
                   break;
        case 'P' : setLetter('P');
                   setValue(3);
                   break;



        //Puntuación igual a 4
        case 'H' : setLetter('H');
                   setValue(4);
                   break;
        case 'F' : setLetter('F');
                   setValue(4);
                   break;
        case 'V' : setLetter('V');
                   setValue(4);
                   break;
        case 'Y' : setLetter('Y');
                   setValue(4);
                   break;


        //Puntuación igual a 5
//        case 'CH' : setLetter('CH');
//                    setValue(5);
//                    break;
        case 'Q' : setLetter('Q');
                   setValue(5);
                   break;


        //Puntuación igual a 8
        case 'J' : setLetter('J');
                   setValue(8);
                   break;
//        case 'LL' : setLetter('LL');
//                    setValue(8);
//            break;
//        case 'Ñ' : setLetter('Ñ');
//                   setValue(8);
//                   break;
//        case 'RR' : setLetter('RR');
//                    setValue(8);
//                    break;
        case 'X' : setLetter('X');
                   setValue(8);
                   break;
                   
                   
        //Puntuación igual a 10
        case 'Z' : setLetter('Z');
                   setValue(10);
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

