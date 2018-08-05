#include "document.h"

bool document::DoesPropetyEqual(std::string propertyName, jsonData propertyValue)
{
    if(data[propertyName] == propertyValue)
    {
        return true;
    }
    else
    {
        return false;
    }
}

document::document()
{
	
}

document::document(json _data)
{
	data = _data;
}

document::~document()
{

}
