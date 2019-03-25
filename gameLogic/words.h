/**
 * @file
 * @version 1.0
 * @date
 * @autor
 * @title
 * @brief
 * @code
 *
 * @endcode
 */

#ifndef PROYECTO1_SCRABBLE_WORDS_H
#define PROYECTO1_SCRABBLE_WORDS_H

#include <iostream>
#include <string>

using namespace std;


class words {

private:
    string letter;
    int score;

public:
    words();
    void letterField(string letter, int score);

    // Getters and Setters for Letter and Score
    string getLetter();
    void setLetter(string letter);
    int getScore();
    void setScore(int score);


};


#endif //PROYECTO1_SCRABBLE_WORDS_H
