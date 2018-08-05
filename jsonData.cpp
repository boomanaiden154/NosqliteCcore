#include "jsonData.h"

jsonData & jsonData::operator=(const int &_intData)
{
    type = intType;
	intData = _intData;
	return *this;
}

jsonData & jsonData::operator=(const std::string &_stringData)
{
    type = stringType;
	stringData = _stringData;
	return *this;
}

jsonData & jsonData::operator=(const double &_doubleData)
{
    type = doubleType;
	doubleData = _doubleData;
	return *this;
}

jsonData & jsonData::operator=(const float &_floatData)
{
    type = floatType;
	floatData = _floatData;
	return *this;
}

jsonData & jsonData::operator=(const json &_jsondata)
{
    type = jsonType;
	*jsondata = _jsondata;
	return *this;
}

jsonData jsonData::operator[](std::string propertyName)
{
	if(jsondata != nullptr)
	{
		return (*jsondata)[propertyName];
	}
	else
	{
		return *this;
	}
}

bool jsonData::operator==(const int &data)
{
    return (intData == data);
}

bool jsonData::operator==(const std::string &data)
{
    return (stringData == data);
}

bool jsonData::operator==(const double &data)
{
    return(doubleData == data);
}

bool jsonData::operator==(const float &data)
{
    return (floatData == data);
}

bool jsonData::operator==(const jsonData &data)
{
    switch(type) {
        case intType : return data.intData == intData;
        case stringType : return data.stringData == stringData;
        case doubleType : return data.doubleData == doubleData;
        case floatType : return data.floatData == floatData;
        case jsonType : return data.jsondata == jsondata;
    }
}

jsonData::jsonData(int _data)
{
    intData = _data;
    type = intType;
}

jsonData::jsonData(std::string _data)
{
    stringData = _data;
    type = stringType;
}

jsonData::jsonData(double _data)
{
    doubleData = _data;
    type = doubleType;
}

jsonData::jsonData(float _data)
{
    floatData = _data;
    type = floatType;
}

jsonData::jsonData(json _data)
{
    *jsondata = _data;
    type = jsonType;
}

jsonData::jsonData()
{
	jsondata = nullptr;
	type = stringType;
}


jsonData::~jsonData()
{

}
