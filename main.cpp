#include <iostream>
#include "communication/newSS/socket.h"
#include "communication/JSON/jsonComm.h"
#include "gameLogic/wordsManager.h"



using namespace std;
using namespace rapidjson;

int main() {

    Socket *ss = &Socket::getInstance();
    jsonComm *comm = &jsonComm::getInstance();
    wordsManager *wm = new wordsManager();

//    ss->escuchar("", 8080);

    string json = Socket::getInstance().listener(8080);
    cout << json << endl;
    string romarito =  comm->deserializeAddWord(json);


    if (wm->search(romarito)){
        cout << "La palabra: " << romarito << ", SI se encuentra en el diccionario" << endl;
    } else{
        cout << "No se encuentre" << endl;
    }
    if (wm->search(romarito)) {
        cout << "La palabra: " << romarito << ", SI se encuentra en el diccionario" << endl;
    } else {
        cout << "NO se encuentra"<< endl;
    }

}