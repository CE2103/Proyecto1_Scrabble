#include <stdlib.h>
#include <time.h>
#include<iostream>

#include "gameController.h"

using namespace std;

gameController::gameController(){


    gameBoard *g1 = new gameBoard();
    g1->generateGameBoard();

}

static int prueba = (1 + rand() % 9);

void gameController::generateGameCode() {

    int n = 5 ;
    cout << "Código de Juego: " << endl;
    for (int count = 0; count <= n; count++) {

        cout << prueba ;

//        cout << (1 + rand() % 9) ;
    }
    cout << "\n" << endl;

}


void gameController::joinGamewCode(){

    int code;

    cout << "Ingrese el código de juego" << endl;
    cin >> code;

    if(code == prueba){
        cout << "Ingreso a la Sala:" << code << endl;
    } else{
        cout << "Código Incorrcecto" << endl;
        joinGamewCode();
    }



}

