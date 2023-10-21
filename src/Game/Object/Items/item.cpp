
#include "item.h"


string Item::getView() { 
    if (typeItem == 0) {
        return weapon.view;
    } else if (typeItem == 1) {
        return armor.view;
    } else {
        return "ERROR";
    }
}

/**
 * ID of the item:
 *  1. 0 - weapon, 1 - armor, 2 - potion
 *  weapons:
 *   0 - close combat, 1 - ranged combat
 *  armors:
 *   0 - helmet, 1 - chestplate, 2 - leggings, 3 - boot
 */

Item::Item(int typeItem) {
    this->typeItem = typeItem;
    
    if (typeItem == 0) {
    
        name = "sword";
        description = "a sword";
        damage = 10;
        type = "weapon";
        rarity = "rare";
        weapon.view = "close combat";
        id = "0.0";
    
    } else if (typeItem == 1) {

        name = "helmet";
        description = "a helmet";
        damage = 5;
        type = "armor";
        rarity = "rare";
        weapon.view = "helmet";
        id = "1.0";
    
    }

}

Item::~Item() {}
