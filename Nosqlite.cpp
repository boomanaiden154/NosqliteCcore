#include<string>
#include<iostream>

#include "jsonData.h"
#include "document.h"
#include "collection.h"
#include "json.h"
#include "Find.h"

int main()
{
    json JsonData;
    JsonData["testing"] = "test";
    document d(JsonData);
    collection c;
    c.documents.push_back(d);
    json j = c.findDocument(Find("testing","test"));
    std::string testString = j["testing"];
    std::cout << testString << "\n";
}

