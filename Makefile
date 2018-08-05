flags := -std=c++11 -g

all: Nosqlite.o json.o jsonData.o document.o database.o collection.o Find.o documentMetaData.o Update.o
	g++ Nosqlite.o json.o jsonData.o document.o database.o collection.o Find.o documentMetaData.o Update.o -o main $(flags)
jsonData.o : jsonData.cpp jsonData.h
	g++ -c jsonData.cpp $(flags)
json.o: json.cpp json.h
	g++ -c json.cpp $(flags)
Nosqlite.o: Nosqlite.cpp
	g++ -c Nosqlite.cpp $(flags)
document.o : document.cpp document.h
	g++ -c document.cpp $(flags)
database.o : database.cpp database.h
	g++ -c database.cpp $(flags)
collection.o: collection.cpp collection.h
	g++ -c collection.cpp $(flags)
Find.o: Find.cpp Find.h
	g++ -c Find.cpp $(flags)
documentMetaData.o : documentMetaData.cpp documentMetaData.h
	g++ -c documentMetaData.cpp $(flags)
Update.o : Update.cpp Update.h
	g++ -c Update.cpp $(flags)

clean:
	rm ./Nosqlite.o
	rm ./json.o
	rm ./jsonData.o
	rm ./document.o
	rm ./database.o
	rm ./collection.o
	rm ./Find.o
	rm ./documentMetaData.o
	rm ./Update.o
	rm ./main
