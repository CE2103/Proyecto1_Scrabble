#include <iostream>
#include "wordsManager.h"

using namespace std;

wordsManager::wordsManager() {

}

bool wordsManager::search(string word) {

    string fileName;
    fileName = "programmingLanguages.txt";
    string fileRoute;
    fileRoute = "../util/dictionaryTypes/" + fileName;
    ifstream archivo(fileRoute.c_str());

    if (archivo.is_open()) {
        string fileWord;
        while (archivo >> fileWord) {
            if (word == fileWord) {
                cout << "se encuentra"<< endl;
                return true;
            }
        }

        cout << "La palabra: " << word << ", NO se encuentra en el diccionario" << endl;
        return false;

    } else {
        return false;
    }
}