#pragma once

#include<vector>

#include "document.h"
#include "json.h"
#include "Find.h"
#include "Update.h"

class collection
{
public:
	std::vector<document> documents;
	std::string name;
	void Insert(json);
	void insertMany(std::vector<json>);
	json findDocument(Find);
	std::vector<json> findDocuments(Find);
	void updateDocument(Find, Update);
	void updateDocuments(Find, Update);
	collection();
	~collection();
};

