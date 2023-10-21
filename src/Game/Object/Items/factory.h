
#pragma once
#ifndef _FACTORY_H_
#define _FACTORY_H_

#include "item.h"

class IItem_Facrory {
    public:
        virtual IItem* Create_weapon() = 0;
        virtual IItem* Create_armor() = 0;

        virtual ~IItem_Facrory() = 0;
        
};

class Item_factory : public IItem_Facrory {
    public:
        Item_factory() {}

        IItem* Create_weapon() override { return new Item(0); }
        IItem* Create_armor() override { return new Item(1); }

        ~Item_factory() override {}
};



#endif
