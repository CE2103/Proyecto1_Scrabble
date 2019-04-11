#include <iostream>
#include "communication/socket/socket.h"
#include "communication/JSON/jsonComm.h"
#include "gameLogic/wordsManager.h"



using namespace std;
using namespace rapidjson;

int main() {


    bool running = true;
    while (running) {


        jsonComm *comm = &jsonComm::getInstance();
        string json = Socket::getInstance().listener(8080);
        wordsManager *wm = new wordsManager();


        string reader = comm->deserializeAddWord(json);
        comm->playersInfo1();
        comm->playersInfo2();

        if (wm->search(reader)) {
            cout << "La palabra: " << reader << ", SI se encuentra en el diccionario" << endl;

        } else {
            cout << "No se encuentre" << endl;
        }
        if (wm->search(reader)) {
            cout << "La palabra: " << reader << ", SI se encuentra en el diccionario" << endl;
        } else {
            cout << "NO se encuentra" << endl;
        }

    }


}
