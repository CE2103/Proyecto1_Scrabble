#include <iostream>
#include <QApplication>


#include "util/dictionary.h"

#include "dataStructures/linkedList/list.h"
#include "dataStructures/linkedList/list.cpp"


using namespace std;

int main() {

    List<int> list_1;
    int dim = 10;

//    list_1.fill_by_user(dim);
//    list_1.print();
//    list_1.add_head(12);
//    list_1.print();



//    dictionary d;
//    d.search("hola");
//    cout << "pruebas" << endl;


    string letter;
    int verification;
    int num;
    bool continueRunning = true;

    cout << "Ingrese un numero: " << endl;
    cin >> num;
    list_1.add_head(num);
    list_1.print();


    while(continueRunning){
        cout << "Ingrese 0 para continuar ingresando numeros y 1 para verificarlo: " << endl;
        cin>>verification;
        if(verification == 0){

            cout << "Ingrese un numero: " << endl;
            cin >> num;
            list_1.add_end(num);
            list_1.print();

        }else if(verification == 1){
            dictionary d;
            d.search("hola");

        }else{
            cout << "-1" << endl;
        }



    }

    return 0;
}