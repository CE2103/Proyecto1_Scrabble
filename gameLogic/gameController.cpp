#include <iostream>

#include "gameController.h"
#include "communication/JSON/jsonComm.h"

using namespace std;

gameController::gameController(){

}

bool gameController::receiveMessage(string json){

    jsonComm* pJSON = new jsonComm();
    pJSON->Deserializer(json.c_str());
    pJSON = pJSON->Deserializer(json.c_str());

}

bool gameController::addWord(string word) {

}
