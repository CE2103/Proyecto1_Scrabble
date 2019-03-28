/**
 * @file socketClient.h
 * @version 1.0
 * @date 24/03/2019
 * @autor angelortizv
 * @title Socket Client
 * @brief
 */

#ifndef PROYECTO1_SCRABBLE_SOCKETCLIENT_H
#define PROYECTO1_SCRABBLE_SOCKETCLIENT_H

#include <sys/socket.h>
#include <sys/types.h>
#include <netdb.h>
#include <string.h>
#include <string>
#include <iostream>
#include <pthread.h>
#include <unistd.h>
#include <QObject>
#include <arpa/inet.h>

using namespace std;

class SocketCliente: public QObject
{
Q_OBJECT
public:
    SocketCliente();
    bool connectar();
    void setMensaje(const char *msn);
private:
    int descriptor;
    sockaddr_in info;
    static void * controlador(void *obj);
signals:
    void NewMensaje(QString msn);
};

#endif //PROYECTO1_SCRABBLE_SOCKETCLIENT_H
