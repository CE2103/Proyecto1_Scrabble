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

//    int n = 5 ;
//    cout << "Código de Juego: " << endl;
//    for (int count = 0; count <= n; count++) {

////        cout << (1 + rand() % 9) ;
//
//    }
//    cout << "\n" << endl;

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

    if(roomCounter > 2){
        queue myQueue;
        myQueue.addItem("player3");
        myQueue.print();
        cout << "Capacidad máxima de Jugadores en Sala" << endl;
        cout << "Añadido a la cola" << endl;
        cout << "\n";
    } else{
        cout << "Bienvenido!" << endl;
    }

}


void gameController::initGame() {

    if(contadorPartida == 2){

        ReadWrite read_write;
        cout << "----------------- PRUEBAS JSON -----------------\n";
//        std::cout << "------  JSON ------\n";
        read_write.WritePlayer1Json();
        read_write.WritePlayer2JSon();
        std::cout << "\n";

    } else {

        cout << "error"<< endl;

    }
}