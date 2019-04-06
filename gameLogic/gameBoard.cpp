#include <iostream>
#include "gameBoard.h"

using namespace std;

int row = 15; int col = 15;

gameBoard::gameBoard(){
    generateGameBoard();
}

void gameBoard::generateGameBoard(){

    cout << "----------GAMEBOARD-----------" << endl;
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){

            cout << "[";
            nodeaux *celda = new nodeaux();
            celda->setX(row);
            celda->setY(col);
            celda->setState(false);
            posiciones->add_end(celda);
            cout << "]";
        }
        row = 0;
        col += 51;
    }
    cout << "\n" << endl;
}

//void gameBoard::printGameBoard() {
//
//    cout << "--GAMEBOARD--" << endl;
//    for (int i = 0; i < row; i++) {
//        for(int j = 0; j < col; j++){
//
//            cout << "[";
//            if(){
//
//            } else{
//                cout << " ";
//            }
//            cout << "]";
//        }
//        cout << "\n" << endl;
//    }
//
//
//}


