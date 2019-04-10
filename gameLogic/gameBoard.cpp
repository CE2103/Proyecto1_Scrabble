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

void gameBoard::chipValue()
{
    for (int i=0;i<15;i++){
        for (int j=0;j<15;j++){
            if (inGameChips[i][j]==nullptr){
                cout<<0<<" ";
            }
            else{
                cout<<inGameChips[i][j]->getLetter()<<" ";
            }
        }
        cout<<endl;
    }
}

