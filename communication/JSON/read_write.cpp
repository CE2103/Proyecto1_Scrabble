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