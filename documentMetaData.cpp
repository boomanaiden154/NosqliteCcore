#include "documentMetaData.h"

documentMetaData::documentMetaData(std::string propertyName, int propertyValue)
{
    propertyNames.push_back(propertyName);
    propertyValues.push_back(jsonData(propertyValue));
}

documentMetaData::documentMetaData(std::string propertyName, std::string propertyValue)
{
    propertyNames.push_back(propertyName);
    propertyValues.push_back(jsonData(propertyValue));
}

documentMetaData::documentMetaData(std::string propertyName, double propertyValue)
{
    propertyNames.push_back(propertyName);
    propertyValues.push_back(jsonData(propertyValue));
}

documentMetaData::documentMetaData(std::string propertyName, float propertyValue)
{
    propertyNames.push_back(propertyName);
    propertyValues.push_back(propertyValue);
}

documentMetaData::documentMetaData(std::string propertyName, json propertyValue)
{
    propertyNames.push_back(propertyName);
    propertyValues.push_back(propertyValue);
}

documentMetaData::documentMetaData(std::string propertyName, jsonData propertyValue)
{
    propertyNames.push_back(propertyName);
    propertyValues.push_back(propertyValue);
}