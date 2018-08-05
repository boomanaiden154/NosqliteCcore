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

database::~database()
{
	for (auto const& x : collections)
	{
		delete x.second;
	}
}
