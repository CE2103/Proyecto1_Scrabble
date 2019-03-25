//
// Created by angelortizv on 24/03/19.
//

#ifndef PROYECTO1_SCRABBLE_STRINGLIST_H
#define PROYECTO1_SCRABBLE_STRINGLIST_H


#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void InitStrinList(char ***list);

void DestroyStringList(char ***list);

void AddStringToList(char ***list, const char *str);

void RemoveStringFromList(char *** const list, const char *str);

size_t *pGetStringListSize(const char * const * const list);

size_t *pGetStringListCapasity(const char * const * const list);

int FindStringInList(char *** const list, const char *str);

void RemoveDuplicateStringsFromList(char *** const list);

void SortListOfStrings(char *** list);

void PrintStringList(char *const *const * const list);

void RemoveStringFromListById(char*** const list, const size_t &removeElem);

void ResizeStringListCapasity(char *** const list, const size_t &newCapasity);

void ClearAllocatedMemory(char ***list, const size_t &newCapasity, const size_t &capasity);

void SwapStrings(char*** const list, const size_t &beforeElem, const size_t &afterElem);

void ReplaceStringsInList(char *** const list, const char *before, const char *after);


#endif //PROYECTO1_SCRABBLE_STRINGLIST_H
