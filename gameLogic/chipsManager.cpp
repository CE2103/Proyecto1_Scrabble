#include <iostream>
#include "chipsManager.h"

using namespace std;

chipsManager::chipsManager()  {

}

void chipsManager::dealChips(int amount, player *player){

}
int chipsManager::getTotalAmount() {
    return totalChips;
}
void chipsManager::setTotalAmount(int value) {
    totalChips = value;
}
int chipsManager::amountChipsCounter() {
    int total, value;
    while(value != 27){
        total = lettersAmount[value] + total;
        value += 1;
    }
    return total;
}