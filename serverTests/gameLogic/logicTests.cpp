
#include <iostream>

#include "logicTests.h"

using namespace std;

static bool running = true;
//
//int main(){
//
//    int verification;
//    string playerName;
//
//    while(running){
//
//        cout << "Ingrese:\n"
//                "1:Crear Juego "
//                "2:Unirse a un Juego "
//                "3:Salir del Ciclo "
//                << endl;
//        cin >> verification;
//
//        gameController *gameController1 = new gameController();
//
//        if(verification == 1){
//
//                static player *player1 = new player();
//
//                string playerName;
//                string ipDir;
//                string serverPort;
//                double phoneExp;
//                double gameCode;
////                List<char> wordsList;
//
//                cout << "Ingrese el nombre del jugador: ";
//                cin >> playerName;
//                player1->setName(playerName);
//                cout << "Ingrese la Dirección IP del Servidor: ";
//                cin >> ipDir;
//                cout << "Ingrese el Puerto del Servidor: ";
//                cin >> serverPort;
//                cout << "Ingrese el Número del Experto: ";
//                cin >> phoneExp;
//                cout << "\n";
//
//                gameController1->generateGameCode();
//
////                chipsManager *chipsBag = new chipsManager();
////                chipsBag->createBag();
////                chipsBag->dealChips(7,player1);
////                player1->setTurn(true);
////                cout << "---Información de Jugadores---" << endl;
////                cout << "Name: " << player1->getName() << endl;
////                cout << "Turn: " << player1->getTurn() << endl;
////                cout << "Score: " << player1->getScore() << endl;
////                cout << "AmChips: " << player1->getAmChips() << endl;
////                cout << "------------------------------" << endl;
////                cout << "\n" ;
//
//                gameController1->contadorPartida++;
//
//        } else if(verification == 2){
//
//
//            static player *player2 = new player();
//            double gameCode;
//
//            cout << "Ingrese el código del juego: ";
//            cin >> gameCode;
//            gameController1->joinGamewCode(gameCode);
//
//            if(gameController1->tryAgain){
//                gameController1->joinGamewCode(gameCode);
//            } else {
//                cout << "Ingrese el nombre del jugador: ";
//                cin >> playerName;
//                player2->setName(playerName);
//
////            chipsManager *chipsBag = new chipsManager();
////            chipsBag->createBag();
////            chipsBag->dealChips(7,player2);
////            cout << "---Información de Jugadores---" << endl;
////            cout << "Name: " << player2->getName() << endl;
////            cout << "Turn: " << player2->getTurn() << endl;
////            cout << "Score: " << player2->getScore() << endl;
////            cout << "AmChips: " << player2->getAmChips() << endl;
////            cout << "------------------------------" << endl;
////            cout << "\n" ;
//
//                gameController1->contadorPartida+=2;
//
//                gameController1->initGame();
//
//            }
//
//        } else if(verification == 3){
//            running = false;
//        } else{
//            cout << "Ingrese una opción válida" << endl;
//        }
//
//    }
//
//}
