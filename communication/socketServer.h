/**
 * @file socketServer.h
 * @version 1.0
 * @date 23/03/2019
 * @autor angelortizv
 * @title Socket Server
 * @brief
 */


#ifndef PROYECTO1_SCRABBLE_SOCKETSERVER_H
#define PROYECTO1_SCRABBLE_SOCKETSERVER_H

#include <sys/socket.h>
#include <sys/types.h>
#include <netdb.h>
#include <string.h>
#include <string>
#include <iostream>
#include <pthread.h>
#include <vector>
#include <unistd.h>

using namespace std;

struct dataSocket{
    int descriptor;
    sockaddr_in info;
};

class socketServer
{
private:
    int descriptor;
    sockaddr_in info;
    bool crear_Socket();
    bool ligar_kernel();
    static void * controladorCliente(void *obj);
    vector<int> clientes;
public:
    socketServer();
    /**
     * @title run
     * @autor angelortizv
     * @brief Espera nuevas conexiones de clientes al servidor.
     */
    void run();
    /**
     * @title setMesaje
     * @autor angelortizv
     * @param msn
     * @brief Muestra cuántos clientes hay en el Server.
     */
    void setMensaje(const char *msn);

};

#endif //PROYECTO1_SCRABBLE_SOCKETSERVER_H
