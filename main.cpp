#include <iostream>

#include "util/dictionary.h"

#include "dataStructures/linkedList/list.h"
#include "dataStructures/linkedList/list.cpp"


using namespace std;


void menu(){
    cout <<"-------------------------------\n"
           " Ingrese: \n"
           "   0 para ingresar letras,\n"
           "   1 para verificar palabras,\n"
           "   2 para salir de consola.\n"
           "-------------------------------\n" << endl;
}


int main() {

    List<int> list_1;

    char letter;
    int verification;
    int num;
    bool continueRunning = true;

//    cout << "Ingrese un numero: " << endl;
//    cin >> num;
//    list_1.add_head(num);
//    list_1.print();




    while(continueRunning){
        menu();
        cin>>verification;

        if(verification == 0){
            cout << "Ingrese una lettra: " << endl;
            cin >> letter;
            list_1.add_end(letter);
            list_1.print();


        }else if(verification == 1){
            dictionary d;
            d.search("hola");

        } else if(verification == 2){
            list_1.print();
            continueRunning = false;
        }else{
            cout << "-1" << endl;
        }



    }

    return 0;
}
