#include <iostream>
#include "listaux.h"

using namespace std;

listaux::listaux()
{

}
void listaux::add_end(nodeaux* nuevoNodo){
    nodeaux* actual = Head;
    if(Head != nullptr){
        while(actual->getSiguiente()!=nullptr){
            actual=actual->getSiguiente();
        }
        actual->setSiguiente(nuevoNodo);
    }

    else{
        Head = nuevoNodo;
        Head->setSiguiente(nullptr);
    }
    size++;
}

void listaux::add_head(nodeaux* nuevoNodo){
    nuevoNodo->setSiguiente(Head);
    Head = nuevoNodo;
    size++;
}

