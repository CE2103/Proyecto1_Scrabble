#include "jsonComm.h"
#include <iostream>

using namespace rapidjson;

jsonComm::jsonComm() {

}

string jsonComm::serializeCreateGame(string name, string ip){
    const char* json = "{\"name\":\"name\","
                        "\"ip\":\"0.0.0.0\"}";

    Document doc;
    doc.Parse(json);
    doc["name"].SetString(name.c_str(), sizeof(char)*name.length());
    doc["ip"].SetString(ip.c_str(), sizeof(char)*ip.length());

    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    doc.Accept(writer);

    return buffer.GetString();

}

void jsonComm::deserializeCreateGame(string json, int* gameCode){
    Document doc;
    doc.Parse(json.c_str());
    *gameCode = doc["gameCode"].GetInt();

}

string jsonComm::serializeJoinGame(string gameCode, string name){
    const char* json = "{\"gameCode\":123456,"
                        "\"name\":\"name\"}";

    Document doc;
    doc.Parse(json);
    doc["gameCode"].SetInt(stoi(gameCode));
    doc["name"].SetString(name.c_str(), sizeof(char)*name.length());

    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    doc.Accept(writer);

    return buffer.GetString();

}

void jsonComm::deserializeJoinGame(string json){
    Document doc;
    doc.Parse(json.c_str());

}

string jsonComm::serializeChips(){
    const char* json = "{}";

    Document doc;
    doc.Parse(json);

    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    doc.Accept(writer);
    return buffer.GetString();

}

string jsonComm::serializeAddWord(string word){
    const char* json = "{\"word\":\"abcdefghi\"}";

    Document doc;
    doc.Parse(json);
    doc["word"].SetString(word.c_str(), sizeof(char)*word.length());

    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    doc.Accept(writer);

    return buffer.GetString();

}

void jsonComm::deserializePlayerInfo(string json, string *name, int *turn, int *score, int *amChips) {
    Document doc;
    doc.Parse(json.c_str());
    *name = doc["name"].GetString();
    *turn = doc["turn"].GetInt();
    *score = doc["score"].GetInt();
    *amChips = doc["amChips"].GetInt();
}

int jsonComm::getId(string json){
    Document doc;
    doc.Parse(json.c_str());
    return doc["id"].GetInt();
}

