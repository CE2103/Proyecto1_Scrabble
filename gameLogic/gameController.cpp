#include<iostream>
#include "gameController.h"


using namespace std;

int roomCounter = 0;
string testGameCode = "123456";

gameController::gameController(){

}

void gameController::joinGamewCode(string code){

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