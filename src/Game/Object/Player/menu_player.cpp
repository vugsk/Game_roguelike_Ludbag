
#include "menu_player.h"


MenuPlayer* MenuPlayer::pointerInstance = nullptr;




// Specification
void Specifications::init() {
    // do {
    //     wrefresh(win->getWin());

    //     FOR_SIZE_T(i, textSpecifications.size()) {
    //         win->printStr(23, 2 + i, textSpecifications[i]);
    //     }

    //     win->printStr( 35, 2,  player->getName());
    //     win->printStr( 35, 3,  player->getGender());
    //     win->printStr( 35, 4,  player->getSpecies());
    //     win->printStr( 35, 5,  player->getClass());
    //     win->printStr( 35, 6,  player->getTitle());
    //     win->printStr( 35, 7,  to_string(player->getHp()));
    //     win->printStr( 35, 8,  to_string(player->getDmg()));
    //     win->printStr( 35, 9,  to_string(player->getProtection()));
    //     win->printStr( 35, 10, to_string(player->getMP()));
    //     win->printStr( 35, 11, to_string(player->getLvl()));
    //     win->printStr( 35, 12, to_string(player->getExp()));
        
    //     FOR_SIZE_T(i, textItemPlayer.size()) {
    //         if (player->getItems(i) == nullptr) {
    //             win->printStr(win->getX() - 30 + 4, 2 + i, textItemPlayer[i] + " \t");
    //         } else {
    //             win->printStr(win->getX() - 30 + 4, 2 + i, textItemPlayer[i] + ' ' + player->getItems(i)->getName());
    //         }
    //     }

    //     if (win->getChoice() == ESC) return;
    // } while(true);
}

Specifications::Specifications() {
    SettingNameClass SNC;
    RIniFile RIF(SNC.getPathFile("Player", false));

    textSpecifications    = RIF.readVectorStr("VectorTextSpecifications");;
    textItemPlayer        = RIF.readVectorStr("VectorTextItemPlayer");;

}

Specifications::~Specifications() {}










// Inventory

void Inventory::putItemWeapon(IItem *item) {
    const int MENU_X       = 30;
    const int MENU_Y       = 6;
    // const int MENU_BEGIN_X = (WIDTH_SCREEN_X / 2) - (MENU_X / 2);
    // const int MENU_BEGIN_Y = (LENGHT_SCREEN_Y / 2) - (MENU_Y / 2);
    
    // win->clearWin((win->getX()/2) - (MENU_X / 2), 
    //               (win->getY()/2) - (MENU_Y / 2), 
    //              (win->getX()/2) - (MENU_X / 2) + MENU_X, 
    //              (win->getY()/2) - (MENU_Y / 2) + MENU_Y);

    // CreateSubwin SW(win->getWin(), MENU_X, MENU_Y, MENU_BEGIN_X, MENU_BEGIN_Y);

    // wrefresh(win->getWin());
    // wrefresh(SW.getWin());

    // do {
    //     SW.printStr(1, 0, '[' + titleWinInventory + ']');

    //     SW.textSelection(textMenuRL, (SW.getX()/2)-3, 2);
    //     SW.wsOrAdButton(textMenuRL.size());

    //     if (SW.getChoice() == ENTER) {
    //         if (textMenuRL[SW.getHighlight()] == textMenuRL[0]) {
    //             items[5] = item;    
    //         } else if (textMenuRL[SW.getHighlight()] == textMenuRL[1]) {
    //             items[4] = item;
    //         }

    //         inventory[win->getHighlight_y()][win->getHighlight_x()] = nullptr;
    //         return;
    //     }
    // } while(true);
}

void Inventory::informationItem(IItem *item) {
    const int SIZE_VEC = 4;

    // win->drawWall(win->getY()-3, 30, false);

    // FOR_SIZE_T(i, textInfoWeapon.size()) win->printStr(win->getX()-26, 4+i, textInfoWeapon[i]);

    // win->printStr((win->getX() - 15) - (item->getName().size() / 4), 2, item->getName());
    // win->printStr( win->getX() - 21,                                 4, item->getName());
    // win->printStr( win->getX() - 21,                                 5, item->getView());
    // win->printStr( win->getX() - 21,                                 6, item->getType());
    // win->printStr( win->getX() - 16,                                 8, item->getRarity());
    // win->printStr( win->getX() - 20,                                 9, to_string(item->getDamage()));

    // do {
    //     win->textSelection(textMenuPieces, [this](int i, vector_str vec){
    //         if (i == 0) {
    //             win->printStr((win->getX() - 24) + i * 12, win->getY() - 2, vec[i]);
    //         } else {
    //             win->printStr((win->getX() - 24) + i * 12, win->getY() - 2, vec[i]);
    //         }
    //     });

    //     win->wsOrAdButton(textMenuPieces.size(), false);

    //     if (win->getChoice() == ENTER) {
    //         if (textMenuPieces[win->getHighlight()] == textMenuPieces[1]) {
    //             if (NUMBER_CHAR(&item->getId()[0]) == 0) {
    //                 putItemWeapon(item);
    //             } else if (NUMBER_CHAR(&item->getId()[0]) == 1) {
    //                 FOR_INT(i, SIZE_VEC) {
    //                     if (NUMBER_CHAR(&item->getId()[2]) == i) {
    //                         items[i] = item;
    //                     }
    //                 }
                    
    //                 inventory[win->getHighlight_y()][win->getHighlight_x()] = nullptr;
    //             } 
    //         }

    //         return;
    //     }
    // } while(true);
}

