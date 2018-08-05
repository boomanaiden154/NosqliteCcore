#pragma once

#include<string>

#include "json.h"

class jsonData
{
public:
    enum dataTypes {intType, stringType, doubleType, floatType, jsonType};
    dataTypes type;
	int intData;
	std::string stringData;
	double doubleData;
	float floatData;
	json* jsondata;
	jsonData & operator = (const int &);
	jsonData & operator = (const std::string &);
	jsonData & operator = (const double &);
	jsonData & operator = (const float &);
	jsonData & operator = (const json &);
	operator int(){ return intData; }
	operator std::string() { return stringData; }
	operator double() { return doubleData; }
	operator float() { return floatData; }
	operator json() { return *jsondata; }
	bool operator==(const int& data);
	bool operator==(const std::string& data);
	bool operator==(const double& data);
	bool operator==(const float& data);
	bool operator==(const jsonData& data);
	jsonData operator[] (std::string);
	jsonData(int);
	jsonData(std::string);
	jsonData(double);
	jsonData(float);
	jsonData(json);
	jsonData();
	~jsonData();
};

