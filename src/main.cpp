
#include "Game/include/main_game.h"

#include <MainWindow.h>

#include <RWF/SettingNameTestFile.h>


int menu() {
    int errorNum = 0;
    
    const int MENU_X = 50;
    const int MENU_Y = 10;

    SettingNameClass SNC;
    RIniFile RIF(SNC.getPathFile("Interface", false));

    vector_str textMenu = RIF.readVectorStr("VectorTextMainMenu");
    
    string textTitle = RIF.readStr("StartMenuGame.textTitle");
    string textVersion = RIF.readStr("StartMenuGame.textVersion");
    string textCompany = RIF.readStr("StartMenuGame.textCompany");

    

    // if (comparingPathWithFile(SNC.getNameFileINI(), "RU")) {

    //     #ifdef DEBUG
    //         printw("language: RU");
    //     #endif

    //     mvprintw(3, (WIDTH_SCREEN_X / 2) - ((textTitle.size() / 2) / 2), "%s",
    //             textTitle.c_str());
    //     mvprintw((LENGHT_SCREEN_Y - 1), WIDTH_SCREEN_X - textVersion.size() + 7, "%s",
    //             textVersion.c_str());

    // } else if (comparingPathWithFile(SNC.getNameFileINI(), "EN")) { 
    //     mvprintw(3, (WIDTH_SCREEN_X / 2) - (textTitle.size() / 2), "%s",
    //             textTitle.c_str());
    //     mvprintw(LENGHT_SCREEN_Y - 1, WIDTH_SCREEN_X - textVersion.size() - 1, "%s",
    //             textVersion.c_str());
                
    // } else {
    //     return 1;
    // }

    // refresh();
    
    // CreateWin menu(MENU_X, MENU_Y, (WIDTH_SCREEN_X/2)-(MENU_X/2), (LENGHT_SCREEN_Y/2)-(MENU_Y/2));

    // do {
        
    //     menu.textSelection(textMenu, (menu.getX() / 2) - 5, 
    //         ((menu.getY() / 2) - (textMenu.size() / 2)));

    //     menu.wsOrAdButton(textMenu.size());
        
    //     if (menu.getChoice() == ENTER) {
    //         clear();

    //         if (textMenu[menu.getHighlight()] == textMenu[0]) {
    //             errorNum = mainGame();

    //             if (errorNum) {
    //                 return errorNum;
    //             }

    //         }
            
            return 0;
    //     }

    // } while (true);
}

int main() {

    // if (!mainWin::init()) {
    //     return 1;
    // }

    // int errorNum = menu();
    // if (errorNum) {
    //     mainWin::exit();
    //     cout << "ERROR: " << errorNum << endl;
    //     return 1;
    // }

    // mainWin::exit();
    
    return 0;
}