void Inventory::displayInventory(const size_t i, const size_t j) {
    // if (inventory[i][j]) {
    //     win->printStr(INVENTORY_X + j * SIZE_SLOT, INVENTORY_Y + i, inventory[i][j]->getName());
    // } else {
    //     win->printStr(INVENTORY_X + j * SIZE_SLOT, INVENTORY_Y + i, TEXT_NULL);
    // }    
}

void Inventory::init() {
    // do { 
    //     win->textSelectionTable(inventory, [this](const size_t i, const size_t j) {
    //         displayInventory(i, j);
    //     });

    //     win->wasdButton(inventory[win->getHighlight_y()].size(), inventory.size());

    //     if (win->getChoice() == ENTER) {
    //         if (inventory[win->getHighlight_y()][win->getHighlight_x()] != nullptr) {

    //             if (NUMBER_CHAR(&inventory[win->getHighlight_y()][win->getHighlight_x()]->getId()[0]) == 0 ||
    //                 NUMBER_CHAR(&inventory[win->getHighlight_y()][win->getHighlight_x()]->getId()[0]) == 1) {

    //                 informationItem(inventory[win->getHighlight_y()][win->getHighlight_x()]);
                
    //             }

    //             win->clearWin(win->getX() - 30, 1, win->getX() - 1, win->getY()-1);
    //         }

    //     } else if (win->getChoice() == ESC) {
    //         win->clearWin(22, 1, win->getX() - 32, win->getY()-2);
            
    //         return;
    //     }
    // } while(true);
}

Inventory::Inventory() {
    SettingNameClass SNC;
    RIniFile RIF(SNC.getPathFile("Player", false));
    
    titleWinInventory = RIF.readStr("VectorTextMenuRL.title");
    textMenuRL        = RIF.readVectorStr("VectorTextMenuRL");
    textMenuPieces    = RIF.readVectorStr("VectorTextMenuPieces");
    textInfoWeapon    = RIF.readVectorStr("VectorTextInfoWeapon");
    textInfoArmor     = RIF.readVectorStr("VectorTextInfoArmor");

}

Inventory::~Inventory() {}













void MenuPlayer::init(IPlayer *&player) {
    // win = new CreateWin(X_MENU, Y_MENU, X_BEGIN_MENU, Y_BEGIN_MENU);

    SettingNameClass SNC;
    RIniFile RIF(SNC.getPathFile("Player", false));
    
    const vector_str text_menu_player = RIF.readVectorStr("VectorTextMenuPlayer");

    // do {
    //     win->textSelection(text_menu_player, text_menu_player.size(), (win->getY() / 2) - 3);

    //     win->drawWall(19,               20);
    //     win->drawWall(win->getX() - 30, 20);
        
    //     win->wsOrAdButton(text_menu_player.size());

    //     if (win->getChoice() == ENTER) {
    //         FOR_SIZE_T(i, text_menu_player.size()) {
    //             if (text_menu_player[i] == text_menu_player[win->getHighlight()]) {
    //                 win->printStr(40, 0, "[ " + text_menu_player[win->getHighlight()] + " ]");
                    
    //                 if (i == 0) {
    //                     Specifications SP;

    //                     SP.player = player;
    //                     SP.win    = win;
                        
    //                     SP.init();
                        
    //                 } else if (i == 1) {
    //                     Inventory INV;
                        
    //                     INV.win       = win;
    //                     INV.inventory = player->getInventory();
    //                     INV.items     = player->getItems();

    //                     INV.init();

    //                     player->setItems(INV.items);
    //                     player->setInventory(INV.inventory);

    //                 } else if (i == 2) {
    //                     return;
    //                 } else {
    //                     return;
    //                 }
    //             }
    //         }
            
    //         box(win->getWin(), 0, 0);
    //     }
    // } while (true);
}

MenuPlayer* MenuPlayer::getInstance() {
    if (!pointerInstance) pointerInstance = new MenuPlayer();
    return pointerInstance;
}

MenuPlayer::MenuPlayer() {}

MenuPlayer::~MenuPlayer() {  }// delete win;
