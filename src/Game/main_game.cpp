
#include "include/main_game.h"

#include "include/map_game.h"

// #include <CWT/create_win.h>
#include <RWF/SettingNameTestFile.h>

#include <Object/Player/player.h>

#include <Object/Items/factory.h>



int menuGame() {
    const int MENU_X = 16;
    const int MENU_Y = 10;

    SettingNameClass SMC;
    RIniFile RIF(SMC.getPathFile("Interface", false));
    // CreateWin menu(MENU_X, MENU_Y, (WIDTH_SCREEN_X/2)-(MENU_X/2), (LENGHT_SCREEN_Y/2)-(MENU_X/2));

    const vector_str textMenu = RIF.readVectorStr("VectorTextMenu");
    const string titleMenu = RIF.readStr("VectorTextMenu.textTitle");

    do {
        // menu.printStr(5, 0, '[' + titleMenu + ']');

        // menu.textSelection(textMenu, 3, 3);

        // menu.wsOrAdButton(textMenu.size());

        // if (menu.getChoice() == ENTER) {
        //     if (textMenu[menu.getHighlight()] == textMenu[0]) {
        //         return 0;
        //     } else {
        //         return 1;
        //     }
        // }

    } while (true);

}

int gameField() {

    Map* map = Map::getInit();
    IPlayer* player = Player::getInstance();
    player->createPlayer(player);


    IItem_Facrory* itemFactory = new Item_factory();
    vector<vector<IItem*>> items(2, vector<IItem*>(8, nullptr));

    FOR_INT(i, items.size()) {
        FOR_INT(j, items[i].size()) { 
            if (i == 0) items[i][j] = itemFactory->Create_weapon();
            else if (i == 1) items[i][j] = itemFactory->Create_armor();
        }
    }



    int errorNum = 0;
    int choice;

    do {
        map->checkLocation(0);

        #ifdef DEBUG
            // mvprintw(5, 5, "%s", items[0][0]->getName().c_str());
            // mvprintw(6, 5, "%s", items[1][0]->getName().c_str());

            // mvprintw(8, 5, "имя: %s", player->getName().c_str());
            // mvprintw(9, 5, "класс: %s", player->getClass().c_str());
            // mvprintw(10, 5, "пол: %s", player->getGender().c_str());
            // mvprintw(11, 5, "раса: %s", player->getSpecies().c_str());
        #endif

        player->move(choice, map->getPlayingField());




        // choice = getch();

        // if (choice == ESC) {
        //     errorNum = menuGame();
        //     if (errorNum == 1) {
        //         return 0;
        //     } else if (errorNum > 1) {

        //         FOR_SIZE_T(i, items.size()) {
        //             FOR_SIZE_T(j, items[i].size()) {
        //                 if (!items[i][j]) {
        //                     delete items[i][j];
        //                 }
        //             }
        //         }

        //         delete player;
        //         delete map;

        //         return 1;
        //     }

        // } else if (choice == KEY_I) {
        //     player->menuPlayer(player);
        // } else if (choice == KEY_R) {
        //     player->addInventory(items[0][0]);
        //     player->addInventory(items[1][0]);
        // }

    } while (true);

}

int mainGame() {
    int errorNum = 0;


    errorNum = gameField();
    if (errorNum) {
        return errorNum;
    }


    return 0;
}