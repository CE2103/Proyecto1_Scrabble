#include "lib/rapidjson/document.h"
#include "lib/rapidjson/prettywriter.h"
#include <cstdio>

using namespace rapidjson;
using namespace std;

//int main(int, char*[]) {
//
//    // 1. Parse a JSON text string to a document.
//
//    const char json[] = " { \"hello\" : \"world\", \"t\" : true , \"f\" : false, \"n\": null, \"i\":123, \"pi\": 3.1416, \"a\":[1, 2, 3, 4] } ";
//    printf("Original JSON:\n %s\n", json);
//    Document document;
//
//#if 0
//    if (document.Parse(json).HasParseError())
//        return 1;
//#else
//    char buffer[sizeof(json)];
//    memcpy(buffer, json, sizeof(json));
//    if (document.ParseInsitu(buffer).HasParseError())
//        return 1;
//#endif
//
//    printf("\nParsing to document succeeded.\n");
//
//    ////////////////////////////////////////////////////////////////////////////
//    // 3. Modify values in document.
//    {
//        uint64_t f20 = 1;
//        for (uint64_t j = 1; j <= 20; j++)
//            f20 *= j;
//        document["i"] = f20;
//        assert(!document["i"].IsInt());
//    }
//
//    {
//        Value &a = document["a"];
//        Document::AllocatorType &allocator = document.GetAllocator();
//        for (int i = 5; i <= 10; i++)
//            a.PushBack(i,
//                       allocator);
//        a.PushBack("Lua", allocator).PushBack("Mio", allocator);
//    }
//
//    {
//        document["hello"] = "rapidjson";
//    }
//
//    Value author;
//
//    {
//        char buffer2[10];
//        int len = sprintf(buffer2, "%s %s", "Milo", "Yip");
//
//        author.SetString(buffer2, static_cast<SizeType>(len), document.GetAllocator());
//        memset(buffer2, 0, sizeof(buffer2));
//    }
//
//
//    document.AddMember("author", author, document.GetAllocator());
//
//    assert(author.IsNull());
//
//
//    // 4. Stringify JSON
//
//    printf("\nModified JSON with reformatting:\n");
//    StringBuffer sb;
//    PrettyWriter<StringBuffer> writer(sb);
//    document.Accept(writer);
//    puts(sb.GetString());
//
//    return 0;
//
//}
