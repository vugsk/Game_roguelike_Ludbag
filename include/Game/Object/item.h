
#pragma once
#ifndef _ITEM_H_
#define _ITEM_H_

#include "IItem.h"
#include "weapon.h"
#include "armor.h"

#include <Engine/system.h>

/*
    ! doing virtual method:
    !    1. Eat
    !    2. Potion
    !    3. Key
    !    4, Book
*/


class Item : public IItem {
protected:
    int _id;
    int typeItem;
    string id;
    
    string name;
    string description;
    string type; // weapon, armor, etc.
    string rarity;

    int damage;

    Weapon weapon;
    Armor armor;

public:
    Item(const Item &) = delete;
    Item(Item &&) = delete;
    Item &operator=(const Item &) = delete;
    Item &operator=(Item &&) = delete;
    
    Item(int typeItem);
    ~Item() override;

    string getId() override { return id; }
    string getName() override { return name; }
    string getDescription() override { return description; }
    string getType() override { return type; }
    string getRarity() override { return rarity; }
    int getDamage() override { return damage; }
    
    string getView() override;

};


#endif
