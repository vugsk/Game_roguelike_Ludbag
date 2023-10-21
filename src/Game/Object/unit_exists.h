
#pragma once
#ifndef _UNIT_EXISTS_H_
#define _UNIT_EXISTS_H_

#include <string>

struct UnitExists {
    UnitExists(const UnitExists &)            = delete;
    UnitExists(UnitExists &&)                 = delete;
    UnitExists &operator=(const UnitExists &) = delete;
    UnitExists &operator=(UnitExists &&)      = delete;

    std::string name;
    std::string species;
    std::string gender;

    int hp;
    int dmg;
    int lvl;
    int exp;
    int strong;
    int power;

    bool dead;
    bool exists;
    bool spawned;

    int x, y;
    char icon;

    UnitExists() {
        spawned = false;
        dead = false;
    }

};


#endif
