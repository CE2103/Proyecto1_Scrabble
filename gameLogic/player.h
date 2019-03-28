/**
 * @file player.h
 * @version 1.0
 * @date 24/03/2019
 * @autor angelortizv
 * @title Jugador
 * @brief Incluye características principales de jugador como: turno, puntaje, total de Fichas, entre otros...
 */

#ifndef PROYECTO1_SCRABBLE_PLAYER_H
#define PROYECTO1_SCRABBLE_PLAYER_H


class player {

private:
    bool turn;
    int score;
    int amChips;

public:
    player();

    // Getter and Setters for turn, score and amChips
    bool getTurn();
    void setTurn(bool turn);
    int getScore();
    void setScore(int score);
    int getAmChips();
    void setAmChips(int amChips);


};


#endif //PROYECTO1_SCRABBLE_PLAYER_H