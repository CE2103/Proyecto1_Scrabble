//#include "stdafx.h"
#include <iostream>
using std::cout;
using std::endl;

#include "queueItem.h"

#include <cstring>
using std::strncpy;
using std::strlen;

queueItem::queueItem( char *pData, int id)
        : _itemId(id)
{
    strncpy( _data, pData, strlen( pData ) +1 );
    _pNext = NULL;
}   // end QueItem constructor

void queueItem::setNext( queueItem *pItem )
{
    _pNext = pItem; // assign param to _pNext member
}   // end function setNext

queueItem* queueItem::getNext() const
{
    return _pNext;
}   // end function getNext

int queueItem::getId() const
{
    return _itemId;
}   // end function getId

const char* queueItem::getData() const
{
    return _data;
}   // end function getData()