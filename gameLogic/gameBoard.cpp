#include <iostream>
#include "gameBoard.h"

using namespace std;

int row = 15; int col = 15;

gameBoard::gameBoard(){
    generateGameBoard();
}

void gameBoard::generateGameBoard(){

    cout << "----------GAMEBOARD-----------" << endl;
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

