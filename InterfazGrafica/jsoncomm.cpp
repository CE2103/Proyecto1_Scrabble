#include <jsonComm.h>
#include <iostream>
#include <../rapidjson/document.h>

using namespace rapidjson;

jsonComm::jsonComm() {

}

string jsonComm::deserealizarinicio(string json){

    Document d;

    d.Parse(json.c_str());
    return d["gamecode"].GetString();

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

void jsonComm::deserializeCreateGame(string json, int* gameCode){
    Document d;
    d.Parse(json.c_str());
    *gameCode = d["gameCode"].GetInt();

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

void jsonComm::deserializeJoinGame(string json, int *turn, int *port){
    Document d;
    d.Parse(json.c_str());
    *turn = d["turn"].GetInt();
    *port = d["port"].GetInt();

}

string jsonComm::serializeChips(){
    const char* json = "{}";

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

