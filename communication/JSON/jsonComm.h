/**
 * @file jsonComm.h
 * @version 1.0
 * @date 23/03/2019
 * @autor angelortizv
 * @title JSON Communication
 * @brief
 */

#ifndef PROYECTO1_SCRABBLE_JSONCOMM_H
#define PROYECTO1_SCRABBLE_JSONCOMM_H

#include <iostream>
#include "lib/rapidjson/document.h"
#include "lib/rapidjson/prettywriter.h"
#include "lib/rapidjson/writer.h"

using namespace std;

class jsonComm {
private:
    string word;
public:
    jsonComm();
    void setMessage(string word);

    template<typename Writer>
    void Serializer(Writer& writer) const;
    string serialize();
    jsonComm* Deserializer(const char* json);


    string toString();

};


#endif //PROYECTO1_SCRABBLE_JSONCOMM_H
