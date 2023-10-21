
#pragma once
#ifndef _MOB_H_
#define _MOB_H_

#include "IMob.h"

#include <Object/unit_exists.h>


namespace  {
    class Slime {};

    class Zombie {};

    class Skeleton {};

    class Goblin {};

    class Dragon {};

    class Maus {};
}

class Mob : public IMob {
private:

    UnitExists unit;

    Slime    slime;
    Zombie   zombie;
    Skeleton skeleton;
    Goblin   goblin;
    Dragon   dragon;
    Maus     maus;

public:
    Mob(const Mob &)            = delete;
    Mob(Mob &&)                 = delete;
    Mob &operator=(const Mob &) = delete;
    Mob &operator=(Mob &&)      = delete;
    Mob();
    ~Mob() override;

    void init(int num) override;

};


#endif
