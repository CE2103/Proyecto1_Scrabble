#include "jsonComm.h"
#include <iostream>

using namespace rapidjson;

jsonComm::jsonComm() {

}

string jsonComm::serializeCreateGame(string name, string ip, string port, int id){
    const char* json = "{\"name\":\"name\","
                       "\"port\":1234,"
                       "\"ip\":\"0.0.0.0\","
                       "\"id\":0}";

    Document d;
    d.Parse(json);
    d["port"].SetInt(stoi(port));
    d["name"].SetString(name.c_str(), sizeof(char)*name.length());
    d["ip"].SetString(ip.c_str(), sizeof(char)*ip.length());
    d["id"].SetInt(id);

    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);

    return buffer.GetString();

}

string jsonComm::deserializeCreateGame(string json, string name){
    Document d;
    d.Parse(json.c_str());
    return  d["name"].GetString();
}

string jsonComm::serializeJoinGame(string gameCode, string name, string ip, int id){
    const char* json = "{\"gameCode\":123456,"
                       "\"name\":\"name\","
                       "\"ip\":\"0.0.0.0\","
                       "\"id\":0}";

    Document d;
    d.Parse(json);
    d["gameCode"].SetInt(stoi(gameCode));
    d["name"].SetString(name.c_str(), sizeof(char)*name.length());
    d["ip"].SetString(ip.c_str(), sizeof(char)*ip.length());
    d["id"].SetInt(id);

    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);

    return buffer.GetString();
}

string jsonComm::deserializeJoinGame(string json, int *turn, int *port){
    Document d;
    d.Parse(json.c_str());
    *turn = d["turn"].GetInt();
    *port = d["port"].GetInt();

}

string jsonComm::serializeChips(char letters[], int rows[], int cols[]){
    const char* json = "{\"letters\":\"abcdefg\","
                       "\"rows\":[0,0,0,0,0,0,0],"
                       "\"cols\":[0,0,0,0,0,0,0]}";

    Document d;
    d.Parse(json);

    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();

}

string jsonComm::serializeAddWord(string word){
    const char* json = "{\"word\":\"abcdefghi\"}";

    Document d;
    d.Parse(json);
    d["word"].SetString(word.c_str(), sizeof(char)*word.length());

    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);

    return buffer.GetString();
}

string jsonComm::deserializeAddWord(string json) {
    Document d;
    d.Parse(json.c_str());
    return d["word"].GetString();
}


string jsonComm::serializePlayerInfo(string name, int turn, int score, int amChips){
    const char* json = "{\"name\":\"name\","
                       "\"turn\":0,"
                       "\"score\":0,"
                       "\"amChips\":0}";

    Document d;
    d.Parse(json);
    d["name"].SetString(name.c_str(), sizeof(char)*name.length());
    d["turn"].SetInt(turn);
    d["score"].SetInt(score);
    d["amChips"].SetInt(amChips);

    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


void jsonComm::deserializePlayerInfo(string json, string *name, int *turn, int *score, int *amChips) {
    Document d;
    d.Parse(json.c_str());
    *name = d["name"].GetString();
    *turn = d["turn"].GetInt();
    *score = d["score"].GetInt();
    *amChips = d["amChips"].GetInt();
}

int jsonComm::getId(string json){
    Document d;
    d.Parse(json.c_str());
    return d["id"].GetInt();
}

