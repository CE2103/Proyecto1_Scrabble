#include <iostream>
#include "serverTests/socketTests/socket.h"
#include "serverTests/jsonTests/jsonComm.h"

#include "principal.h"

using namespace std;

principal::principal(){

}

void principal::createRoom(){

    string roomName;
    string name;
    string ipDir;
    int port;

    Socket* socket = &Socket::getInstance();

//    cout << "Ingrese el Nombre de la Sala: ";
//    cin >> roomName;
//    cout << "Ingrese el IP del Servidor: ";
//    cin >> ipDir;
//    cout << "Ingrese el puerto: ";
//    cin >> port;

    jsonComm* comm = &jsonComm::getInstance();

    string createRoom = comm->serializeCreateGame(roomName, ipDir);
    string serverResponse = socket->Send(createRoom, "192.168.1.255", 8080, true);

    int gameCode = 123456;
    comm->deserializeCreateGame(serverResponse, &gameCode);

//    string confirmation = socket->listener(port);

}

void principal::joinRoom() {

    string gameCode;
    string roomName;
    string ipDir;
    int port;

    Socket* socket = &Socket::getInstance();

    cout << "Ingrese el Código de la Sala: ";
    cin >> gameCode;
    cout << "Ingrese el nombre de la sala: ";
    cin >> roomName;
    cout << "Ingrese el IP del Servidor: ";
    cin >> ipDir;
    cout << "Ingrese el puerto: ";
    cin >> port;

    jsonComm* comm = &jsonComm::getInstance();

    string joinRoom = comm->serializeJoinGame(gameCode, roomName);

    string validation = socket->Send(joinRoom, "192.168.1.255", port, true);
    if(validation == "0"){
        cout << "No  existe la sala" << endl;
    } else if(validation == "2"){
        cout << "La sala está llena" << endl;
    }

    string confirmation = socket->listener(port);

}