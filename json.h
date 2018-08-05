#pragma once

#include<map>
#include<string>

class jsonData;

class json
{
public:
	std::map<std::string, jsonData> data;
	jsonData &operator[] (std::string);
	json();
	~json();
};

#include "jsonData.h"
