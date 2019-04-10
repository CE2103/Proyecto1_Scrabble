//
// Created by angelortizv on 09/04/19.
//

#ifndef PROYECTO1_SCRABBLE_JSONCOMM_H
#define PROYECTO1_SCRABBLE_JSONCOMM_H


#include "../rapidjson/document.h"
#include "../rapidjson/writer.h"
#include "../rapidjson/stringbuffer.h"


#include <string>
#include <iostream>

using namespace std;
using namespace rapidjson;

class jsonComm {

private:
public:
    jsonComm();

    static jsonComm& getInstance(){
        static jsonComm instance;
        return instance;
    }

    string deserealizarinicio(string json);

    string serializeCreateGame(string name, string ip, string port, int id);
    void deserializeCreateGame(string json, int* gameCode);
    string serializeJoinGame(string gameCode, string name, string ip, int id);
    void deserializeJoinGame(string json, int *turn, int *port);

    string serializeChips();
    string serializeAddWord(string word);

    void deserializePlayerInfo(string json, string* name, int* turn, int* score, int* amChips);
    int getId(string json);

};


#endif //PROYECTO1_SCRABBLE_JSONCOMM_H
