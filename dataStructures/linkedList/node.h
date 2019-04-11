#ifndef PROYECTO1_SCRABBLE_NODE_H
#define PROYECTO1_SCRABBLE_NODE_H

#include <iostream>

using namespace std;

template <class T>

class Node
{
public:
    Node();
    Node(T);
    ~Node();

    Node *next;
    T data;
    /**
     * @title
     * @autor
     * @brief
     */
    void delete_all();
    /**
     * @title
     * @autor
     * @brief
     */
    void print();
};

#endif //PROYECTO1_SCRABBLE_NODE_H
