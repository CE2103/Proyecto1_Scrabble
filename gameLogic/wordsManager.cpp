#include <iostream>
#include "wordsManager.h"

using namespace std;

wordsManager::wordsManager() {

}

bool wordsManager::search(string word){

    dictionary.open("../util/dictionary.txt");

    if(dictionary.fail()){
    cerr << "Error: " << strerror(errno) << endl;
    cout << "Can't open file" << endl;
    exit(1);
    }

    string tempStr;
    while(!dictionary.eof() || !isFound){
    getline(dictionary,tempStr);
    if(tempStr == word){
    cout << "Word found "  << endl;
    isFound = true;
    }
    }

    dictionary.close();
    if(!isFound){
    cout << "Word isn't found in dictionary" << endl;
    }

    return isFound;

}