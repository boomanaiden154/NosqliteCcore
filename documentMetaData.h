#pragma once

#include<string>
#include<vector>

#include "jsonData.h"

class documentMetaData {
public:
    std::vector<std::string> propertyNames;
    std::vector<jsonData> propertyValues;
    documentMetaData(std::string, int);
    documentMetaData(std::string, std::string);
    documentMetaData(std::string, double);
    documentMetaData(std::string, float);
    documentMetaData(std::string, json);
    documentMetaData(std::string, jsonData);
};
