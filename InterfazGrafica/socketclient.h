#ifndef SOCKETCLIENT_H
#define SOCKETCLIENT_H
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
    string listener(int puerto);
};
#endif // SOCKETCLIENT_H
