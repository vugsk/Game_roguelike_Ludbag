
#pragma once
#ifndef _MENU_PLAYER_H_
#define _MENU_PLAYER_H_

#include "IPlayer.h"

// #include <RWF/SettingNameTestFile.h>
// #include <CWT/create_win.h>

namespace {
    #define TEXT_NULL "     +     "

    class Specifications {
    public:
        Specifications(const Specifications &)            = delete;
        Specifications(Specifications &&)                 = delete;
        Specifications &operator=(const Specifications &) = delete;
        Specifications &operator=(Specifications &&)      = delete;
        Specifications();
        ~Specifications();
        
        // vector_str textSpecifications;
        // vector_str textItemPlayer;   
        
        // CreateWin*       win;
        IPlayer_V2_TEST* player;

        void init();

    };
    
    class Inventory {
    public:
        const int INVENTORY_X = 28;
        const int INVENTORY_Y = 5;
        const int SIZE_SLOT   = 12;

        Inventory(const Inventory &)            = delete;
        Inventory(Inventory &&)                 = delete;
        Inventory &operator=(const Inventory &) = delete;
        Inventory &operator=(Inventory &&)      = delete;
        Inventory();
        ~Inventory();

        string     titleWinInventory;
        // vector_str textMenuRL;
        // vector_str textMenuPieces;
        // vector_str textInfoWeapon;
        // vector_str textInfoArmor;

        // CreateWin* win;

        // vector<vector<IItem*>> inventory;
        // vector<IItem*>         items;

        void init();
        void informationItem(IItem* item);
        void putItemWeapon(IItem* item);
        void displayInventory(const size_t i, const size_t j);
        
    };

    class Skills {};

}

class MenuPlayer {
private:
    static MenuPlayer* pointerInstance;

    const int X_MENU       = 100;
    const int Y_MENU       = 20;
    // const int X_BEGIN_MENU = (WIDTH_SCREEN_X/2) - (X_MENU/2);
    // const int Y_BEGIN_MENU = (LENGHT_SCREEN_Y/2) - (Y_MENU/2);;

    MenuPlayer();

    // CreateWin *win;

    int _errorNumber;

public:
    MenuPlayer(const MenuPlayer &)            = delete;
    MenuPlayer(MenuPlayer &&)                 = delete;
    MenuPlayer &operator=(const MenuPlayer &) = delete;
    MenuPlayer &operator=(MenuPlayer &&)      = delete;
    ~MenuPlayer();

    static MenuPlayer *getInstance();

    int getErrorNumber() { return _errorNumber; }
    void init(IPlayer *&player);

};



#endif
