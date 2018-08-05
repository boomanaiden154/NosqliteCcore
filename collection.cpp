#include "collection.h"

void collection::Insert(json data)
{
    documents.push_back(document(data));
}

void collection::insertMany(std::vector<json> data)
{
    for(int i = 0; i < data.size(); i++)
    {
        documents.push_back(document(data[i]));
    }
}

json collection::findDocument(Find searchParameters)
{
    for(int i = 0; i < documents.size(); i++)
    {
        if(searchParameters.DoesMatch(documents[i]))
        {
            return documents[i].data;
        }
    }
}

std::vector<json> collection::findDocuments(Find searchParamters)
{
    std::vector<json> toreturn;
    for(int i = 0; i < documents.size(); i++)
    {
        if(searchParamters.DoesMatch(documents[i]))
        {
            toreturn.push_back(documents[i].data);
        }
    }
    return toreturn;
}

void collection::updateDocument(Find searchParameters, Update updateData)
{
    for(int i = 0; i < documents.size(); i++)
    {
        if(searchParameters.DoesMatch(documents[i]))
        {
            updateData.UpdateDocument(&documents[i]);
            break;
        }
    }
}

void collection::updateDocuments(Find searchParameters, Update updateData)
{
    for(int i = 0; i < documents.size(); i++)
    {
        if(searchParameters.DoesMatch(documents[i]))
        {
            updateData.UpdateDocument(&documents[i]);
        }
    }
}

void collection::removeDocument(Find searchParameters)
{
    for(int i = 0; i < documents.size(); i++)
    {
        if(searchParameters.DoesMatch(documents[i]))
        {
            documents.erase(documents.begin()+i+1);
            break;
        }
    }
}

void collection::removeDocuments(Find searchParameters)
{
    for(int i = 0; i < documents.size(); i++)
    {
        if(searchParameters.DoesMatch(documents[i]))
        {
            documents.erase(documents.begin()+i+1);
        }
    }
}

collection::collection()
{

}

collection::~collection()
{

}
