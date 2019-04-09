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

#include <unistd.h>
#include <stdio.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>
#include <bits/stdc++.h>
#define PORT 8081
using namespace std;
class Socket {
private:
public:
    Socket();
    string enviar(string Mensaje,int puerto,string ip, bool);
    static Socket &getInstance(){
        static Socket instance;
        return instance;
    }
    string escuchar2(int puerto);
};


#endif //PROYECTO1_SCRABBLE_SOCKETCLIENT_H
