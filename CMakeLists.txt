cmake_minimum_required(VERSION 3.26)

project(Game)

file(GLOB SRC_ROOT src/*.cpp)

file(GLOB SRC_GAME_ROOT src/Game/*.cpp)
file(GLOB SRC_GAME_OBJECTS_PLAYER src/Game/Object/Player/*.cpp)
file(GLOB SRC_GAME_OBJECTS_MOBS src/Game/Object/Mobs/*.cpp)
file(GLOB SRC_GAME_OBJECTS_ITEMS src/Game/Object/Items/*.cpp)
file(GLOB SRC_GAME_MENU src/Game/menu/*.cpp)

file(GLOB SRC_ENG_SDC src/Engine/SDC/*.cpp)

include_directories(include)

add_executable(Game ${SRC_ROOT} ${SRC_ENG_CWT} ${SRC_ENG_SDC} ${SRC_GAME_ROOT} ${SRC_GAME_OBJECTS_PLAYER} ${SRC_GAME_OBJECTS_MOBS} ${SRC_GAME_OBJECTS_ITEMS} ${SRC_GAME_MENU})

