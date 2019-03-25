#include <iostream>

#include "util/dictionary.h"

#include "dataStructures/linkedList/list.h"
#include "dataStructures/linkedList/list.cpp"


using namespace std;


int main() {

    string letra="";

    List<string> d;

    d.add_head("arbol");
    d.add_head("carro");
    d.add_head("perro");
    d.add_head("casa");
    d.add_head("caballo");

    List<string> lista;

    cout<< "ingrese una palabra";
    cin >> letra;
    lista.add_head(letra);
    cout<< "ingrese una palabra";
    cin >> letra;
    lista.add_end(letra);
    cout<< "ingrese una palabra" ;
    cin >> letra;
    lista.add_end(letra);
    cout<< "ingrese una palabra" ;
    cin >> letra;
    lista.add_end(letra);
    cout<< "ingrese una palabra" ;
    cin >> letra;
    lista.add_end(letra);


    string compara= lista.Unir();
    if (d.search(compara)){
        cout << "La palabra se encuentra en el diccionario"<< endl;
    }
    else{
        lista.invert();
        string compara2= lista.Unir();

        if (d.search(compara2)){
            cout << "La palabra se encuentra en el diccionario"<< endl;
        }
        else {
            cout << "La palabra NO se encuentra en el diccionario"<< endl;
        }
    }
    return 0;
}
