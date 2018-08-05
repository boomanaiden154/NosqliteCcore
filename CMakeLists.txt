cmake_minimum_required(VERSION 3.12)
project(Nosqlite)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Nosqlite
        collection.cpp
        collection.h
        database.cpp
        database.h
        document.cpp
        document.h
        json.cpp
        json.h
        jsonData.cpp
        jsonData.h
        Makefile
        Nosqlite.cpp Find.cpp Find.h documentMetaData.cpp documentMetaData.h Update.cpp Update.h)
