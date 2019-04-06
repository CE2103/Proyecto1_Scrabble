#include <iostream>
#include "chipsManager.h"


using namespace std;



chipsManager::chipsManager()  {


}

nodeaux* chipsManager::dealChips(int amount, player *player){

    while(amount>0){
        if(this->chipList->Head != nullptr){

            nodeaux* toReturn = chipList->Head;
            chipList->Head = chipList->Head->getSiguiente();

            toReturn->setSiguiente(player->getList()->Head);
            player->getList()->Head = toReturn;

            player->setAmChips(player->getAmChips()+1);

        }
        totalChips-=1;
        amount-=1;

    }
}


void chipsManager::substactChips(int chips){
    totalChips -= chips;
}



void chipsManager::createBag(){

    int pos[100];
    int v1 = rand() % 100;
    int i;
    while(i < 100){
        bool exists = find(begin(pos), end(pos), v1) != end(pos);
        if(exists){
            v1 = rand()%100;
        } else{
            chips *chipLetter = new chips(letters[v1]);

            nodeaux* letra = new nodeaux();
            letra->setValue(chipLetter);

            this->chipList->add_end(letra);

            pos[i] = v1;
            v1 = rand() % 100;
            i++;


        }
    }
//    cout << "---BOLSA CREADA---" << endl;

}