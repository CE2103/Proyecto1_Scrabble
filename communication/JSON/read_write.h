/**
 * @file read_write.h
 * @version 1.0
 * @date 05/04/2019
 * @autor angelortizv
 * @title Escritura y Lectura en JSON
 * @brief Contiene métodos para transmitir información desde el Servidor al CLiente en formato JSON.
 */

#ifndef PROYECTO1_SCRABBLE_READ_WRITE_H
#define PROYECTO1_SCRABBLE_READ_WRITE_H


#include <string>
#include "lib/rapidjson/document.h"
#include "lib/rapidjson/rapidjson.h"

class ReadWrite {
public:
    void ReadJson();
    void WriteJson();
    void JsonTraversal();

private:
    void OutputJson(const rapidjson::Value &root, const std::string &pre);
};

#endif //PROYECTO1_SCRABBLE_READ_WRITE_H
