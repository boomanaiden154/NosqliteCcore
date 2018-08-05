#include "database.h"
#include "collection.h"

#include<map>


database::database()
{

}

collection* database::GetCollection(std::string name)
{
	return collections[name];
}

void database::createCollection(std::string name)
{
	collections[name] = new collection();
}

void database::DropCollection(std::string name)
{
    delete collections[name];
    collections.erase(name);
}

database::~database()
{
	for (auto const& x : collections)
	{
		delete x.second;
	}
}
