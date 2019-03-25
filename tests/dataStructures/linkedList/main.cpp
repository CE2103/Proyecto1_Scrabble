#include <iostream>
#include <string>
#include "stringlist.h"

using namespace std;
//
//int main()
//{
//    char **list = nullptr;
//
//    int verification;
//    bool continueRunning = true;
//    char letter;
//
//    InitStrinList(&list);
//
////    AddStringToList(&list, "Hello 1");
////    AddStringToList(&list, "Hello 2");
////    AddStringToList(&list, "Hello 3");
////    AddStringToList(&list, "Hello 2");
////    AddStringToList(&list, "Hello 5");
////    AddStringToList(&list, "Hello 4");
////
////    PrintStringList(&list);
//
//
//    while(continueRunning){
//        cout << "Ingrese:\n"
//                "   0 para añadir letras\n"
//                "   1 para verificar palabras\n"
//                "   2 para salir de consola" << endl;
//        cin >> verification;
//        if(verification == 0){
//            cout << "Ingrese una letra: " << endl;
//            cin >> letter;
//
//            AddStringToList(&list, "${letter}");
//
//
//        } else if(verification == 1){
//            PrintStringList(&list);
//
//        } else if(verification == 2){
//            DestroyStringList(&list);
//            continueRunning = false;
//        } else {
//            cout << "-1" << endl;
//        }
//    }
//
//
//
//    return 0;
//}
