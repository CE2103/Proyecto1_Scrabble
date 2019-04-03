
#include <iostream>

#include "logicTests.h"

using namespace std;

int main(){


    bool running = true;
    int verification;
    string playerName;

    while(running){

        cout << "Ingrese:\n"
                "1:Crear Juego "
                "2:Unirse a un Juego "
                "3:Salir del Ciclo "
                << endl;
        cin >> verification;

        if(verification == 1){

                gameController *gameController1 = new gameController();
                gameController1->generateGameCode();

                player *player1 = new player();
                player *player2 = new player();

                chipsManager *chipsBag = new chipsManager();
                chipsBag->createBag();


                chipsBag->dealChips(7,player1);
                cout << "p1:" << player1->getAmChips() << endl;
                chipsBag->dealChips(7, player2);
                cout << "p2:" << player2->getAmChips() << endl;


//                chips *chips1 = new chips('A');
//                chips *chips2 = new chips('R');
//                chips *chips3 = new chips('B');
//                chips *chips4 = new chips('O');
//                chips *chips5 = new chips('L');


//                gameBoard *gb1 = new gameBoard();


//                chips1->setX();
//                chips1->setY();


        } else if(verification == 2){

            gameController *gcJG = new gameController();
            gcJG->joinGamewCode();

        } else if(verification == 3){
            running = false;
        } else{
            cout << "Ingrese una opción válida" << endl;
        }

    }


}