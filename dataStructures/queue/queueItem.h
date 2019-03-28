//
// Created by angelortizv on 27/03/19.
//

#ifndef PROYECTO1_SCRABBLE_queueItem_H
#define PROYECTO1_SCRABBLE_queueItem_H


class Queue;        // forward class description


class queueItem
{
public:
    queueItem( char *pData, int id);    // ctor
    void setNext(queueItem *pItem);
    queueItem* getNext() const;
    int getId() const;
    const char* getData() const;
private:
    char _data[30];
    const int _itemId;                  // unique id for item in queue
    queueItem* _pNext;                  // next item in queue
};   // end definition class queueItem


#endif //PROYECTO1_SCRABBLE_queueItem_H
