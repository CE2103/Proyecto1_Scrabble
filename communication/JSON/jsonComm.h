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
#include "lib/rapidjson/prettywriter.h"

class jsonComm {
private:
public:
    jsonComm();
    void Serializer();
    void Deserializer();

};


#endif //PROYECTO1_SCRABBLE_JSONCOMM_H
