#include "read_write.h"
#include "lib/rapidjson/writer.h"
#include <vector>
#include <numeric>
#include <sstream>
#include <iostream>

using namespace std;

void ReadWrite::ReadJson() {

}


void ReadWrite::WriteJson() {

}

void ReadWrite::WritePlayer1Json(){

    rapidjson::Document root;
    root.SetObject();

    auto &allocator = root.GetAllocator();
//    cout << "'Player:' 'player1'" << endl;
    root.AddMember(rapidjson::StringRef("name"), rapidjson::StringRef("angelo"), allocator);
    root.AddMember<int>(rapidjson::StringRef("turn"), true, allocator);
    root.AddMember<double>(rapidjson::StringRef("score"), 0, allocator);
    root.AddMember<uint32_t>(rapidjson::StringRef("amchips"), 7, allocator);


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    root.Accept(writer);

    std::cout << "Player Info: " << buffer.GetString() << std::endl;

}


void ReadWrite::WritePlayer2JSon(){

    rapidjson::Document root;
    root.SetObject();

    auto &allocator = root.GetAllocator();
//    cout << "'Player:' 'player1'" << endl;
    root.AddMember(rapidjson::StringRef("name"), rapidjson::StringRef("romario"), allocator);
    root.AddMember<int>(rapidjson::StringRef("turn"), false, allocator);
    root.AddMember<double>(rapidjson::StringRef("score"), 0, allocator);
    root.AddMember<uint32_t>(rapidjson::StringRef("amchips"), 7, allocator);


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    root.Accept(writer);

    std::cout << "Player Info: " << buffer.GetString() << std::endl;

}


void ReadWrite::JsonTraversal() {

}


void ReadWrite::OutputJson(const rapidjson::Value &root, const std::string &pre) {
    std::cout << pre << "{\n";

    for (auto iter = root.MemberBegin(); iter != root.MemberEnd(); ++iter) {
        std::cout << pre << "\t\"" << iter->name.GetString() << "(" << iter->value.GetType() << ")\": ";
        if (iter->value.GetType() == rapidjson::kObjectType) {
            OutputJson(iter->value, "\t\t");
        } else if (iter->value.GetType() == rapidjson::kArrayType) {
            std::cout << pre << "[\n";
            for (uint32_t i = 0; i < iter->value.Size(); ++i) {
                OutputJson(iter->value[i], "\t\t");
            }
            std::cout << pre << "\t],\n";
        } else {
            rapidjson::StringBuffer buffer;
            rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
            iter->value.Accept(writer);

            std::cout << buffer.GetString() << ",\n";
        }
    }
    std::cout << pre << "},\n";
}
