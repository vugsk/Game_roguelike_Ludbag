
#pragma once
#ifndef _MAP_GAME_H_
#define _MAP_GAME_H_

// #include <CWT/system_CWT.h>
#include <SDC/system.h>

class Map {
private:
    static Map* pointerInit;

    Map();

    vector_str mapField;

    void field();
    void dungeon();

public:
    Map(const Map &) = delete;
    Map(Map &&) = delete;
    Map &operator=(const Map &) = delete;
    Map &operator=(Map &&) = delete;
    ~Map();

    static Map *getInit();

    vector_str getPlayingField() { return mapField; }    

    void checkLocation(const int location);

};


#endif
