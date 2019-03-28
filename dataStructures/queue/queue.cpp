//#include "stdafx.h"
#include <iostream>
using std::cout;
using std::endl;

#include "queue.h"
#include "queueItem.h"

// constructor
queue::queue()
{
    queueItem* _pNext = _pHead = _pTail = 0;
    _itemCounter = 0;
} // end ctor

// destructor
queue::~queue()
{
    // in text Fig 9.12 this just does some couts, i think it's automatic
}   // end dtor

// add a new item to the queue
void queue::addItem(char *pData)
{
    // dynamically create and init a new queueItem object
    queueItem *pItem = new queueItem(pData, ++_itemCounter);

    if ( 0 == _pHead )          // check for empty queue
        _pHead = _pTail = pItem;
    else
    {
        _pTail->setNext(pItem); // set pTail's item to point at the newest item (link it on the end of the queue)
        _pTail = pItem;         // set pTail to point to the newest item on the end
    }
    queueItem* _pNext = 0;
}   // end function addItem

// removes the head item from the queue, FIFO
void queue::removeItem()
{
    if ( _pTail == 0 && _pHead == 0 )
    {
        // empty body
    }
    else
    {
        queueItem* _pItem = _pHead->getNext();
        delete _pHead;
        _pHead = _pItem;
    }

}   // end function removeItem

// Print the entire queue
void queue::print()
{
    queueItem* _pItem = _pHead;
    while ( _pItem != NULL )
    {
        cout << _pItem->getId() << endl;
        cout << _pItem->getData() << endl;
        _pItem = _pItem->getNext();
    }
}   // end function print

void queue::erase()
{
    while ( _pHead != NULL )
    {
        queueItem* _pItem = _pHead->getNext();
        delete _pHead;
        _pHead = _pItem;
    }
}   // end function erase