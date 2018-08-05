#pragma once

#include<map>

#include "collection.h"

class database
{
public:
	database();
	collection* GetCollection(std::string);
	void createCollection(std::string);
	void DropCollection(std::string);
	~database();
private:
	std::map<std::string, collection*> collections;
};

