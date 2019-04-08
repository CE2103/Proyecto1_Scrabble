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
#include <unistd.h>
#include <stdio.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

class Socket {
private:
public:
    Socket();
    static Socket &getInstance(){
        static Socket instance;
        return instance;
    }
    string Send(string message, string ip, int port, bool socketListener);
    string listener(int port);

};

#endif //PROYECTO1_SCRABBLE_SOCKET_H
