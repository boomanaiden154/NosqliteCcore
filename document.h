#pragma once

#include<tuple>
#include<vector>
#include<string>

#include "json.h"

class document
{
public:
	json data;
	bool DoesPropetyEqual(std::string,jsonData);
	document();
	document(json);
	~document();
};

