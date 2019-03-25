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
#include <vector>
#include <unistd.h>
#include <arpa/inet.h>
#include <QObject>
#include <QString>

using namespace std;

class socketClient:public QObject
{
Q_OBJECT

private:
    int descriptor;
    sockaddr_in info;
    static void * getMensaje(void *obj);

public:
    socketClient();
    /**
     * @title Conectar
     * @autor angelortizv
     * @brief Realiza la conexión del Socket a una IP determinada.
     */
    bool Conectar();
    /**
     * @title setMensaje
     * @autor angelortizv
     * @param QString msn
     * @return String , Mensaje Enviado por Cliente
     * @brief Envia Mensaje al Servidor si existe una conexión.
     */
    void setMensaje(QString msn);

signals:
    void NuevoMensaje(QString msn);

};
#endif //PROYECTO1_SCRABBLE_SOCKETCLIENT_H
