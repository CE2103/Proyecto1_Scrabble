#include "jsonComm.h"
#include <iostream>

#include "lib/rapidjson/prettywriter.h"
#include "lib/rapidjson/document.h"

using namespace rapidjson;

jsonComm::jsonComm(){

    word = "";

}

void jsonComm::setMessage(string word) {
    this->word = word;
}

template <typename Writer>
void jsonComm::Serializer(Writer &writer) const {

    writer.StartObject();
    writer.String("helloWorld");
    writer.String(word.c_str());
    writer.EndObject();

}

string jsonComm::serialize() {
    StringBuffer sB;
    Writer<StringBuffer> writer(sB);
    Serializer(writer);
    return sB.GetString();
}



jsonComm* jsonComm::Deserializer(const char* json){

    jsonComm* parsedPlayer = new jsonComm();
    Document doc;
    doc.Parse(json);
    string pword = doc["word"].GetString();

    parsedPlayer->setMessage(pword);
    return parsedPlayer;

}