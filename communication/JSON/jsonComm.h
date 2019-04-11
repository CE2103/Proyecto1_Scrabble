/**
 * @file jsonComm.h
 * @version 1.0
 * @date 07/04/2019
 * @autor angelortizv
 * @title
 * @brief
 */

#ifndef PROYECTO1_SCRABBLE_JSONCOMM_H
#define PROYECTO1_SCRABBLE_JSONCOMM_H

#include "lib/rapidjson/document.h"
#include "lib/rapidjson/writer.h"
#include "lib/rapidjson/stringbuffer.h"
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

    string serializeCreateGame(string name, string ip, string port, int id);
    string deserializeCreateGame(string json, string name);
    string serializeGameCode(string gameCode);

    string serializeJoinGame(string gameCode, string name, string ip, int id);
    string deserializeJoinGame(string json, int *turn, int *port);

    string serializeChips();
    string serializeAddWord(string word);
    string deserializeAddWord(string json);

    string playersInfo1();
    string playersInfo2();

    string serializePlayerInfo(string name, int turn, int score, int amChips);
    void deserializePlayerInfo(string json, string* name, int* turn, int* score, int* amChips);
    int getId(string json);


};


#endif //PROYECTO1_SCRABBLE_JSONCOMM_H
