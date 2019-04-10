/**
 * @file socket.h
 * @version 1.0
 * @date 07/04/2019
 * @autor angelortizv
 * @title
 * @brief
 */

#ifndef PROYECTO1_SCRABBLE_SOCKET_H
#define PROYECTO1_SCRABBLE_SOCKET_H

#include <unistd.h>
#include <stdio.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>
#include <bits/stdc++.h>
#include "qdebug.h"
#define PORT 8081
using namespace std;
class Socket {
private:
    int Puerto=8080;
    int sock = 0;
    int server_fd, new_socket, valread;
    struct sockaddr_in address;
    int opt = 1;
    int addrlen = sizeof(address);
    char char_array;
    struct sockaddr_in serv_addr;
    char *hello="------Scrabble Server------";
public:
    Socket();


    char buffer[1024] = {0};
    int enviar(string Mensaje,int puerto);
    static Socket& getInstance(){
        static Socket instance;
        return instance;
    }
    string listener(int puerto);


};


#endif //PROYECTO1_SCRABBLE_SOCKET_H
