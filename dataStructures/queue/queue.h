#ifndef PROYECTO1_SCRABBLE_queue_H
#define PROYECTO1_SCRABBLE_queue_H


class queueItem;    // forward class description


class queue
{
public:
    queue();                    // ctor inits a new empty queue
    ~queue();                   // dtor erases any remaining queueItems
    void addItem(char *pData);
    void removeItem();
    void print();
    void erase();
private:
    queueItem *_pHead;      // always points to first queueItem in the list
    queueItem *_pTail;      // always points to last queueItem in the list
    int _itemCounter;       // always increasing for a unique id to assign to each new queueItem
};   // end definition class queue



#endif //PROYECTO1_SCRABBLE_queue_H
