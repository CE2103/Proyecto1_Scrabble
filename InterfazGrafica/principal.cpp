#include "socketclient.h"
#include "jsonComm.h"

#include "principal.h"
#include "util.h"

using namespace std;

static int idCont = 1;

principal::principal(){

}

//util* util1 = new util();

void principal::createRoom(){

    string name;
    string ip;
    string port;

    Socket* socket = &Socket::getInstance();

    cout << "Ingrese el Nombre: ";
    cin >> name;
    cout << "Ingrese el IP del Servidor: ";
    cin >> ip;
    cout << "Ingrese el puerto: ";
    cin >> port;

    jsonComm* comm = &jsonComm::getInstance();

    static string create = comm->serializeCreateGame(name, ip, port, idCont);

    string validation = socket->enviar(create, 8080, "127.0.0.1", true);

    static int gameCode = 123456;
    comm->deserializeCreateGame(validation, &gameCode);


}

void principal::joinRoom() {

    string gameCode;
    string name;

    Socket* socket = &Socket::getInstance();

    cout << "Ingrese el Código de la Sala: ";
    cin >> gameCode;

    cout << "Ingrese el nombre: ";
    cin >> name;

    jsonComm* comm = &jsonComm::getInstance();

    static string joinRoom = comm->serializeJoinGame(gameCode, name, "127.0.0.1", idCont+=1);

    string validation = socket->enviar(joinRoom, 8080, "127.0.0.1", true);


}
