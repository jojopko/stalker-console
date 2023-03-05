cmake_minimum_required(VERSION 3.18)

project(Stalker_Roguelike)

set(CMAKE_CURRENT_SOURCE_DIR source/)

set(SOURCES source/main.cpp
            source/game.cpp
            source/item.cpp)
            source/level.cpp
            source/entity.cpp)

set(HEADERS source/game.h
            source/entity.h
            source/coloredtext.h
            source/item.h
            source/level.h
            source/camera.h)

add_executable(stalker ${SOURCES} ${HEADERS})