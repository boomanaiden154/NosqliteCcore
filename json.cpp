#include "json.h"

jsonData &json::operator[](std::string propertyName)
{
	return data[propertyName];
}

json::json()
{

}

json::~json()
{

}
