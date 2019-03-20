#include <iostream>
#include "dictionary.h"

using namespace std;

bool dictionary::searchWord(string word) {


    dictionary.open("../util/dictionary.txt");


    if(dictionary.fail()){
        cerr << "Error: " << strerror(errno) << endl;
        cout << "Can't open file" << endl;
        exit(1);
    }

    string temp;
    while(!dictionary.eof() || !isFound){
        getline(dictionary,temp);
        if(temp == word){
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