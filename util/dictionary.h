/**
 * @file dictionary.h
 * @version 1.0
 * @date 20/03/2019
 * @autor angelortizv
 * @title Search words in a dictionary
 * @brief
 * @code
 *      dictionary d;
 *      d.searchWord("palabra");
 * @endcode
 */

#ifndef PROYECTO1_SCRABBLE_DICTIONARY_H
#define PROYECTO1_SCRABBLE_DICTIONARY_H

#include <fstream>
#include <string.h>
#include <stdlib.h>

using namespace std;

class dictionary {

public:
    ifstream dictionary;
    bool isFound = false;

    /**
     * @title Buscador de Palabras en Diccionario
     * @autor angelortizv
     * @param word
     * @return true: Si la letra está en el diccionario, sino: tira excepción de error.
     */
    bool search(string word);


};

#endif //PROYECTO1_SCRABBLE_DICTIONARY_H
