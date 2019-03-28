/**
 * @file words.h
 * @version 1.0
 * @date 27/03/19
 * @autor angelortizv
 * @title
 * @brief
 */

#ifndef PROYECTO1_SCRABBLE_WORDS_H
#define PROYECTO1_SCRABBLE_WORDS_H

#include <iostream>
#include <string>

using namespace std;

class letters {

private:
    string letter;
    int score;

public:
    letters();
    void letterField(string letter, int score);

    // Getters and Setters for Letter and Score
    string getLetter();
    void setLetter(string letter);
    int getScore();
    void setScore(int score);


};


#endif //PROYECTO1_SCRABBLE_WORDS_H