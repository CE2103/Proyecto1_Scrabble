/**
 * @file wordsManager.h
 * @version 1.0
 * @date 04/04/2019
 * @autor angelortizv
 * @title Buscador de Palabras en Diccionario
 */

#ifndef PROYECTO1_SCRABBLE_WORDSMANAGER_H
#define PROYECTO1_SCRABBLE_WORDSMANAGER_H

#include <fstream>
#include <string.h>
#include <stdlib.h>

using namespace std;

class wordsManager {

private:
public:
    wordsManager();
    bool search(string word);

};


#endif //PROYECTO1_SCRABBLE_WORDSMANAGER_H
