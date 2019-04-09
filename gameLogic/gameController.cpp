#include<iostream>
#include "gameController.h"


using namespace std;

gameController::gameController(){

}

static int testGameCode = 123456;
int roomCounter = 0;

void gameController::generateGameCode() {

    cout << "Código de Juego: " << testGameCode << endl;
    roomCounter++;

}



void gameController::joinGamewCode(double code){

    if(code != testGameCode){
        cout << "Intente de nuevo" << endl;
        tryAgain = true;
    } else{
        roomCounter++;
        roomVerification();
    }

}

void gameController::roomVerification(){



}


void gameController::initGame() {

}