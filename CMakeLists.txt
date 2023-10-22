cmake_minimum_required(VERSION 3.26)

project(Game)

## Boost
set(Boost_USE_STATIC_LIBS ON)
find_package(Boost REQUIRED COMPONENTS)

## Nlohmann json
find_package(nlohmann_json 3.2.0 REQUIRED)

## Curses
if(WIN32)
    include_directories(${PDCURSES_DIR})
    file(GLOB PDCURSES_SRC ${PDCURSES_DIR}/pdcurses/*.c)
    file(GLOB PDCURSES_SRC_WINCON ${PDCURSES_DIR}/wincon/*.c)
    add_library(pdcurses ${PDCURSES_SRC} ${PDCURSES_SRC_WINCON})
    target_compile_options(pdcurses PRIVATE -DPDC_WIDE -DPDC_FORCE_UTF8)
    set(PD_OR_N_CURSES pdcurses)
else()
    set(CURSES_NEED_NCURSES ON)
    find_package(Curses REQUIRED)
    include_directories(${CURSES_INCLUDE_DIR})
    set(PD_OR_N_CURSES ${CURSES_LIBRARIES})
endif()


file(GLOB SRC_ROOT src/*.cpp)

file(GLOB SRC_GAME_ROOT src/Game/*.cpp)
file(GLOB SRC_GAME_OBJECTS_PLAYER src/Game/Object/Player/*.cpp)
file(GLOB SRC_GAME_OBJECTS_MOBS src/Game/Object/Mobs/*.cpp)
file(GLOB SRC_GAME_OBJECTS_ITEMS src/Game/Object/Items/*.cpp)
file(GLOB SRC_GAME_MENU src/Game/menu/*.cpp)

file(GLOB SRC_ENG src/Engine/*.cpp)


include_directories(include/)
include_directories(/usr/local/include/COC)
include_directories(/usr/local/include/RWFC ${Boost_INCLUDE_DIRS})

add_executable(
    Game 
    ${SRC_ROOT} 
    ${SRC_ENG} 
    ${SRC_GAME_ROOT} 
    ${SRC_GAME_OBJECTS_PLAYER} 
    ${SRC_GAME_OBJECTS_MOBS} 
    ${SRC_GAME_OBJECTS_ITEMS} 
    ${SRC_GAME_MENU}
)

target_link_libraries(
    Game 
    /usr/local/lib/libCOC.a 
    /usr/local/lib/libReadWriteFileCpp.a 
    ${PD_OR_N_CURSES} 
    ${Boost_INCLUDE}
)
